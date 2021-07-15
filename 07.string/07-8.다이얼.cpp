// 백준 5622 다이얼
#include <iostream>

using namespace std;

int main(){
    string a;
    cin >> a;
    int i, k=3, j=0, index[26], sum=0;

    for(i=0; i<25; i++){
        index[i] = k;
        j++;
        if(j==3){
            if(i==17){ index[++i] = k;}
            k++;
            j=0;
        }
    }
    index[i] = k-1;
    //for(int j=0; j<26; j++) cout<<j<<":"<<index[j]<<endl;

    for(i=0; a[i] != '\0'; i++){
        sum += index[a[i]-65];
    }
    cout << sum ;
}