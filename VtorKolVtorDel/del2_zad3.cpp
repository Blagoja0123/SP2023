#include <iostream>
#include <cstring>
using namespace std;

void lower(char *strs, char *lowered){
    int i = 0;
    while(strs[i] != '\0'){
        lowered[i] = tolower(strs[i]);
        i++;
    }
    lowered[i] = '\0';
}

bool containsSubstr(char *str){
    int count = 0;
    for (int i = 0; i < strlen(str)-2; ++i) {
//        cout<<str[i]<<" "<<str[i+1]<<" "<<str[i+2]<<endl;
        if(str[i] == 'a' && str[i+1] == '1' && str[i+2] == 'c'){
            count++;
        }
    }
//    cout<<str<<" : "<<count<<endl;
    return count >= 2;
}

int main(){
    char str[100][51];
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>str[i];
        char lowered[51];
        lower(str[i], lowered);
//        cout<<lowered<<endl;
        if(containsSubstr(lowered)){
            cout<<lowered<<endl;
        }
    }
}