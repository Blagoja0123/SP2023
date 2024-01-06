#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int matSize;
    for(matSize = 0; matSize*matSize < num; matSize++ );
    int mat[400][400] = {0};
    int number = 1;
    for(int i = 0; i < matSize; i++){
        if(i%2 == 0){
            for(int j = 0; j < matSize && number <= num; j++){
//                cout<<number<<" ";
                mat[j][i] = number++;
            }
        }else if(i%2 != 0){
            for(int j = matSize-1; j >= 0 && number <= num; j--){
//                cout<<number<<" ";
                mat[j][i] = number++;
            }
        }
//        cout<<endl;
    }
    for (int i = 0; i < matSize; ++i) {
        for (int j = 0; j < matSize; ++j) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}