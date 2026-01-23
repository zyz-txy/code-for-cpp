#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int d = a+b;
    int e = a-b;
    int f = a*b;
    double g = (double)a/b;
    int h = a%b;
    int i = a++;
    int j = ++b;
    cout<<"a+b="<<d<<endl;
    cout<<"a-b="<<e<<endl;
    cout<<"a*b="<<f<<endl;
    cout<<"a/b="<<g<<endl;
    cout<<"a%b="<<h<<endl;
    cout<<"a++="<<i<<endl;
    cout<<"++b="<<j<<endl;
    return 0;
}