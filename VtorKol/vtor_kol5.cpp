#include <iostream>
#include "cstring"
#include "cctype"

using namespace std;

char **splitStr(char *str, int &splitSize){
    char **result = new char*[3];
    char *temp;
    temp = strtok(str, R"( )");
    while(temp != nullptr){
        result[splitSize++] = temp;
        temp = strtok(nullptr, R"( )");
    }
    return result;
}

int main(){
    char input[20];
    int num;
    cin>>num;
    char **maxTip = new char*[3];
    float maxKoef = 0;
    float result = (float)num;
    cin.ignore();
    while(true){
        fgets(input, 20, stdin);
        if(input[0] == '#') break;
        int size = 0;
        char **split = splitStr(input, size);
        float koef = stof(split[2]);
        result *= koef;
        if(maxKoef < koef){
            maxKoef = koef;
            delete maxTip;
            maxTip = new char*[3];
            for (int i = 0; i < size; ++i) {
                maxTip[i] = new char[strlen(split[i])];
                strcpy(maxTip[i], split[i]);
            }
        }
    }
    for (int i = 0; i < 3; ++i) {
        if(i == 2)
            cout<<stof(maxTip[i])<<endl;
        else
            cout<<maxTip[i]<<" ";
            continue;

    }
    cout<<result<<endl;
}