#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<=c && b>=c){
        cout<<c<<" "<<min(b,d);
    }
    else if(c<=a && d>=a){
        cout<<a<<" "<<min(b,d);
    }
    else{cout << "-1";
    }
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
