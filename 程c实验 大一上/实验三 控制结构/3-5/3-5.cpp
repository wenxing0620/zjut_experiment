#include<iostream>
#include<cmath>
using namespace std;
int pdzs(int x){
    int y,i;
    bool flag=false;
    if(x<0) x=abs(x);
    if(x==0||x==1) flag=true;
    y=int(sqrt(x));
    for(i=2;i<=y;i++)
        if(x%i==0) flag=true;
    return flag;      
}
int main(){
    cout<<"���������ݹ�ģ����ʼ���ݣ�"<<endl;
    int a,b,c;
    bool f=false;
    while(cin>>a>>b)
    {
    f=false;
    cout<<"{";
    c=a+b;
    for(b;b<c;b++)
    {
    if(pdzs(b)){
        if(f) cout<<','; 
        cout<<b;
        f=true;
    } 
    }
    cout<<"}"<<endl;
    }
    return 0;
}
