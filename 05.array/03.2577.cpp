//백준 2577 5-3.숫자의 갯수

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int ch[9];
int main(){
    int a, b, c, mul=0, n=0, m=0;

    cin >> a >> b >> c;
    mul = a*b*c;

    while(mul/10 != 0){
        n = mul/10; // 몫
        m = mul%10; // 나머지

        mul = n;
        ch[m] += 1;
    }
    ch[n] += 1;

    for(int i=0; i<=8; i++){
        cout << ch[i] << endl;
    }
    cout << ch[9];

}