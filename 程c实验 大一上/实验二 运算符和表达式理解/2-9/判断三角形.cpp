#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"�����������ε�����"<<endl;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b) 
    {
     if((a==b || a==c || b==c) && (a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)) cout<<"����ֱ��������"<<endl;
     else if(a==b || a==c || b==c) cout<<"һ�����������"<<endl;
     else if(b*b+c*c==a*a || b*b==c*c+a*a || c*c==a*a+b*b) cout<<"һ��ֱ��������"<<endl;
     else cout<<"һ��������"<<endl;
    }
    else cout<<"���ܹ���������"<<endl;
    return 0;
}
