//
// Created by HP on 11/3/2023.
//
#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin>>n>>x;
    for(int i = n-1; n != 0; --i){
        int tmp = i;
        while(tmp != 0){
            bool contains = false;
            int xcpy = x;
            while(xcpy != 0){
                if(tmp%10 == xcpy%10){
                    break;
                }
                if(xcpy/10 == 0){
                    contains = true;
                    break;
                }
                xcpy /= 10;
            }
            if(!contains){
                break;
            }
            if(i == -1){
                cout<<0<<endl;
                return 0;
            }
            if(tmp/10 == 0){
                cout<<i;
                return 0;
            }
            tmp/=10;
        }
    }
}