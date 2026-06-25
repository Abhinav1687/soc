#include <bits/stdc++.h>
using namespace std;

bool yes(long double a,long double b){
    if(a>b) return 1;
    else return 0;
}

void solve() {
    long double a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    e=b*log(a);
    f=d*log(c);
    if(yes(e,f))cout<<"YES";
    else cout<<"NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
