/*有一个N阶的矩阵，现需要按某种规律填入1-N2的自然数。（N<=20）请你编程来实现这
个填数策略。
以N为5示范填数：
1	2	4	7	11
3	5	8	12	16
6	9	13	17	20
10	14	18	21	23
15	19	22	24	25
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int N=20;
    int a[N][N]={},i=0,j=1,k,n,num=1,ni,nj;
    cin>>n;
    a[0][0]=1;
    for(i=0;i<n;i++)
    {
        for(j=0,k=i;j<=i;j++,k--)
        a[j][k]=num++;
    }
    for(i=1;i<n;i++)
    {
        for(j=i,k=n-1;k>=i;j++,k--)
        a[j][k]=num++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cout<<setw(3)<<a[i][j]<<' ';
    cout<<endl;
    }  
    return 0; 
    
}