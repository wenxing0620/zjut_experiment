#include<iostream>
using namespace std;
int main(){
int a[10]={1,2,3,4,5,6,7,8,9,10};
int x;
int *p;
//int型指针管理int型空间
p=&x;
cin>>*p; //99
cout<<*p<<endl;
cout<<x<<endl;
cout<<p<<endl;
cout<<&x<<endl;
//int型指针管理int型数组
int i;
cout<<"方式1:";
p=a; 
for(i=0;i<9;i++) cout<<p[i]<<',';
cout<<p[9]<<endl;

cout<<"方式2:";
for(p=a;p-a<9;p++) cout<<*p<<',';
cout<<*p<<endl;

cout<<"方式3:";
for(i=0,p=a;i<9;i++,p++) cout<<p[0]<<',';
cout<<p[0]<<endl;

//理解指针的几种工作形式
cout<<&p<<endl;
p=a+5;
cout<<&p<<','<<*p<<endl;
*p=50;
cout<<&p<<','<<*p<<endl;
p++;
*p=30;
cout<<*p<<endl;
*p++=40;
cout<<*p<<','<<*(p-1)<<','<<*(p+1)<<endl;
cout<<p<<','<<(p-1)<<','<<*(p+1)<<endl;

p=a+6;
cout<<a+2<<','<<a[2]<<','<<*(a+2)<<endl;
cout<<p+2<<','<<p[2]<<','<<*(p+2)<<endl;

return 0;
}
