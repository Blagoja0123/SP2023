#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

bool isLetter(char ch){
    return (ch >= 'A' && ch <= 'Z')
            || (ch >= 'a' && ch <= 'z');
}

bool isUpper(char ch){
    return (ch >= 'A' && ch <= 'Z');
}

char shiftedCh(char ch, int shift, bool capital){
    if(capital){
        ch = ((ch + shift)-'A')%26+'A';
        return ch;
    }else{
        ch = ((ch + shift)-'a')%26+'a';
        return ch;
    }
}

void encrypt(char* str, int size, int shift){
    if(size < 0){
        return;
    }
    if(isLetter(str[size])){
        if(isUpper(str[size])){
            str[size] = shiftedCh(str[size], shift, true);
        }else{
            str[size] = shiftedCh(str[size], shift, false);
        }
    }
    encrypt(str, size - 1, shift);
}


int main(){
    int n, x;
    cin>>n>>x;
    x%=26;
    for(int i = 0; i <= n; i++){
        char* str;
        str = new char[81];
        cin.getline(str, 81);
        encrypt(str, strlen(str)-1, x);
        if(i == 0){
            cout<<str;
        }else{
            cout<<str<<endl;
        }
        delete str;
    }
}