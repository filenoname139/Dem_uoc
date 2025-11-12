// 10 gom cac uoc 1 2 5 10
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
// giai thuat ngay tho
int demuoc1(ll n){
    int dem=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            dem++;
        }
    }
    return dem;
}
// ---------------------
int demuoc2(ll n){
    int dem=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            dem++;
            int j=n/i;
            if(i!=j){
                dem++;
            }
        }
    }
    return dem;
}
// ---------------------
map<int,int> pttsnt(ll n){
    map<int,int> thuaso;
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            thuaso[i]++;
            n/=i;
        }
    }
    if (n>1) {
		thuaso[n]++;
	}
    return thuaso;
}
int main(){
//    freopen("HACGIAY.inp","r",stdin);
//    freopen("HACGIAY.out","w",stdout);
    ll n;
    cin >> n;
    map<int,int> tsnt=pttsnt(n);
    int demuoc3=1;
    for(auto x:tsnt){
        demuoc3*=(x.second+1);
    }
    cout << demuoc3;
    return 0;
}
