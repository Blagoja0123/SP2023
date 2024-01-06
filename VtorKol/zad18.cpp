#include <iostream>
using namespace std;

float sumUnderMain(float matrix[100][100], int n){
    float sum = 0;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            sum+=matrix[i][j];
        }
    }
    return sum;
}

float sumUnderOther(float matrix[100][100], int n){
    float sum = 0;
    for(int i = n-1; i >= 0; i--){
        for(int j = n-i; j < n; j++){
            sum+=matrix[i][j];
        }
    }
    return sum;
}


int main(){
    float mat[100][100];
    float res[100][100];
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>mat[i][j];
        }
    }
    float x = sumUnderMain(mat, n);
    float y = sumUnderOther(mat, n);
    for(int i = 0; i < n; i++){
        res[i][i] += x;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) == (n - 1))
                res[i][j] += y;
        }
    }
//    cout<<y<<endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}