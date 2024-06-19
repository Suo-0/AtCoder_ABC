#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<string> name(k);

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(i<k){name[i]=s;}
    }

    sort(name.begin(), name.end());
    for(auto&s:name){cout << s << endl;}
    return 0;
}