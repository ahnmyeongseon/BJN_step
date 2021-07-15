//백준 2908번

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    stirng a, b;
    int a_int, b_int;
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    a_int = stoi(a);
    b_int = stoi(b);

    if(a_int > b_int) cout << a_int;
    else cout << b_int;

    return 0;
}