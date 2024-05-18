#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long h;
    cin >> h;
    long long tall=1;
    int day=1;
    while(h >= tall){
        tall+=pow(2,day);
        day++;
    }

    cout << day << endl;
    return 0;
}