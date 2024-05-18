#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> p(n); //value(key)
    vector<int> data(n); //key(value)
    set<int> q;
    for(int i = 0; i < n; i++){
        cin >> p[i];
        data[p[i]-1]=i;
    }
    for(int i = 0; i < k; i++) q.insert(data[i]);

    int ans=1e9;
    for(int i = k; i < n; i++){
        int minDif = *q.rbegin() - *q.begin();
        if(ans > minDif) ans = minDif;
        q.erase(data[i-k]);
        q.insert(data[i]);
    }
    int minDif = *q.rbegin() - *q.begin();
    if(ans > minDif) ans = minDif;

    cout << ans << endl;
}