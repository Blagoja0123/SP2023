#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

char **splitStr(char *str, int &words, int size){
    char **result = new char*[size];
    char *temp;
    temp = strtok(str, " ");
    while(temp != nullptr){
        result[words++] = temp;
        temp = strtok(nullptr, " ");
    }

    return result;
}


int main(){
    char *str;
    int num;

    while(true){
        cin>>num;
        if(num == 0) break;
        int size = 0;
        str = new char[201];
        cin.getline(str, 201);
        char **numbers = splitStr(str, size, num);
        char *max = numbers[0];
        for (int i = 0; i < size; ++i) {
            if(max[0] < numbers[i][0]){
                max = numbers[i];
            }
        }
        cout<<max<<endl;
        delete str;
    }


    return 0;
}