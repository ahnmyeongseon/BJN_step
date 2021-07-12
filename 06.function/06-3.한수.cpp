//백준 1065번 한수
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int hs(int n){

    int a1, a2, a3, cnt=0;

    for(int i=1; i<=n; i++){

        a1 = i/100; //100의 자리
        a2 = (i%100)/10; //10의 자리
        a3 = i%10; //1의 자리

        if( i < 100 || a1-a2 == a2-a3) cnt++;
    }

    return cnt;
}

int main(){
    int n;
    cin >> n;
    cout << hs(n);
}