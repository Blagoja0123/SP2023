#include <iostream>
using namespace std;

#define M 100
#define N 100

void transform(int row[], int filler, int n){
    for(int i = 0; i < n; i++){
        row[i] = filler;
    }
}

int determineFiller(int row[], int n, int x){
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum+=row[i];
    }
    if(sum > x) return 1;
    if(sum < x) return -1;
    return 0;
}

int main(){
    int matrix[M][N];
    int m, n, x;
    cin>>x;
    cin>>m>>n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>matrix[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        int filler = determineFiller(matrix[i], n, x);
//        cout<<filler<<endl;
        transform(matrix[i], filler, n);
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}