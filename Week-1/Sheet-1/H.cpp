#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double n, s, k;
    cin>>n>>s;
    k=n/s;
    cout<<"floor "<<n<<" / "<<s<<" = "<<(int)floor(k)<<endl;
    cout<<"ceil "<<n<<" / "<<s<<" = "<<(int)ceil(k)<<endl;
        cout<<"round "<<n<<" / "<<s<<" = "<<(int)round(k);
}
