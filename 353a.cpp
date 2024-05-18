#include<iostream>
#include<vector>
using namespace std;

int main(){
    int ans=-1;
    int n;
    int first;
    cin >> n >> first;
    for(int i = 1; i < n ;i++){
        int h;
        cin >> h;
        if(first < h){ans = i+1; break;}
    }
    cout << ans << endl;

    return 0;
}