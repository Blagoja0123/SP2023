//
// Created by HP on 11/3/2023.
//
#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;
    for(int i = 0; i<m;i++){
        for(int j = 0; j<m;j++){
            if(i == 0 || i == m-2){
                if(j == 0){
                    cout<<"%";
                }
                if(j == m-2){
                    cout<<"%"<<endl;
                    break;
                }
                cout<<"@";
            }else{
                if(j == 0){
                    cout<<"%";
                }
                if(j == m-2){
                    cout<<"%"<<endl;
                    break;
                }
                cout<<".";
            }
        }
    }
}