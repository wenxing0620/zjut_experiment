#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    unsigned long sum=1;
    cout<<"�������۳˵Ĵ���n"<<endl;
    cin>>n;
    while (i<=n)
    {
     sum=sum*i;
     i=i+1;       
    }
    cout<<sum<<endl;
}