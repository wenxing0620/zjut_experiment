#include<iostream>
#include<cmath>
using namespace std;
int pf(double a){
	double b;
	b=a*a;
	return b;
}
int main(){
	double a ,b,c,delta,x1,x2;
	cout<<"请输入方程的三个系数:";
	cin>>a>>b>>c;
	delta=pf(b)-4*a*c;
	if(delta>=0)
	{x1=((-b)+sqrt(delta))/(2*a);
	 x2=((-b)-sqrt(delta))/(2*a);
	 cout<<"x1="<<x1<<" "<<"x2="<<x2<<endl;
	}
	else 
		if(a>0)
		{x1=(-b)/(2*a);
		 x2=sqrt(-delta)/(2*a);
		 cout<<"x1="<<x1+x2<<"i"<<" "<<"x2="<<x1-x2<<"i";
		}
		else
		{x1=(-b)/(2*a);
		 x2=sqrt(-delta)/(2*a);
		 cout<<"x1="<<x1+(-x2)<<"i"<<" "<<"x2="<<x1<<x2<<"i";
			}	
}  
