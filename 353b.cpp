#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int&i:a) cin >> i;
    int ans=0, sum=0;

    for(int i = 0; i < n; i++){
        sum+=a[i];
        if(k < sum){
            ans++;
            sum=a[i];
        }
    }
    ans++;

    cout << ans << endl;
    return 0;
}