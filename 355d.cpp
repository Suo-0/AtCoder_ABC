#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> l(n),r(n);
    for(long long i = 0; i < n; i++) cin >> l[i] >> r[i];
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());

    long long ans = n*(n-1)/2; //全事象(全ての区間が共通部分を持っている場合の数)

    long long a=0;
    for(long long i = 0; i < n; i++){ //余事象(共通部分を持たない場合の区間の数)を尺取り法で数え上げる
        while(r[a] < l[i]){ //共通部分を持たない範囲でwhileループ
            a++;
        }
        ans -= a;
    }

    cout << ans << endl;
    return 0;
}