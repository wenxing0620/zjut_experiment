#include <iostream>
using namespace std;

int main()
{
    int i = 100, j = 200, k = 300;

    cout << "����i�ĵ�ַ:&i=" << &i << "  ����i��ֵ:i=" << i << endl;
    cout << "����j�ĵ�ַ:&j=" << &j << "  ����j��ֵ:j=" << j << endl;
    cout << "����k�ĵ�ַ:&k=" << &k << "  ����k��ֵ:k=" << k << endl;

    double d = 10.9;
    int *pointer1, pointer2 = d; // 1
    pointer1 = &i;                // ��ָ�����pointer1��ֵ

    cout << "\npointer1 = &i��pointer1 = " << pointer1 << endl;
    // ��ָ���ֱ������
    cout << "* pointer1 = " << *pointer1 << endl;
    // ��ָ��ļ������
    j = *pointer1;
    //*pointer1��Ϊ��ֵʹ��
    *pointer1 = 500;
    //*pointer1��Ϊ��ֵʹ��
    cout << "j = *pointer1��j = " << j << endl;
    cout << "*pointer1 = 500��*pointer1 = " << *pointer1 << ",   i = " << i << endl;

    pointer2 = 100;      // 2
   // pointer2 = pointer1; // 3
    //*pointer2 = &k;      // 4
    cout << "\nָ�����pointer2��ֵpointer2��" << pointer2 << "\n"
         //<< "ָ�����pointer2�ļ������ֵ*pointer2��" << *pointer2 << "\n"
         << "ָ�����pointer2�ĵ�ַ&pointer2��" << &pointer2 << endl;

    return 0;
}
