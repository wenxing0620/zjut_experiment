#include<iostream>
using namespace std;
int main(){
	 int  a = 4, b = 2, c =5;
	cout<<(c = a + b, a++, c %= a, a*b > b*c || a + b <++b && c++)<<endl;
	cout << a << " " << b << " " << c << endl;

} 
