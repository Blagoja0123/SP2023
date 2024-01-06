#include <iostream>
using namespace std;

#define M 100
#define N 100

void getMatrixIn(int matrix[M][N], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>matrix[i][j];
        }
    }
}

int sumFirstQuad(int matrix[M][N], int x, int y){
    if(x-1 < 0 || y-1 < 0) return 0;
    int sum = 0;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            sum+=matrix[i][j];
        }
    }
    return sum;
}

int sumSecondQuad(int matrix[M][N], int x, int y, int n){
    if(x-1 < 0 || y-1 < 0) return 0;
    int sum = 0;
    for(int i = 0; i < x; i++){
        for(int j = y; j < n; j++){
            sum+=matrix[i][j];
        }
    }
    return sum;
}

int sumThirdQuad(int matrix[M][N], int x, int y, int m){
    if(y-1 < 0) return 0;
    int sum = 0;
    for(int i = x; i < m; i++){
        for(int j = 0; j < y; j++){
            sum+=matrix[i][j];
        }
    }
    return sum;
}

int sumFourthQuad(int matrix[M][N], int x, int y, int m, int n){
    if(x > m || y > n) return 0;
    int sum = 0;
    for(int i = x; i < m; i++){
        for(int j = y; j < n; j++){
            sum+=matrix[i][j];
        }
    }
    return sum;
}


int main(){
    int matrix[M][N];
    int m, n;
    int x, y;
    cin>>m>>n;
    getMatrixIn(matrix, m, n);
    cin>>x>>y;
    cout<<sumSecondQuad(matrix, x, y, n)<<" "
        <<sumFirstQuad(matrix, x, y)<<" "
        <<sumThirdQuad(matrix, x, y, m)<<" "
        <<sumFourthQuad(matrix, x, y, m, n)<<" "
        <<endl;
    return 0;
}