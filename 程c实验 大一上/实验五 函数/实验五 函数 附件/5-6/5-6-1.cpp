/*��3��	����Ҫ���һ��������ԣ����Ը����û�����Ҫ��������ݼ��ϵ��������У�Ҳ��������ݼ��ϵĽ������У�
�����Ľӿڣ����������Ҫ��ô����������Ϻ������ܵĵ����أ������ð�ݺ�ѡ��ѡ��һ�ֲ���ʵ������뷨��*/
#include <iostream>
#define n 10
using namespace std;
void BubbleSort(int[], unsigned, int); // �������Ľ�������
void Display(int[], unsigned);         // ����������ʾ
int main()
{
    int x[n + 1] = {0, 800, 150, 300, 600, 550, 650, 400, 350, 450, 700}, k;
    cout << "��ѡ�������ǽ�������1������0" << endl;
    cin >> k;
    Display(x, n);       // ����ǰ��ʾ
    BubbleSort(x, n, k); // ����
    Display(x, n);       // �������ʾ
    return 0;
}
void BubbleSort(int a[], unsigned, int k)
{
    int i, j;
    if (k == 0)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n - i; j++)
                if (a[j] < a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
        }
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n - i; j++)
                if (a[j] > a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
        }
    }
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