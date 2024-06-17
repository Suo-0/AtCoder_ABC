#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<string> s(n);

    for(string&i:s) cin >> i;

    int minShop=n;
    for(int bit = 0; bit < (1<<n); bit++){ //訪れる売り場のビット全探索
        set<int> st;
        int cnt=0;
        for(int i = 0; i < n; i++){
            if(bit & (1<<i)){ //i番目の売り場に訪れているか
                cnt++;
                for(int j = 0; j < m; j++){
                    if(s[i][j]=='o'){st.insert(j);}
                }
            }
        }
        if(st.size()==m){minShop = min(cnt,minShop);}
    }

    cout << minShop << endl;
    return 0;
}