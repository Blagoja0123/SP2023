//
// Created by HP on 11/3/2023.
//
#include <iostream>
using namespace std;

int hexaval(char ch){
    if(ch >= '0' && ch <='9') return ch - '0';

    switch(ch){
        case 'A':
        case 'a': return 10;
        case 'B':
        case 'b': return 11;
        case 'C':
        case 'c': return 12;
        case 'D':
        case 'd': return 13;
        case 'E':
        case 'e': return 14;
        case 'F':
        case 'f': return 15;
        default: return 0;
    }
}

int main(){
    char hex;
    int sum = 0;
    do{
        cin>>hex;
        sum += hexaval(hex);
    }while(hex != '.');
    if(sum % 16 == 0 && sum % 100 == 16){
        cout<<"Poln pogodok";
    }else if(sum%16 == 0){
        cout<<"Pogodok";
    }else{
        cout<<sum;
    }
}