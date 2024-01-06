#include <iostream>
using namespace std;

int BrojPozitivni(int arr[], int n);

int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<BrojPozitivni(arr, n-1);
    return 0;
}

int BrojPozitivni(int arr[], int n){
    if(n == -1) return 0;

    return (arr[n] > 0 ? 1 : 0) + BrojPozitivni(arr, --n);
}

