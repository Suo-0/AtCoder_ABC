#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    if('A' <= s[0] and s[0] <= 'Z'){
        if('A' <= s[7] and s[7] <= 'Z'){
            if('1' <= s[1] and s[1] <= '9'){
                for(int i = 2; i < 7; i++){
                    if('0' <= s[i] and s[i] <= '9'){}
                    else{cout << "No" << endl; return 0;}
                }
                cout << "Yes" << endl; return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}