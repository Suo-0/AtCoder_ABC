#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    int index=0;
    vector<int> ans;

    for(int i = 0; i < t.size(); i++){
        if(s[index]==t[i]){index++; ans.push_back(i+1);}
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i];
        if(i!=ans.size()-1) cout << ' ';
        else cout << endl;
    }
    return 0;
}