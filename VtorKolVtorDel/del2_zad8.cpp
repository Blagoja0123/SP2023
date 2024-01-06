#include <iostream>
#include <cstring>
using namespace std;

#define MAX 50

int main(){
    int i,j, n;
    char word[11];

    char a[MAX][MAX];

    cin>>n;

    for (i=0; i<n; ++i){
        for (j=0; j<n; ++j){
            fscanf(stdin,"%c ", &a[i][j]);
        }
    }

    fgets(word,10,stdin);
    word[strlen(word)-1] = '\0';

    int found = 0;
    int k;

    int wl = strlen(word);

    int sr=-1, sc=-1, er=-1, ec=-1;

    for (i=0; i<n; ++i){
        for (j=0; j<n; ++j){
            if (a[i][j]==word[0]){
                sr = i;
                sc = j;

                for (k=1; k < wl;k++){
                    if ((j+k) >= n ) {found = 0; break; }
                    if (word[k] != a[i][j+k]) { found=0; break;}
                    er = i;
                    ec = j+k;
                }
                if (k==wl) { found = 1; break;}

                for (k=1; k < wl;k++){
                    if ((j-k) < 0 ) {found = 0; break; }
                    if (word[k] != a[i][j-k]) { found=0; break;}
                    er = i;
                    ec = j-k;
                }
                if (k==wl) { found = 1; break;}

                for (k=1; k < wl;k++){
                    if ((i+k) >=n ) {found = 0; break; }
                    if (word[k] != a[i+k][j]) { found=0; break;}
                    er = i+k;
                    ec = j;
                }
                if (k==wl) { found = 1; break;}

                for (k=1; k < wl;k++){
                    if ((i-k) < 0 ) {found = 0; break; }
                    if (word[k] != a[i-k][j]) { found=0; break;}
                    er = i-k;
                    ec = j;
                }
                if (k==wl) { found = 1; break;}
            }
        }
        if (found){
            break;
        }
    }

    if (found){
        printf("%d, %d -> %d, %d", sr, sc, er, ec);
    }
    else { printf("Not Found"); }
    return 0;
}