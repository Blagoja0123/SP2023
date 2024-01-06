#include <iostream>
#include <fstream>
using namespace std;

void writeToFile(){
    ofstream file("text.txt");
    char c;
    while((c = cin.get()) != '#'){
        file.put(c);
    }
    file.close();
}


bool isVowel(char ch){
    return ch == 'a' ||
           ch == 'e' ||
           ch == 'i' ||
           ch == 'o' ||
           ch == 'u';
}

int main(){
    writeToFile();
    ifstream file("text.txt");
    string line;
    int numVow = 0;
    while(getline(file, line)){
        if(line == "#") break;
        if(!(line.length())) {
//            cout << "Endline!" << endl;
            continue;
        }
        for(int i = 0; i < line.length()-1; i++){
            char a = tolower(line[i]);
            char b = tolower(line[i+1]);
            if(isVowel(a) && isVowel(b)){
                cout<<a<<b<<endl;
                numVow++;
            }
        }
    }
    cout<<numVow;
    return 0;
}