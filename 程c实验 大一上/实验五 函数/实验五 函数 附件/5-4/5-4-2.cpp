/*��2������ĶԳƽ�������һ��N��ģ�����������ڵ�Ԫ�����Գƽ�������0�ŵ�λ��ֵ�ŵ�n-1��Ԫ��
1�ŵ�Ԫ��ֵ�ŵ�n-2��Ԫ��2�ŵ�Ԫ��ֵ�ŵ�n-3��Ԫ���������ƣ�ֱ�������2����Ԫ��ֵ���н��� ����1����Ԫ������
�볢��дһ���ǵݹ�ĺ������������飻ͬʱ˼���������ĵݹ�����ģ�ͣ�������Ӧ�ĵݹ�⡣��������ƺ���ԭ�͡�*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void change(int arr[], int);
void changeRe(int arr[], int);
void display(int arr[], int);
const int N = 20;
int main()
{
    int a[N] = {}, i;
    for (i = 0; i < N; i++)
        a[i] = rand() % 20;
    display(a, N);
    change(a, N);
    display(a, N);
    changeRe(a, N);
    display(a, N);
    return 0;
}
void change(int a[], int n)
{
    int i, temp;
    for (i = 0; i < (n / 2); i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}
void changeRe(int a[], int n)
{
    int temp;
    if (n <= N / 2)
        return;
    else
    {
        temp = a[n - 1];
        a[n - 1] = a[N - n];
        a[N - n] = temp;
        changeRe(a, n - 1);
    }
}
void display(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
}