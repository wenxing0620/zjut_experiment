#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    unsigned long sum=1;
    cout<<"�������۳˵Ĵ���n"<<endl;
    cin>>n;
    do{
        sum=sum*i;
        i=1+i;
    }
    while (i<=n);
    cout<<sum<<endl;
    return 0;    
}