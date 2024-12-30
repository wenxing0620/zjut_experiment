/*使用随机数生成的规模为100的无重复元素的数据集a，由用户指定排序起始排
序位置start（start?[0,99]），连续排序元素个数n(n?[1,100]；分别使用冒
泡排序完成从start开始的n个元素的降序排列，以及选择排序完成从start开始
的n个元素的升序排列。（可以使用start -0,n-100测试全集的排序工作。）*/
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    const int N=100;
    int a[N],start,n,i,j,temp;
    srand(time(0));
    for(i=0;i<N;i++)
    a[i]=rand()%100;
    cout<<"请输入起始位置和排序元素个数"<<endl;
    do{
        cin>>start>>n;
    }while((start+n)>N);
    //初始数据生产完成
    cout<<"原数据:";
    for(i=0;i<N;i++)
    cout<<a[i]<<' ';
    cout<<endl;//输出初始数据便于后续比较
    //冒泡排序降序
    for(i=start;i<=start+n-1;i++)
    {
        for(j=start;j<start+n-1;j++)
           if(a[j]<a[j+1])
           {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
           }
        
    }
    //选择排序升序
    /*for(i=start;i<=start+n-1;i++)
    {
        for(j=i;j<=start+n-1;j++)
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }*/
    cout<<"排列后的数据:";
    for(i=0;i<N;i++)
    cout<<a[i]<<' ';
    return 0;       
    
}