#include<iostream>
using namespace std;

int sumRange(int arr[], int start, int end){
    int sum = 0;
    for(; start <= end; start++){
        sum+=arr[start];
    }
    return sum;
}

int absVal(int x){
    return (x >= 0) ? x : x*(-1);
}

int main(){
    int mat[100][100];
    int m, n;
    cin>>m>>n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>mat[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        if(n%2 == 1){
//            cout<<sumRange(mat[i], 0, n/2)<<endl;
//            cout<<sumRange(mat[i], n/2, n-1)<<endl;
            mat[i][n/2] = absVal(sumRange(mat[i], 0, n/2) - sumRange(mat[i], n/2, n-1));
        }else{
//            cout<<sumRange(mat[i], 0, n/2-1)<<endl;
//            cout<<sumRange(mat[i], n/2, n-1)<<endl;
//            cout<<sumRange(mat[i], 0, n/2-1) - sumRange(mat[i], n/2, n-1)<<endl;
            int exp = absVal(sumRange(mat[i], 0, (n/2)-1) - sumRange(mat[i], n/2, n-1));
//            cout<<n/2<<endl;
            mat[i][(n/2)-1] = exp;
            mat[i][(n/2)] = exp;
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}