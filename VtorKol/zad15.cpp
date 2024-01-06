#include <iostream>
using namespace std;

//int poramnet(int a){
//    if(a < 9) return a;
//    return ((a%10 != 9) ? a%10 : 7) + 10 * poramnet(a/10);
//}

int poramnet(int a){
    if(a < 10) return a;
    if(a%10 != 9){
        return a%10 + 10 * poramnet(a/10);
    }else{
        return 7 + 10 * poramnet(a/10);
    }
}

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int *arr, int size){
    for(int i = 0; i < size-1; ++i){
        for(int j = i+1; j < size; ++j){
            if(arr[j] < arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }
}

int main(){
    int n;
    int arr[100]= {0};
    int i = 0;
    while(cin>>n){
        arr[i] = poramnet(n);
        ++i;
    }
    bubbleSort(arr, i);
    for(int j = 0; j < 5; j++){
        if(j >= i){
            break;
        }else cout<<arr[j]<<" ";
    }
}