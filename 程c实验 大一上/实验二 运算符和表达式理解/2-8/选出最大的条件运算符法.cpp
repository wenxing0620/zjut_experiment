#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,m;
    cout<<"请输入四个整数："<<endl;
    cin>>a>>b>>c>>d;
    m=(a>b)?a:b;
    m=(m>c)?m:c;
    m=(m>d)?m:d;
    cout<<"最大的数为:"<<m<<endl;
    return 0;
}