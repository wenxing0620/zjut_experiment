#include<iostream>
using namespace std;
int main(){
	int  a = 2, b = 1, c;
	cout<<(c = a++ >= 2*b ? --b && (a*=2): a + b )<<endl;
	cout << a << " " << b << " " << c << endl;
}
