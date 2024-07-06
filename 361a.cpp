#include<iostream>
using namespace std;

int main(){
    int n,k,x;
    cin >> n >> k >> x;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(i==k){cout << x << ' ';}
        if(i!=n-1){cout << a << ' ';}
        else{
            if(k==n){cout << a << ' ';}
            else{cout << a;}
        }
    }
    if(k==n){cout << x << endl;}
    else{cout << endl;}
    return 0;
}