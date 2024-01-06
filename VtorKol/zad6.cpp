#include <iostream>
using namespace std;

#define MAX_N 100
#define MAX_M 100

int checkCols(int mat[MAX_M][MAX_N], int rows, int cols){
    int counter = 0;
    bool passed[cols];
    for(int i = 0; i < cols; i++){
        passed[i] = false;
    }
    for(int i = 0; i < rows-2; i++){
        for(int j = 0; j < cols; j++){
            if(passed[j]) continue;
            if(mat[i][j] && mat[i+1][j] && mat[i+2][j]) {
                counter++;
                passed[j] = true;
            }
        }
    }
    return counter;
}

int checkRows(int mat[MAX_M][MAX_N], int rows, int cols){
    int counter = 0;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols-2; j++){
            if(mat[i][j] && mat[i][j+1] && mat[i][j+2]) {
                counter++;
                break;
            }
        }
    }
    return counter;
}

int main(){
    int m, n;
    int mat[100][100];
    cin>>m>>n;
    for(int i = 0; i < m ; i++){
        for(int j = 0; j < n; j++){
            cin>>mat[i][j];
        }
    }
    int validRows = checkRows(mat, m, n);
    int validCols = checkCols(mat, m, n);
    cout << validRows + validCols << endl;
    return 0;
}

