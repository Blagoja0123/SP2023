#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    char input[101];
    int start = 0, end = 0;
    int maxLen = 0;
    char *maxStr = nullptr;
    while(true){
        fgets(input, 101, stdin);
        if(input[0] == '0') break;
        int currStart, currEnd;
        for (int i = 0; i < strlen(input); ++i) {
            if(isdigit(input[i])){
                currStart = i;
                break;
            }
        }
        for (int i = strlen(input); i >= 0 ; --i) {
            if(isdigit(input[i])){
                currEnd = i;
                break;
            }
        }
        if(currEnd == currStart) continue;
        int len = currEnd - currStart;
        if(len >= maxLen){
            maxLen = len;
            end = currEnd;
            start = currStart;
            maxStr = new char[strlen(input)];
            strcpy(maxStr, input);
        }
    }
    for (int i = start; i <= end; ++i) {
        cout<<maxStr[i];
    }
}