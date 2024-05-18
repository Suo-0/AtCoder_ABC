#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//各a[i]をn-1回足し合わせ、a[i]+a[j]が1e8を超えた回数分を1e8でひけばいい
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    long long ans=0;
    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++) ans += (long long)(a[i]) * (n-1);

    long long cnt=0;
    int right=n;
    for(int i = 0; i < n; i++){
        right = max(right,i+1);
        while(right-1 > i and a[right-1]+a[i] >= 100000000) right--;

        cnt += n-right;
    }
    ans -= cnt*100000000;
    cout << ans << endl;

    return 0;
}