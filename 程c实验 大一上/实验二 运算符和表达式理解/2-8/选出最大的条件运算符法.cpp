#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,m;
    cout<<"�������ĸ�������"<<endl;
    cin>>a>>b>>c>>d;
    m=(a>b)?a:b;
    m=(m>c)?m:c;
    m=(m>d)?m:d;
    cout<<"������Ϊ:"<<m<<endl;
    return 0;
}