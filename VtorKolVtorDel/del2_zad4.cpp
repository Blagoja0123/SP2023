#include <iostream>
using namespace std;

int minimal(int mat[30][30], int m, int n){
    int min = mat[0][0];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if(min > mat[i][j]) min = mat[i][j];
        }
    }
    return min;
}

int main(){
    int mat[30][30];
    int m, n;
    int r, k;
    cin>>m>>n;
    cin>>r>>k;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>mat[i][j];
        }
    }
    int min = minimal(mat, m, n);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i < r && j < k){
                mat[i][j] = min;
            }
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}