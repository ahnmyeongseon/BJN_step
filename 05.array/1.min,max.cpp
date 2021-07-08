//
// Created by gohardsun on 2021/07/08.
//
//백준 10818 - 5-1. 최소 최대 - 우선순위큐를 사용하여 정렬
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int N, M;
    priority_queue<int> max;
    priority_queue<int> min;

    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> M;
        max.push(M);
        min.push(-M);
    }

    cout << -min.top() << " ";
    cout << max.top();
}