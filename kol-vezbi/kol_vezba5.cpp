//
// Created by HP on 11/3/2023.
//
#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    if( n <= 0 || m <= 0){
        cout<<"Invalid input";
        return 0;
    }
    if(n < m){
        int tmp = n;
        n = m;
        m = tmp;
    }
    while(n != 0){
        n /=10;
        if(m%10 != n%10){
            cout<<"NE";
            return 0;
        }
        n /= 10;
        m /= 10;
    }
    cout<<"PAREN"<<endl;
    return 0;
}