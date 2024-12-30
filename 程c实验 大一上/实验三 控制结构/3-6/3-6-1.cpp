#include<iostream>
#include<cmath>
using namespace std;
double jc(double x){
     int i=1,sum=1;
	 while (i<=x)
        {
         sum=sum*i;
	     i=i+1;       
	    }
	 return sum;
}
int main(){
    int n=10,i;
    double s,x;
    cout<<"ÇëÊäÈëxµÄÖµ"<<endl;
    cin>>x;
    for(i=1;i<=10;i++)
    s=(pow((-1),i+1)*(pow(x,i)/jc(i)))+s;
    cout<<s<<endl;
}