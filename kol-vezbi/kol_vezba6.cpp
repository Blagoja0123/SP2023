//
// Created by HP on 11/3/2023.
//
#include <iostream>
using namespace std;

int main(){
    int z, br = 0, bre = 0;
    cin>>z;
    int a, b;
    do{

        cin>>a>>b;
        if(a == 0 && b == 0){
            break;
        }
        br++;
        if(a + b == z){
            bre++;
        }
    }while(!(a == 0 && b == 0));
    float sol = ((float)bre/br) * 100;

    cout<<"Vnesovte "<<bre<<" parovi od broevi chij zbir e "<<z<<endl;
    cout<<"Procentot na parovi so zbir "<<z<<" e "<<sol<<"%"<<endl;
}