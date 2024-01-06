#include <iostream>
using namespace std;

#define MAX 100

float fraction(int arr[MAX], int index, int limit){
    if(index == limit) return arr[index];

    return (float)arr[index] + ((float)1/fraction(arr, ++index, limit));
}

int main(){
    int n;
    int arr[MAX];
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    cout<<fraction(arr, 0, n-1);
    return 0;
}