#include<iostream>
using namespace std;
void test(int a[], int b);
int main()
{
	int x[3] = { 2,1 };
	int y = 4;
	cout << "x=" << hex << x << endl;
	cout << "x[2]=" << x[2] << "; y=" << y << endl;
	test(x, y);
	cout << "x=" << hex << x << endl;
	cout << "x[2]=" << x[2] << "; y=" << y << endl;

	return 0;
}
void test(int a[], int b) {
	a[2] = 3;
	b = 3;
    cout << "in function:test, a=" << hex << a << endl;
cout<<a[0]<<endl;
	a++;
	cout << "in function:test, a=" << hex << a << endl;
    cout<<a[0]<<endl;
    }
