#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n),w(n);
    vector<vector<int>> box(n,vector<int>());

    for(int&i:a) cin >> i;
    for(int&i:w) cin >> i;
    for(int i = 0; i < n; i++){box[a[i]-1].push_back(w[i]);}

    int cost=0;
    for(int i = 0; i < n; i++){
    sort(box[i].begin(),box[i].end());
        for(int j = 0; j < box[i].size(); j++){
            //cout << box[i][j] << ' ';
            if(j!=box[i].size()-1){cost+=box[i][j];}
        }
        //cout << endl;
    }
    cout << cost << endl;
}