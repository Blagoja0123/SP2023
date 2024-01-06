//Цик-цак е број за кој што важи дека за секој пар соседни цифри, тие се наизменично
// поголеми односно помали една во однос на друга. На пример, ако
// бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:
//
//a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e
//
//Пр. 343, 4624, 6231209
//3 > 4 || 3 < 4
// 3 < 4 => znak = 0;
//34 % 10 <= 3

#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        if(n < 10) continue;
        int cpy = n;
        bool sign;
        if(n%10 > n/10%10){
            sign = true;
        }else if(n%10 < n/10%10){
            sign = false;
        }else continue;

        while(cpy != 0) {
            cpy /= 10;
            if(cpy < 10) {
                cout<<n<<endl;
                break;
            }
            if(sign){
                if(cpy%10>= cpy/10%10) break;
            }else{
                if(cpy%10<= cpy/10%10) break;
            }
            sign = !sign;
        }
    }
    return 0;
}