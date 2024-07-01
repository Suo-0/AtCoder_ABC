#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<long long> a2z(26,0);
    long long cnt=0;

    for(int i = 0; i < 26; i++){
        for(int j = 0; j < s.size(); j++){
            if(s[j]=='a'+i){a2z[i]++;}
        }
    }

    cnt = s.size() * s.size();
    bool same=0;
    for(int i = 0; i < 26; i++){
        if(a2z[i]>=2) same=1;
        cnt -= a2z[i]*a2z[i];
    }
    cnt /= 2;
    if(same) cnt++;
    cout << cnt << endl;
    return 0;
}