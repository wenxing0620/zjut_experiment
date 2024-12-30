/*7、已知一个主函数使用查找策略的可能框架为：

（1）	请在上次实验工作的基础上实现查找函数（数据集合无特征，使用顺序查找策略），并采用给出的程序框架
测试你实现的函数。
（2）	若主函数不仅希望知道被查找目标的位置，也想知道数据集中究竟有多少个元素比目标元素大，该如何修改
你的SearchFunction才能让函数返回两个处理结果呢（不能使用全局变量）？即函数将返回查找元素存在的位置和数
据集中有多少个元素比查找元素大。请给出修改后的查找函数，并给出相应的测试程序（可以在原来的测试框架上修改）
答：(10分) (1) int SearchFunction(int [],unsigned,int);

(10分) (2) SearchFunction修改版和测试程序、测试截屏：
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
    cout << "你要查找的元素是：";
    while (cin >> target)
    {
        aux = SearchFunction(x, n, target);
        location = aux / 10;
        bn = aux % 10;
        if (aux != -1)
            cout << "你要查找的元素下标位置是：" << location << " 有" << bn << "个数比你要查找的元素大" << endl;
        else
            cout << "你要查找的元素在当前数据集中不存在！" << endl;

        cout << "你要查找的元素是：(不想查找请按Ctrl+Z 结束程序)";
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