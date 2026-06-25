#include <iostream>
using namespace std;

int main(){
    char a;
    cin>>a;
    if((int)a>=48 && (int)a<=57)cout<<"IS DIGIT";
    if((int)a>=65 && (int)a<=90)cout<<"ALPHA"<<endl<<"IS CAPITAL";
    if((int)a>=97 && (int)a<=122)cout<<"ALPHA"<<endl<<"IS SMALL";
}
