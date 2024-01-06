//
// Created by HP on 11/3/2023.
//
#include <iostream>
using namespace std;

int main(){
    int n, br = 0, tmp, rev = 0, max;
    cin>>n;
    max = 10;
    if(n < 9){
        cout<<"Brojot ne e validen"<<endl;
        return 0;
    }
    for(int i = 9; i<n;i++){

        tmp = i;
        while(tmp != 0){
            rev = (rev * 10) + (tmp % 10);
            br++;
            tmp/=10;
        }
        if(rev % br == 0){
            max = i;
        }
        rev = 0;
        br = 0;
    }
    cout<<max;
    return 0;
}