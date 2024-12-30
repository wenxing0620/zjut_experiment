#include<iostream>
using namespace std;
int pdgd(unsigned x){
    unsigned i,t=5;
    for(i=2;i<=x;i++)
    {
        if(i%2==0) t=t*2+(i-1);
        else t=t*2-(i-1);
    }
    return t;
}
int zgd(unsigned x){
    unsigned i,t=5,sum=5;
    for(i=2;i<=x;i++)
    {
        if(i%2==0) t=t*2+(i-1);
        else t=t*2-(i-1);
        sum=sum+t;
    }
    return sum;
}
int main(){
    unsigned a;
    while(cin>>a)
    cout<<pdgd(a)<<","<<zgd(a)<<endl;
    return 0;
}
