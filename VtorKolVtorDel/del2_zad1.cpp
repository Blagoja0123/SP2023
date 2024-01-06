#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char *s){
    bool containsSpecial = false;
    for(int i = 0, j = strlen(s)-1; i <= j; i++, j--){
        if(s[i] != s[j]) return false;
        if(!isalpha(s[i]) && !isdigit(s[i])) containsSpecial = true;
    }
    return true && containsSpecial;
}

int main(){
    int n;
    cin>>n;
    int maxLen = 0;
    char *words;
    char *max;
    for(int i = 0; i < n; i++){
        words = new char[81];
        cin>>words;
        if(isPalindrome(words)){
            if(maxLen < strlen(words)){
                maxLen = strlen(words);
                strcpy(max,words);
            }
        }
        delete words;
    }
    if(maxLen == 0){
        cout<<"Nema!";
        return 0;
    }
    cout<<max<<endl;
}
