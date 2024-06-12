#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m),c;

    for(int&i:a){cin >> i; c.push_back(i);}
    for(int&i:b){cin >> i; c.push_back(i);}

    sort(a.begin(), a.end());
    sort(c.begin(), c.end());

    for(int i = 0; i < n+m-1; i++){
        for(int j = 0; j < n-1; j++){
            if(c[i]==a[j] and c[i+1]==a[j+1]){cout << "Yes" << endl; return 0;}
        }
    }
    cout << "No" << endl;
    return 0;
}