/*������һ��N��Ԫ�ص����ݼ�A{a0,a1,a2,a3,...,an-1}��Ҫ�����һ�����򼯺ϡ�����һ
���µ��������ݵĲ��Խ���PK����󷨡�������ݼ�A���ò����������£�Ϊ���ݼ�A����һ��
��Ӧ�ļǷ���B, bi��ʾ����ai�ĵ÷֡�����һ��ʼb0~bn-1 ȫ����ʼΪ0����һ�ֱ���������
a0���κ�����a1,a2,a3,...,an-1 ����PK�����a0�ϴ���ôa0Ӯ�ˣ�����Ӧ�ļǷ���b0��
��1�֣��������������a0PK������Ӯ�ˣ���Ӧ�ļǷ�������1�֣��ڶ��ֱ���������a1���κ�
����a2,a3,...,an-1����PK�����ŵ����ֱ����������ֱ�����ֱ�����һ�ֱ���an-2��an-1 
PK���ꡣ��ʱ�Ƿ���B��b0,b1,b2,...,bn-1 ��¼�����ݼ�A�и����ݵ���Ӧ�����Ρ����԰���
�������������ݼ�A����A��������򼯺ϡ�
?	���ݹ�ģN���û�ָ����N<=100��, ���ݼ�A�ɲ�����500�Ļ�����������ɡ�������ʹ��P
K����󷨣������ݼ�A���������
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
    }while(i<N);//�����������
    //���a�ԱȽ�
    for(i=0;i<N;i++)
    cout<<setw(3)<<a[i]<<' ';
    cout<<endl;
    //дpk�㷨
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]>a[j])b[i]++;
            else b[j]++;
        }
    }//b������������
    //���b����Ƚ�
    for(i=0;i<N;i++)
    cout<<setw(3)<<b[i]<<' ';
    cout<<endl;
    //��ð������ͬʱ����ab����
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