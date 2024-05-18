#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long ans=0;
    long long bMax=-1;

    for(int i = 0; i < n; i++){
        long long a,b;
        cin >> a >> b;
        ans+=a;
        if(b-a > bMax) bMax=b-a;
    }
    ans+=bMax;

    cout << ans << endl;
}