/*随机生成一个6X6的矩阵，显示这个随机矩阵并求矩阵中的奇数和 与 偶数和。
（提示：随机数相关库包含<cstdlib>和<ctime>; 使用srand((unsigned int)
time(NULL));初始化随机数发生器；使用rand()%随机数范围宽度生成制定范围
内的随机数值。）
*/
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(){
    const int N=6;
    int a[N][N],i,j,sumj=0,sumo=0;
    srand(time(0));
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        a[i][j]=rand()%10;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++)
        cout<<setw(3)<<a[i][j]<<' ';
    cout<<endl;
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++)
        {
            if(a[i][j]%2==0)
            sumo=sumo+a[i][j];
            else sumj=sumj+a[i][j];
        }
    }
    cout<<"偶数和为"<<sumo<<','<<"奇数和为"<<sumj<<endl;
}