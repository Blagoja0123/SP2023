#include <iostream>
using namespace std;

int sum_pos(int *arr, int ind, int n){
    if(ind >= n) return 0;

    int sum = 0;
    for(int i = ind; i < n; i++){
        sum+=*(arr+i);
    }
    return sum;
}

int main(){
    int n, ind;
    cin>>n;
    int *arr = (int*)(malloc(sizeof(int) * n));
    for(int i = 0; i < n; i++){
        int a;
        cin>>a;
        *(arr+i) = a;
    }
    cin>>ind;
    cout<<sum_pos(arr, ind, n);
    free((void*)arr);
}