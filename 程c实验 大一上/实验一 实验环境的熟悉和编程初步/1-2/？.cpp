#include<iostream>
using namespace std;
int main(){
    double y,a,b,c,d,sum;
    cin>>y;
    a=y/100;
    y=y-a*100;
    b=y/10;
    y=y-b*10;
    c=y/1;
    y=y-c;
    d=y/0.1;
    sum=d*100+c*10+b+a*0.1;
    cout<<sum<<endl;
    return 0;
}
