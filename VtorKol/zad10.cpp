#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    char input[100][81];
    int size = 0;
    char z1, z2;
    while(true){
        fgets(input[size], 81, stdin);
        if(input[size][0] == '#') break;
        size++;
    }
    cin>>z1>>z2;
    for (int i = 0; i < size; ++i) {
        int start = 0, end = strlen(input[i]);
        for (int j = 0; j < end; ++j) {
            if(input[i][j] == z1){
                start = j;
                break;
            }
        }
        for (int j = end; j >= start; --j) {
            if(input[i][j] == z2){
                end = j;
                break;
            }
        }
        if(start == end) continue;
        for (int j = start+1; j < end; ++j) {
            cout<<input[i][j];
        }
        cout<<endl;
    }
}