#include <iostream>
using namespace std;
int main()
{
    char str1[10] = "hello";
    char str2[10] = "hello";
    if (*str1 == *str2)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;
}