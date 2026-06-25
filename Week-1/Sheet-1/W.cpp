#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,x;
    char d,e;
    cin>>a>>d>>b>>e>>x;
    if(d=='+'){
        c=a+b;
    }
    else if(d=='-'){
        c=a-b;
    }
    else c=a*b;
    if(x==c) cout<< "Yes";
    else cout<< c;
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
