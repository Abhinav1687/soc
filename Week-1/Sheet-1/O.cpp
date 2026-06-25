#include <bits/stdc++.h>
using namespace std;

void solve() {
long long a, b;
char op;

cin >> a >> op >> b;
if(op== '+')a=a+b;
if(op== '-')a=a-b;
if(op== '*')a=a*b;
if(op== '/')a=a/b;
cout << a;
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
