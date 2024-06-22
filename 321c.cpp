#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){ //k番目に小さい321likeNumを探す -> 最大の値は9876543210である
    int k;
    cin >> k;
    vector<long long> num;

    for(int bit = 1; bit < (1<<10); bit++){ //1のビットが立っている数字を使う
        long long tmp=0;
        int index = __builtin_popcount(bit);
        for(int i = 9; i >= 0; i--){
            if(bit & (1<<i)){tmp += pow(10,index-1) * i; index--;}
        }
        num.push_back(tmp);
    }

    sort(num.begin(), num.end());
    cout << num[k] << endl;
    return 0;
}