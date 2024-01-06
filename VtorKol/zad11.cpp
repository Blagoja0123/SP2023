#include <iostream>

using namespace std;

int main(){
    char str[101];
    while(true){
        int arr[10] = {0};
        int numdigits = 0;
        cin>>str;
        if(str[0] == '#') break;
        int i = 0;
        while(str[i] != '\0'){
            if(isdigit(str[i])){
                numdigits++;
                arr[str[i] - '0']++;
            }
            i++;
        }
        cout<<numdigits<<":";
        for (int j = 0; j < 10; ++j) {
            if(arr[j] == 0) continue;
            for (int k = 0; k < arr[j]; ++k) {
                cout<<j;
            }
        }
        cout<<endl;
    }
}