#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,m;
    cout<<"�������ĸ����֣�"<<endl;
    cin>>a>>b>>c>>d;
    if(a>b) m=a;
    else m=b;
    if(m>c) m=m;
    else m=c;
    if(m>d) m=m;
    else m=d;
    cout<<"������Ϊ��"<<m<<endl;
    return 0;
}