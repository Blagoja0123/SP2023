#include <iostream>
using namespace std;

#define MAX_M 100
#define MAX_N 100

void inputMatrix(int matrix[MAX_M][MAX_N], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>matrix[i][j];
        }
    }
}

void generateMedium(int matrix[MAX_M][MAX_N], float mediums[MAX_M], int m, int n){
    for(int i = 0; i < m; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum+=matrix[i][j];
        }
        mediums[i] = (float)sum/n;
    }
}

float absVal(float x){
    return (x >= 0) ? x : x*(-1);
}

int main(){
    int m, n;
    int matrix[MAX_M][MAX_N];
    float mediums[MAX_M], dists[MAX_M];
    int result[MAX_M];
    cin>>m>>n;
    inputMatrix(matrix, m, n);
    generateMedium(matrix, mediums, m, n);

    for(int i = 0; i < m; i++){
        result[i] = 0;
    }
    for(int i = 0; i < m; i++){
        float maxDist = 0;
        for(int j = 0; j < n; j++){
            float exp = absVal(mediums[i] - (float)matrix[i][j]);
            if(exp > maxDist){
                maxDist = exp;
//                cout<<exp<<" : "<<matrix[i][j]<<" : "<<maxDist<<endl;
                result[i] = matrix[i][j];
                continue;
            }
            if(exp == 0 && maxDist ==0){
                maxDist = exp;
                result[i] = matrix[i][j];
            }
        }
    }
    for(int i = 0; i < m; i++){
        cout<<result[i]<<" ";
    }
    return 0;
}


