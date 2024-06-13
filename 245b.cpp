#include<iostream>
#include<set>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans=0;
    set<int> set;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        set.insert(a);
    }
    for(auto ite = set.begin(); ite != set.end(); ite++){
        if(ans == *ite){ans++;}
    }
    cout << ans << endl;
    return 0;
}