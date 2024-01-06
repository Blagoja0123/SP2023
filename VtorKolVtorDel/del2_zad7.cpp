#include <iostream>
using namespace std;


void premesti(int arr[], int n){
    int pos[n], neg[n];
    int i = 0, j = 0;
    for (int k = 0; k < n; ++k) {
        if(arr[k] >= 0){
            pos[i++] = arr[k];
        }else{
            neg[j++] = arr[k];
        }
    }
    int k = 0;
    while(k < i){
        arr[k] = pos[k];
        k++;
    }
    int j2 = 0;
    while(k < n){
        arr[k] = neg[j2];
        j2++;
        k++;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    premesti(arr, n);
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}