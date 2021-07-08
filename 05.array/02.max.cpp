//
// Created by gohardsun on 2021/07/08.
//
//백준 2562 5-2. 최댓값
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int M, K=1, max = -2140000, cnt1=0, cnt2=0;
    int arr[10];

    for(int i=1; i<=9; i++){
        cin >> arr[i];
    }

    while( K != 10 ){
        if(arr[K] > max){
            max = arr[K];
        }
        K++;
    }

    for(int i=1; i<=9; i++){
        if(arr[i] == max){
            cout << max << endl;
            cout << i;
            break;
        }
    }

}