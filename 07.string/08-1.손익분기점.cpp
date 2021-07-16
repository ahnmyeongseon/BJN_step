#include <iostream>

using namespace std;

int main(void){
    int a, b, c;
    int n = 1;
    cin>> a >> b >> c;

    if(b >= c){
        cout << -1;
        return 0;
    }

    cout<< a/(c-b) + 1;
}