//백준 2562 - 5-2. 최댓값 - 효율적으로 생각
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int M, K=1, max = -2147000000, idx=0;
    int arr[10];

    for(int i=1; i<=9; i++){
        cin >> arr[i];

        if( max <= arr[i]){
            max = arr[i];
            idx = i;
        }

    }

    cout << max << endl;
    cout<< idx;

}