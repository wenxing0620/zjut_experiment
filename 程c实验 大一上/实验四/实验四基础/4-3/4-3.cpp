/*ʹ����������ɵĹ�ģΪ100�����ظ�Ԫ�ص����ݼ�a�����û�ָ��������ʼ��
��λ��start��start?[0,99]������������Ԫ�ظ���n(n?[1,100]���ֱ�ʹ��ð
��������ɴ�start��ʼ��n��Ԫ�صĽ������У��Լ�ѡ��������ɴ�start��ʼ
��n��Ԫ�ص��������С�������ʹ��start -0,n-100����ȫ��������������*/
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
    cout<<"��������ʼλ�ú�����Ԫ�ظ���"<<endl;
    do{
        cin>>start>>n;
    }while((start+n)>N);
    //��ʼ�����������
    cout<<"ԭ����:";
    for(i=0;i<N;i++)
    cout<<a[i]<<' ';
    cout<<endl;//�����ʼ���ݱ��ں����Ƚ�
    //ð��������
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
    //ѡ����������
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
    cout<<"���к������:";
    for(i=0;i<N;i++)
    cout<<a[i]<<' ';
    return 0;       
    
}