#include <iostream>
using namespace std;

int main()
{
    int i = 100, j = 200, k = 300;

    cout << "变量i的地址:&i=" << &i << "  变量i的值:i=" << i << endl;
    cout << "变量j的地址:&j=" << &j << "  变量j的值:j=" << j << endl;
    cout << "变量k的地址:&k=" << &k << "  变量k的值:k=" << k << endl;

    double d = 10.9;
    int *pointer1, pointer2 = d; // 1
    pointer1 = &i;                // 对指针变量pointer1赋值

    cout << "\npointer1 = &i后：pointer1 = " << pointer1 << endl;
    // 对指针的直接引用
    cout << "* pointer1 = " << *pointer1 << endl;
    // 对指针的间接引用
    j = *pointer1;
    //*pointer1作为右值使用
    *pointer1 = 500;
    //*pointer1作为左值使用
    cout << "j = *pointer1后：j = " << j << endl;
    cout << "*pointer1 = 500后：*pointer1 = " << *pointer1 << ",   i = " << i << endl;

    pointer2 = 100;      // 2
   // pointer2 = pointer1; // 3
    //*pointer2 = &k;      // 4
    cout << "\n指针变量pointer2的值pointer2：" << pointer2 << "\n"
         //<< "指针变量pointer2的间接引用值*pointer2：" << *pointer2 << "\n"
         << "指针变量pointer2的地址&pointer2：" << &pointer2 << endl;

    return 0;
}
