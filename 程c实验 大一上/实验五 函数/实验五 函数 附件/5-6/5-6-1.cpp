/*（3）	若需要设计一个排序策略，可以根据用户的需要能完成数据集合的升序排列，也能完成数据集合的降序排列，
函数的接口（参数设计需要怎么调整才能配合函数功能的调整呢？）请从冒泡和选择选择一种策略实现你的想法。*/
#include <iostream>
#define n 10
using namespace std;
void BubbleSort(int[], unsigned, int); // 完成数组的降序排列
void Display(int[], unsigned);         // 完成数组的显示
int main()
{
    int x[n + 1] = {0, 800, 150, 300, 600, 550, 650, 400, 350, 450, 700}, k;
    cout << "请选择升序还是降序，升序1，降序0" << endl;
    cin >> k;
    Display(x, n);       // 排序前显示
    BubbleSort(x, n, k); // 排序
    Display(x, n);       // 排序后显示
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