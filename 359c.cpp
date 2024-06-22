#include<iostream>
using namespace std;

int main(){ //yの差とxの差の関係で求める
    pair<long long, long long> s,t;
    cin >> s.first >> s.second >> t.first >> t.second;

    //タイルの左右は関係ないので、条件を揃えるために右->左
    if((s.first+s.second) %2 == 1){s.first--;}
    if((t.first+t.second) %2 == 1){t.first--;}

    long long y_abs = abs(s.second - t.second), x_abs = abs(s.first - t.first);
    long long xy = x_abs - y_abs;

    if(xy>0){xy/=2;}

    if(xy>0){cout << y_abs + xy << endl;}
    else{cout << y_abs << endl;}

    return 0;
}