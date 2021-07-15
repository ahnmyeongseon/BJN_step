// 백준 2941번 - 크로아티아 알파벳
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> croa = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int index;
    string str;
    cin >> str;

    for(int i=0; i<croa.size(); i++){
        while(1){
            index = str.find(croa[i]);

            //크로아티아 문자열이 없을 경우
            if(index == -1) break;

            //크로아티아 문자열 -> '!'으로 바꾸기
            str.replace(index, croa[i].length(), "!");

        }
    }

    cout << str.length();
}