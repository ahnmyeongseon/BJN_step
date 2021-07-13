//백준 2675번 문자열반복

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int T, R;
    string str ="";
    string nstr = "";

    cin >> T;

    for(int i=0; i<T; i++) {
        nstr = "";
        cin >> R;
        cin >> str; // str[0] , str[1]

        for (int j = 0; str[j] != '\0'; j++) {
            for(int k=0; k<R; k++) nstr +=str[j];
        }
        cout << nstr << endl;
    }

}