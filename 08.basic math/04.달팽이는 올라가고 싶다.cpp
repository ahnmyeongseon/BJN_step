// 백준 2869번 달팽이는 올라가고싶다.
#include <iostream>

using namespace std;

int main() {
    int a, b, v;
    cin >> a >> b >> v;

    if((v-b)%(a-b) != 0 ){
        cout << (v-b)/(a-b)+1;
    }
    else cout << (v-b)/(a-b);
}