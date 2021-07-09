//백준 8958  5-6. OX퀴즈
//vs에서 돌려보

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){

    int N, j=0, sum=0;
    char ox[81], p='O', last;

    cin >> N;
    p = cin.get();
    cout << endl;

    for(int i=1; i<=N; i++){
        sum = 0;
        j = 0;
        p = cin.get();

        while(1){

            if(p == 'O'){
                j++;
                sum += j;
            }
            else if(p == 'X'){
                j = 0;
            }
            else if(p == '\n') break;

            p = cin.get();

        }

        cout << sum << endl;
    }

}