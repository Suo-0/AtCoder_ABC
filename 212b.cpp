#include<iostream>
using namespace std;

int main(){
    string pass;
    cin >> pass;
    bool weak1=1, weak2=1;
    int num9=-1;
    for(int i = 0; i < 3; i++){
        if(pass[i]!=pass[i+1]){weak1=0;}
        if(pass[i]=='9'){num9=i;}
    }

    if(num9>=0){
        for(int i = 0; i < 3; i++){
            if(num9==i){
                if(pass[i+1]!='0'){weak2=0;}
            }else{
                if(pass[i]+1 != pass[i+1]){weak2=0;}
            }
        }
    }else{
        for(int i = 0; i < 3; i++){
            if(pass[i]+1 != pass[i+1]){weak2=0;}
            }
    }

    if(weak1){cout << "Weak" << endl;}
    else if(weak2){cout << "Weak" << endl;}
    else{cout << "Strong" << endl;}
}