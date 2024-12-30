/*假设有一个N个元素的数据集A{a0,a1,a2,a3,...,an-1}需要整理成一个升序集合。现有一
种新的整理数据的策略叫做PK整理大法。针对数据集A，该策略描述如下：为数据集A建立一个
对应的记分牌B, bi表示数据ai的得分。比赛一开始b0~bn-1 全部初始为0。第一轮比赛将数据
a0依次和数据a1,a2,a3,...,an-1 进行PK，如果a0较大，那么a0赢了，它对应的记分牌b0增
加1分；否则就是其他与a0PK的数据赢了，对应的记分牌增加1分；第二轮比赛将数据a1依次和
数据a2,a3,...,an-1进行PK；接着第三轮比赛，第四轮比赛，直到最后一轮比赛an-2和an-1 
PK赛完。此时记分牌B的b0,b1,b2,...,bn-1 记录了数据集A中各数据的相应的名次。可以按这
个名次整理数据集A，将A整理成升序集合。
?	数据规模N由用户指定（N<=100）, 数据集A由不超过500的互异随机数构成。现请你使用P
K整理大法，将数据集A整理成升序。
*/
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(){
    const int M=100;
    int a[M]={},b[M]={},c[500]={},i=0,j,N,temp;
    srand(time(0));
    cin>>N;
    do{
        temp=rand()%500;
        if(c[temp]==0){
        a[i]=temp;
        i++;
        }
        c[temp]=1;
    }while(i<N);//数据生成完毕
    //输出a以比较
    for(i=0;i<N;i++)
    cout<<setw(3)<<a[i]<<' ';
    cout<<endl;
    //写pk算法
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]>a[j])b[i]++;
            else b[j]++;
        }
    }//b数组的内容完成
    //输出b数组比较
    for(i=0;i<N;i++)
    cout<<setw(3)<<b[i]<<' ';
    cout<<endl;
    //用冒泡排序同时排序ab数组
    for(i=0;i<N;i++)
    {
        for(j=0;j<N-1;j++)
        {
            if(b[j]>b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<N;i++)
    cout<<setw(3)<<a[i]<<' ';
    cout<<endl;
    for(i=0;i<N;i++)
    cout<<setw(3)<<b[i]<<' ';
    cout<<endl;
    return 0;

}