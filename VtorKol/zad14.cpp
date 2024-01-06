#include <iostream>

using namespace std;


int main(){
    int A[50][100], B[100][50];
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n*2; ++j) {
            cin>>A[i][j];
            if(j < n) { B[i][j] = A[i][j]; }
            else { B[n + i][j - n] = A[i][j]; }
        }
    }
    for (int i = 0; i < n*2; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
}