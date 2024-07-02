#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long n;
    int x,y;
    cin >> n;

    long long a=1;
    for(int i = 0; i < 50; i++){
        long long b=1;
        if(a*b==n){cout << "Yes" << endl; return 0;}
        for(int j = 0; j < 100; j++){
            if(a*pow(2,j)==n){cout << "Yes" << endl; return 0;}
        }
        a*=3;
    }
    cout << "No" << endl;
    return 0;
}