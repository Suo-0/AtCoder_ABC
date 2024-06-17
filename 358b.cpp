#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,a;
    cin >> n >> a;
    vector<int> t(n);
    for(int&i:t) cin >> i;

    vector<int> ans(n,0);
    for(int i = 0; i < n; i++){
        if(i==0){ans[i] = t[i] + a;}
        else{
            if(ans[i-1] > t[i]){ans[i] = ans[i-1] + a;}
            else{ans[i] = t[i] + a;}
        }
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] << endl;
    }
    return 0;
}