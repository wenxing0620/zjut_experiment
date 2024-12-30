/*集合的并和交。使用随机数生成规模为20个无重复数据的正整数的集合A, 和规
模为20个无重复数据正整数的集合B。a,b集合中的数据范围为0-200；求
1）A的B并集：A∪B={所有存在于A、B集合中的数据，没有重复数据}；
2）A的B交集：A∩B={既存于A也存于B集合中的数据，没有重复数据} 请在一个程
序里完成两个计算。
*/
#include<iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;
int main(){
    const int N=20,M=200;
    int a[N],b[N],c[2*N]={},d[N]={},f[M+1]={},g[M+1]={},i,j,k=0,l=0,temp;
    srand(time(0));
    do{
        temp=rand()%M;
        if(f[temp]==0){
        a[i]=temp;
        i++;
        }
        f[temp]=1;
    }while(i<N);
    i=0;
    do{
        temp=rand()%M;
        if(g[temp]==0){
        b[i]=temp;
        i++;
        }
        g[temp]=1;
    }while(i<N);
    //求并集
    for(i=0;i<N;i++)
    c[i]=a[i];
    for(i=0;i<N;i++)
    {   
        k=0;
        for(j=0;j<N;j++)
        {
        if(b[i]!=a[j])
        k++;
        }
    if(k==N){
    c[N+l]=b[i];
    l++;
    }
    }
    //求交集
    k=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
        if(a[i]==b[j])
        {
            d[k]=a[i];
            k++;
        }
        
        }
    }
    cout<<"a集合:";
    for(i=0;i<N;i++)
    cout<<a[i]<<' ';
    cout<<endl;
    cout<<"b集合:";
    for(i=0;i<N;i++)
    cout<<b[i]<<' ';
    cout<<endl;
    cout<<"a,b集合的并集:";
    for(i=0;i<N+l;i++)
    cout<<c[i]<<' ';
    cout<<endl;
    cout<<"a,b集合的交集:";
    for(i=0;i<k;i++)
    cout<<d[i]<<' ';
    return 0;
}