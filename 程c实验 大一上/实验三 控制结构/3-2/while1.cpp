#include<iostream>
using namespace std;
int main(){
    int n;
    double i=1,sum=0;
    cout<<"ÇëÊäÈë´ÎÊýn"<<endl;
    cin>>n;
    while(i<=n)
    {
    sum=sum+1/i;
    i=i+1;
    }
    cout<<sum<<endl;
}
