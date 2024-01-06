//
// Created by HP on 11/3/2023.
//
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    int sum = 0;
    int num = 0, digits = 0;
    do{
        cin>>noskipws>>ch;
        if(ch == ' '){
//            cout<<"SPACE"<<endl;
            sum += num;
            num = 0;
            digits = 0;
            continue;
        }
        if(ch >= '0' && ch <= '9'){
            digits++;
            num = num * 10 + (ch - '0');
        }else{
            sum += num;
            num = 0;
            digits = 0;
        }
    }while(ch != '!');
    cout<<sum<<endl;
}