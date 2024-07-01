#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,t;
    string s;
    cin >> n >> t >> s;
    vector<int> xl,xr;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(s[i]=='0') xl.push_back(x);
        else xr.push_back(x);
    }

    sort(xr.begin(),xr.end());
    sort(xl.begin(),xl.end());
    int r=0,l=0;
    long long cnt=0;
    for(int i = 0; i < xr.size(); i++){
        int right_end = xr[i] + 2*t;
        while(xr[i] > xl[l] and xl.size() > l) l++;
        while(right_end >= xl[r] and xl.size() > r) r++;

        cnt += r-l;
    }
    cout << cnt << endl;
    return 0;
}