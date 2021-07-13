//백준 10809번 알파벳찾기

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int index[26];
    char S[101];

    cin >> S;
    fill_n(index, 26, -1);

    for(int i=0; S[i] != '\0'; i++){
        if(index[S[i]-97] == -1) {
            index[S[i] - 97] = i;
        }
    }

    for(int i=0; i<=25; i++){
        cout << index[i] << " ";
    }


}