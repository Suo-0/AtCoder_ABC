#include<iostream>
using namespace std;

int main(){
    int a,b,c,d; //左下(a,b) 右上(c,d)
    cin >> a >> b >> c >> d;
    long long h,w;
    h = abs(d-b), w = abs(c-a);

    long long ans = h*w;

    if(a < 0 and c >= 0){
        if(abs(a%4 + c%4)==1 and abs(a) > c) ans--; //疎1
        if(abs(a%4 + c%4)==2 and abs(a) > c) ans-=2; //疎2
        if(abs(a%4 + c%4)==0) //0,0
        if(abs(a%4 + c%4)==2 and abs(a) < c) ans+=2; //密2
        if(abs(a%4 + c%4)==1 and abs(a) < c) ans++; //密1
    }
    if(a < 0 and c < 0){
        if(abs(a%4 + c%4)==1 and abs(a) > c) ans--; //疎1
        if(abs(a%4 + c%4)==2 and abs(a) > c) ans-=2; //疎2
        if(abs(a%4 + c%4)==0) //0,0
        if(abs(a%4 + c%4)==2 and abs(a) < c) ans+=2; //密2
        if(abs(a%4 + c%4)==1 and abs(a) < c) ans++; //密1
    }
    if(a >= 0 and c >= 0){
        if(abs(a%4 + c%4)==1 and abs(a) > c) ans--; //疎1
        if(abs(a%4 + c%4)==2 and abs(a) > c) ans-=2; //疎2
        if(abs(a%4 + c%4)==0) //0,0
        if(abs(a%4 + c%4)==2 and abs(a) < c) ans+=2; //密2
        if(abs(a%4 + c%4)==1 and abs(a) < c) ans++; //密1
    }

    cout << ans << endl;
    return 0;
}