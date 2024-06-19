#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int x;
    long long p=1;
    for(x = 0; p*2 < n; x++){p*=2;}

    cout << n*x + 2*(n-p)<< endl;
}
/*
9
4 5
2 2 2 3
1 1 1 1 1 1 1 2
             1 1
8
4 4
2 2 2 2
1 1 1 1 1 1 1 1

7
3 4
1 2 2 2
 1 1 1 1 1 1
*/

//n->a+b, a+b=n and a<=b 差は0or1
//parent->left, parent->rightの二分木を考えると、1が存在しない部分の木の高さは x [2^x < n <= 2^(x+1) のとき]
//1の数はn個, 根の数は 2*(n - 2^x)
//総和は n*x + 2*(n- 2^x)