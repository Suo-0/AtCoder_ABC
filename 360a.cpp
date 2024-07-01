#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int r=0, m=0;
    for(int i = 0; i < 3; i++){
        if(s[i]=='R') r=i;
        if(s[i]=='M') m=i;
    }
    if(r<m) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}