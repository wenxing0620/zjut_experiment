/*7����֪һ��������ʹ�ò��Ҳ��ԵĿ��ܿ��Ϊ��

��1��	�����ϴ�ʵ�鹤���Ļ�����ʵ�ֲ��Һ��������ݼ�����������ʹ��˳����Ҳ��ԣ��������ø����ĳ�����
������ʵ�ֵĺ�����
��2��	������������ϣ��֪��������Ŀ���λ�ã�Ҳ��֪�����ݼ��о����ж��ٸ�Ԫ�ر�Ŀ��Ԫ�ش󣬸�����޸�
���SearchFunction�����ú������������������أ�����ʹ��ȫ�ֱ������������������ز���Ԫ�ش��ڵ�λ�ú���
�ݼ����ж��ٸ�Ԫ�رȲ���Ԫ�ش�������޸ĺ�Ĳ��Һ�������������Ӧ�Ĳ��Գ��򣨿�����ԭ���Ĳ��Կ�����޸ģ�
��(10��) (1) int SearchFunction(int [],unsigned,int);

(10��) (2) SearchFunction�޸İ�Ͳ��Գ��򡢲��Խ�����
*/
#include <iostream>
#define n 10
using namespace std;
int SearchFunction(int[], unsigned, int);
void Display(int[], unsigned);
int main()
{
    int x[n + 1] = {0, 800, 150, 300, 600, 550, 650, 400, 350, 450, 700}, target, aux, bn;
    int location;
    Display(x, n);
    cout << "��Ҫ���ҵ�Ԫ���ǣ�";
    while (cin >> target)
    {
        aux = SearchFunction(x, n, target);
        location = aux / 10;
        bn = aux % 10;
        if (aux != -1)
            cout << "��Ҫ���ҵ�Ԫ���±�λ���ǣ�" << location << " ��" << bn << "��������Ҫ���ҵ�Ԫ�ش�" << endl;
        else
            cout << "��Ҫ���ҵ�Ԫ���ڵ�ǰ���ݼ��в����ڣ�" << endl;

        cout << "��Ҫ���ҵ�Ԫ���ǣ�(��������밴Ctrl+Z ��������)";
    }
    return 0;
}
int SearchFunction(int a[], unsigned, int ta)
{
    int i, j, k = 0;
    j = 0;
    for (i = 1; i <= n; i++)
    {
        if (a[i] > ta)
            j++;
    }
    for (i = 1; i <= n; i++)
    {
        if (a[i] == ta)
            k = i;
    }
    if (k == 0)
        return -1;
    else
        return k * 10 + j;
}
void Display(int a[], unsigned x)
{
    int i, flag = 0;
    for (i = 1; i <= x; i++)
    {
        if (flag == 1)
            cout << ',';
        cout << a[i];
        flag = 1;
    }
    cout << endl;
}