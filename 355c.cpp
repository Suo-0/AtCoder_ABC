#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,t;
    cin >> n >> t;
    vector<int> row(n,0),col(n,0);
    int naname1 = 0, naname2 = 0;

    for(int k = 0; k < t; k++){
        int a;
        cin >> a;
        a--;
        int i = a/n, j = a%n;

        row[i]++;
        col[j]++;
        if(i==j) naname1++;
        if(i==n-j-1) naname2++;

        if(row[i]==n or col[j]==n or naname1==n or naname2==n){cout << k+1 << endl; return 0;}
    }
    cout << -1 << endl;
    return 0;
}