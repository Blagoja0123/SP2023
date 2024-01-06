#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int *shiftRight(int *arr, int n){
    int *res = new int[n];
    int arrc = 0;
    for (int i = 0; i < n; ++i) {
        if((i+1)<=arr[0]){
            res[i] = 0;
        }else{
            res[i] = arr[arrc++];
        }
    }
    return res;
}

int abs(int a){
    return (a >= 0) ? a : a*(-1);
}

int *shiftLeft(int *arr, int n){
    int *res = new int[n];
    int arrc = n-1;
    for (int i = 0, j = n-1; j >= 0; ++i, --j) {
        if((i+1)<=abs(arr[0])){
            res[j] = 0;
        }else{
            res[j] = arr[arrc--];
        }
    }
    return res;
}

void printArr(int *arr, int n){
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int numEmpty = 0;
    for (int i = 0; i < n; ++i) {
        int m;
        cin>>m;
        int arr[m];
        for (int j = 0; j < m; ++j) {
            cin>>arr[j];
        }
        if(arr[0] >= m || abs(arr[0]) >= m){
            numEmpty++;
            for (int j = 0; j < m; ++j) {
                arr[j] = 0;
            }
            printArr(arr, m);
            continue;
        }
        if(arr[0] >= 0){
            int *shifted = shiftRight(arr, m);
            printArr(shifted, m);
        }else{
            int *shifted = shiftLeft(arr, m);
            printArr(shifted, m);
        }
    }
    cout<<numEmpty;
}