//
// Created by HP on 11/3/2023.
//
#include <iostream>
using namespace std;

// parna cifra : cifra % 2 == 0

int main(){
    int start, end;
    cin>>start>>end;
    for(int i = start; i <= end; i++){
        int tmp = i;
        while(tmp!=0){
            if((tmp%10)%2 == 1){
                break;
            }
            if(tmp/10 == 0){
                cout<<i;
                return 0;
            }
            tmp /= 10;
        }
    }
    cout<<"NE"<<endl;
    return 0;
}