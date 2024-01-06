//
// Created by HP on 11/6/2023.
//
#include <iostream>
using namespace std;

int main(){
    int n;
    int sumPrev = 0;
    int maxVal;
    for(int i = 0; cin>>n; i++){
        if(i == 0){
            int cpy = n;
            maxVal = cpy%10;
            while(cpy != 0){
                if(cpy%10 > maxVal){
                    maxVal = cpy%10;
                }
                sumPrev+=cpy%10;
                cpy/=10;
            }
            cout<<n<<": "<<sumPrev<<endl;
            sumPrev = maxVal;
            continue;
        }
        int cpy = n;
        maxVal = cpy%10;
        while(cpy != 0){
            if(cpy%10 > maxVal){
                maxVal = cpy%10;
            }
            sumPrev+=cpy%10;
            cpy/=10;
        }
        cout<<n<<": "<<sumPrev<<endl;
        sumPrev = maxVal;
    }
}