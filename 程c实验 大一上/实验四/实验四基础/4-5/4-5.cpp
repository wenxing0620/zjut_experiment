/*符号化的杨辉三角。要求实现一个程序，将杨辉三角使用某个特定的符号‘A’表
示出来。由用户输入杨辉三角的显示行数，使用字符A表示各行的杨辉三角数。如5
行的杨辉三角本来应该为：
1
11
121
1331
14641
被符号化后表达为，符号化串之间使用1个空格分隔：
A
A  A
A  AA  A
A  AAA  AAA  A
A  AAAA  AAAAAA  AAAA  A
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    const int N=100;
    int a[N][N]={};
    cout<<"请输入显示的行数n(n<100)"<<endl;
    cin>>n;
    //生成杨辉三角的三角矩阵
    for(i=0;i<n;i++)
    {
        a[i][0]=1;
        for(j=0;j<n;j++)
        if(i==j)a[i][j]=1;
    }
    for(i=2;i<n;i++)
    {
        for(j=1;j<i;j++)
        a[i][j]=a[i-1][j]+a[i-1][j-1];
    }
    /*for(i=0;i<n;i++)
    {   
        for(j=0;j<=i;j++)
        cout<<a[i][j]<<' ';
    cout<<endl;
    }*/
    //输出图形
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            for(k=1;k<=a[i][j];k++)
            cout<<'A';
        cout<<' ';
        }
    cout<<endl;
    }
    return 0;
}
