#include <iostream>
using namespace std;

float mat[50][50];

float mean(int row, int col, int m, int n){
    float sum = 0, numEl = 0;
    for(int i = row-1; i <= row+1; i++){
        if(i < 0 ||  i == m) continue;
        for(int j = col-1; j <= col+1; j++){
            if(j < 0 || j == n) continue;
            sum += mat[i][j];
            numEl++;
        }
    }
    return sum/numEl;
}


int main(){
    int m, n;
    cin>>m>>n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>mat[i][j];
        }
    }
    int x1, x2, y1, y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    float newMat[50][50];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(i >= x1 && i <= x2 && j >= y1 && j <= y2){
                newMat[i][j] = mean(i, j, m, n);
                continue;
            }
            newMat[i][j] = mat[i][j];
        }
//        cout<<endl;
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<newMat[i][j]<<" ";
        }
        cout<<endl;
    }
}