#include<iostream>
#include<cmath>
using namespace std;
long long jc(int x){
     int i=1,sum=1;
	 while (i<=x)
        {
         sum=sum*i;
	     i=i+1;       
	    }
	 return sum;
}
double element(double x,double n){
    double y;
    y=pow(x,n)/jc(n);
    return y;
}
int main(){
    int n=1,flag=1;
    double x,s=0;
    cout<<"ÇëÊäÈëxµÄÖµ"<<endl;
    cin>>x;
    for(n=1;element(x,n)>=0.00001;n++)
    { 
    s=s+flag*element(x,n);
    flag=flag*(-1);
    }
cout<<s<<endl;
}
