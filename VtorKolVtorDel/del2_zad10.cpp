#include <iostream>
using namespace std;

int pow(int b, int exp){
    if(exp == 0) return 1;
    return b * pow(b, exp-1);
}


int indeksen(int i, int j){
    if(j == 0) return i*10;
    int digits = 0;
    int tmp = j;
    while(tmp != 0){
        digits++;
        tmp/=10;
    }
    return i * pow(10, digits) + j;
}



int main(){
    int arr[120] = {0};
    int n, m;
    cin>>n>>m;
    int mat[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>mat[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if(mat[j][i] == indeksen(j, i)){
                arr[i]++;
            }
        }
    }
    for (int i = 0; i < m; ++i) {
        cout<<arr[i]<<endl;
    }
}