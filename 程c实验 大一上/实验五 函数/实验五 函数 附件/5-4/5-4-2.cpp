/*（2）数组的对称交换：将一个N规模的整型数组内的元素做对称交换（即0号单位的值放到n-1单元，
1号单元的值放到n-2单元，2号单元的值放到n-3单元，依次类推，直到最后还有2个单元的值进行交换 或者1个单元。）。
请尝试写一个非递归的函数完成这件事情；同时思考这个问题的递归事务模型，给出相应的递归解。请自行设计函数原型。*/
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