#include<iostream>
using namespace std;
int main(){
	char name;
	cout<<"请输入您的名字："<<endl;
	cin>>name;
	if((name>='A'&& name <='Z')||(name>='a'&&name<='z')) cout<<"hello,"<<name<<endl;
	else cout<<"名字不在范围内"<<endl; 
	return 0; 
}
