#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<char> c(n+1);

    for(int i = 0; i <= n; i++){
        bool minusF = 1; //-を挿入するかの判定
        for(int j = 1; j < 10; j++){
            if(n%j == 0){
                if(i % (n/j) == 0){
                    c[i]='0'+j;
                    minusF=0;
                    break;
                }
            }
        }
        if(minusF) c[i]='-';
    }

    for(int i = 0; i < n+1; i++){
        cout << c[i];
    }
    cout << endl;
    return 0;
}