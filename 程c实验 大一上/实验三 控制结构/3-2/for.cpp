#include<iostream>
using namespace std;
int main(){
    int n;
    double i=1,sum=0;
    cout<<"���������Ĵ���n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    sum=sum+1/i;
    cout<<sum<<endl;
    return 0;
}