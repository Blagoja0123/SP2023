#include <iostream>

using namespace std;

void swap(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; ++i) {
        for (int j = i+1; j < n; ++j) {
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    int current = arr[0];
    int count = 1;
    for (int i = 0; i < n-1; ++i) {
        for (int j = i+1; j < n; ++j) {
            if(current == arr[j]){
                count++;
            }else{
                if(count%2 == 0){
                    cout<<"Najmaliot element koj se pojavuva paren broj pati e "<<current<<endl;
                    return 0;
                }else{
                    current = arr[j];
                    count = 1;
                    break;
                }
            }
        }
    }
    cout<<"Nitu eden element ne se pojavuva paren broj pati!";
}