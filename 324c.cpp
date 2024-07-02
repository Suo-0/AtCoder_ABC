//処理がとてもわかりにくいコード
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    string t;
    cin >> n >> t;

    vector<string> s(n);
    vector<int> ans;
    long long ansCnt=0;
    for(string&i:s) cin >> i;

    for(int i = 0; i < n; i++){
        int flag=0;
        if(t.size()+1 < s[i].size()){continue;}
        if(t.size()-1 > s[i].size()){continue;}

        int cnt=0;
        if(t.size() == s[i].size()){ //一致もしくは一文字変更
            for(int j = 0; j < s[i].size(); j++){
                if(s[i][j] != t[j]){
                    flag++;
                    if(flag>=2){break;}
                }
            }
        }
        if(t.size()+1 == s[i].size()){ //一文字挿入
            for(int j = 0; j < s[i].size(); j++){
                if(s[i][j] != t[cnt]){
                    cnt--;
                    flag++;
                    if(flag>=2){break;}
                }
                cnt++;
            }
        }
        if(t.size()-1 == s[i].size()){ //一文字削除
            for(int j = 0; j < s[i].size(); j++){
                if(s[i][j] != t[cnt]){
                    cnt++;
                    if(s[i][j] != t[cnt]) flag++;
                    flag++;
                    if(flag>=2){break;}
                }
                cnt++;
            }
        }
        if(flag==0 or flag==1){
            ansCnt++;
            ans.push_back(i+1);
        }
    }

    cout << ansCnt << endl;
    for(int i = 0; i < ans.size(); i++){cout << ans[i] << (i==ans.size()-1 ? '\n' : ' ');}
    return 0;
}