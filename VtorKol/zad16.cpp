#include <iostream>
using namespace std;

int max(int a, int b){
    return (a > b) ? a : b;
}

int maxDigit(int a){
    if(a == 0) return 0;
    return max(a%10, maxDigit(a/10));
}

int main(){
   int n;
   while(cin>>n){
       cout<<maxDigit(n)<<endl;
   }
}