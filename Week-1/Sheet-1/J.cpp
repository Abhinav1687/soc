#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n,s;
    cin>>n>>s;
    if(n%s==0 || s%n==0){
        cout<<"Multiples";
    }
    else cout<< "No Multiples";
}
