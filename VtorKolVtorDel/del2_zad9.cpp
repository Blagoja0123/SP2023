#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

char **splitStr(char *str, int &words){
    char **result = new char*[100];
    char *temp;
    temp = strtok(str, " \t\n.,;:!?");

    while(temp != nullptr){
        result[words++] = temp;
        temp = strtok(nullptr, " \t\n.,;:!?");
    }
    return result;
}

int numJoin(char *str){
    int words = 0;
    int count = 0;
    char **split = splitStr(str, words);
    for (int i = 0; i < words; ++i) {
        if(strlen(split[i]) <= 3){
            count++;
        }
    }
    return count;
}


int main(){
    char sent[100][101];
    char *maxSent = nullptr;
    int maxCount = 0;
    int i = 0;
    while(true){
        fgets(sent[i], 101, stdin);
        if(strlen(sent[i]) == 1) break;
        char *cpy;
        cpy = new char[strlen(sent[i]) + 1];
        strcpy(cpy, sent[i]);
        int count = numJoin(sent[i]);
        if(count > maxCount){
            maxCount = count;
            maxSent = new char[101];
            strcpy(maxSent, cpy);
//            cout<<maxSent<<endl;
        }
        delete[] cpy;
        i++;
    }
    cout<<maxCount<<": "<<maxSent<<endl;
    delete[] maxSent;

}