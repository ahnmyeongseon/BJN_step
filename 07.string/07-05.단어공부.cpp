// 백준 1157번
// 주어진 단어에서 가장 많이 사용된 알파벳을 출력하는 문제

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string a;
    char A;
    int max=-2147000000, index[26] = {0,}, cnt=0;

    cin >> a;

    transform(a.begin(), a.end(), a.begin(), ::toupper);

    for(int i=0; i<=a.length(); i++){
        index[a[i]-65]++;
    }

    for(int i=0; i<26; i++){
        if(index[i] == max) {
            max = index[i];
            cnt++;
        }
        if(index[i] > max){
            max = index[i];
            A = i+65;
            cnt = 0;
        }
    }
    if(cnt == 0) cout << A << endl;
    else cout << "?" << endl;

}
