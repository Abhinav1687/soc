#include <bits/stdc++.h>
using namespace std;

void solve() {
    double a;
    int b;
    cin>>a;
    b=a;
    if(a==b){
        cout<<"int "<<b;
    }
    else cout<< "float "<<b<<" "<<(a-b);
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
