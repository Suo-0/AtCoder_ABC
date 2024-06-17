#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<int> a(n),b(m);
    long long b_sum = 0;
    for(int&i:a) cin >> i;
    for(int&i:b) cin >> i, b_sum += i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long ans=0;
    int c=0;
    int cnt=0; //全てのbに配っているかを確かめるカウント
    for(int i = 0; i < m; i++){
        for(int j = c; j < n; j++){
            if(b[i] <= a[j]){ans += a[j]; c++; cnt++; break;}
            else{c++; continue;}
        }
    }

    if(cnt!=b.size()) cout << -1 << endl;
    else if(ans < b_sum) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}