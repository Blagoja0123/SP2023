//
// Created by HP on 11/14/2023.
//
#include <iostream>
using namespace std;

int main(){
    int num;
    while(cin>>num){
        if(num < 10) continue;
        int cpy = num;
        bool sign;
        if(cpy%10 < 5){
            sign = true;
        }else sign = false;

        while(cpy != 0){
            cpy /= 10;
            if(cpy == 0){
                cout<<num<<endl;
                break;
            }
            if(sign){
                if(cpy%10 < 5) break;
            }else{
                if(cpy%10 >= 5)break;
            }
            sign = !sign;
        }
    }
}