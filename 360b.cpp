#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;

    for(int w = 1; w < s.size(); w++){
        for(int c = w; c >= 1; c--){
            string str="";
            for(int i = 0; i*w < s.size(); i++){
                if(i*w+c-1 < s.size()) str += s[i*w+c-1];
            }
            //cout << str << endl;
            if(str == t){cout << "Yes" << endl; return 0;}
        }
    }
    cout << "No" << endl;
    return 0;
}