#include <iostream>
using namespace std;

int sum_pos(int* arr, int ind, int n){
    if(ind >= n) return 0;

    int sum = 0;

    for(int i = ind; i < n; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){

    int arr[100];
    int n, ind;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cin>>ind;
    cout<<sum_pos(arr, ind, n);
    return 0;
}