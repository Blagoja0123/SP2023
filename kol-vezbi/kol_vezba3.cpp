//
// Created by HP on 11/3/2023.
//
#include <iostream>
using namespace std;

int main(){
    int n, max = 0, max_sumdel = 0;
    cin>>n;
    for(int i = 1; i<n; i++){
        int sumdel = 0;
        for(int j = 1; j <= (i/2);j++){
            if(i%j == 0){
                sumdel+=j;
            }
        }
        if(sumdel > max_sumdel){
            max_sumdel = sumdel;
            max = i;
        }
    }
    cout<<max<<endl;
    return 0;
}