/*用一维数组模拟数据规模为100的整数数据集（数据集范围任意），要求计算该数
据集的最大值，最小值，以及对应在集合中的位置。集合中的数据使用随机函数给
出，求解最大值和最大值的位置下标，最小值和最小值的位置下标。（提示：关于
随机函数请查看实验四附件1，或者自行百度）*/
#include<iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;
int main(){
    const int N=100;
    int a[100],i,max,min,m,n;
    srand(time(0));
    for(i=0;i<N;i++)      
    a[i]=rand() % 100+ 1;
    max=min=a[0];     
    for(i=0;i<N;i++){
        if(a[i]>max){
            max=a[i];
            m=i;
        }
    }
    for(i=0;i<N;i++){
        if(a[i]<min){
            min=a[i];
            n=i;
        }
    }
    cout<<"最大值为"<<max<<"在"<<m<<"处，最小值为"<<min<<"在"<<n<<"处"<<endl;
    return 0;
}