#include<iostream>
using namespace std;
int main(){
    double i=1,sum=0;
    while(i<(1/0.001234))
    {
    sum=sum+1/i;
    i=i+1;
    }
    cout<<sum<<endl;
}
