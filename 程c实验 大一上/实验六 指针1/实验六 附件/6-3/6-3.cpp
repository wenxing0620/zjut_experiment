#include <iostream>
using namespace std;
int main()
{
    char str[] = "ABCDEFGH";
    int a[5] = {11, 22, 33, 44, 55};
    char *pstr;
    int *parray;
    pstr = str + 3;
    cout << "pstr:" << pstr << ", *pstr:" << *pstr << ", &pstr:" << &pstr << ", (int*)pstr:" << (int *)pstr << endl;
    cout << "&str[3]:" << &str[3] << ", str[3]:" << str[3] << ", (int*)(&str[3]):  " << (int *)(&pstr[3]) << endl;
    cout << "(pstr++):" << (pstr++) << ", *(pstr++):" << *(pstr++) << ", (int *)(pstr++):" << (int *)(pstr++) << endl;
    cout << "(pstr+1):" << (pstr + 1) << ", *(pstr+1):" << *(pstr + 1) << ", (int *)(pstr+1):" << (int *)(pstr + 1) << ", (int*)pstr:" << (int *)pstr << endl;

    parray = &a[2];
    cout << "parray:" << parray << ", a+2:" << (a + 2) << ", &parray[0]:" << &parray[0] << endl;
    cout << "parray[1]:" << parray[1] << ", a:" << (a + 3)  << ", &parray[1]" << &parray[1] << ", parray+1:" << (parray + 1) << endl;

    return 0;
}
