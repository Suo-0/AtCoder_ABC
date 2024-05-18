#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> name(n);
    int rate=0;
    for(int i = 0; i < n; i++){
        int t;
        cin >> name[i] >> t;
        rate+=t;
    }
    sort(name.begin(), name.end());

    int num = rate%n;
    cout << name[num] << endl;
    return 0;
}