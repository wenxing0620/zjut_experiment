/*6、已知一个使用排序策略的主函数框架如下：
#include <iostream>
#define n 10
void SortFunction(int [],unsigned); //完成数组的降序排列
void Display(int [],unsigned); //完成数组的显示
int main()
{ int x[n+1]={0,800,150,300,600,550,650,400,350,450,700};
 Display(x,n); //排序前显示
//SortFunction(x,n); //排序
Display(x,n);//排序后显示
return 0;
}
请完善这个程序。使用你会的排序策略（冒泡和选择）。
（1）	实现冒泡的降序排序策略，函数原型为： void BubbleSort(int [],unsigned);使用给出的程序框架测试你的函数。
（2）	实现选择的降序排序策略，函数原型为： void SelectSort(int [],unsigned); 使用给出的程序框架测试你的函数。
答：(5分) (1) void BubbleSort(int [],unsigned);

(5分) (2) void SelectSort (int [],unsigned);

(10分) (3)函数设计实现以及测试结果：
*/
#include <iostream>
#define n 10
using namespace std;
void BubbleSort(int [],unsigned);//完成数组的降序排列
void SelectSort (int [],unsigned);
void Display(int [],unsigned); //完成数组的显示
int main()
{ int x[n+1]={0,800,150,300,600,550,650,400,350,450,700};
Display(x,n); //排序前显示
BubbleSort(x,n); //排序
//SelectSort(x,n);
Display(x,n);//排序后显示
return 0;
}
void BubbleSort(int a[],unsigned){
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        if(a[j]<a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }

}
void SelectSort(int a[],unsigned){
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(a[j]>a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
void Display(int a[],unsigned x){
    int i,flag=0;
    for(i=1;i<=x;i++)
    {
        if(flag==1)cout<<',';
        cout<<a[i];
        flag=1;
    }
    cout<<endl;
}