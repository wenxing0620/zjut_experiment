/*���ϵĲ��ͽ���ʹ����������ɹ�ģΪ20�����ظ����ݵ��������ļ���A, �͹�
ģΪ20�����ظ������������ļ���B��a,b�����е����ݷ�ΧΪ0-200����
1��A��B������A��B={���д�����A��B�����е����ݣ�û���ظ�����}��
2��A��B������A��B={�ȴ���AҲ����B�����е����ݣ�û���ظ�����} ����һ����
��������������㡣
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
    //�󲢼�
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
    //�󽻼�
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
    cout<<"a����:";
    for(i=0;i<N;i++)
    cout<<a[i]<<' ';
    cout<<endl;
    cout<<"b����:";
    for(i=0;i<N;i++)
    cout<<b[i]<<' ';
    cout<<endl;
    cout<<"a,b���ϵĲ���:";
    for(i=0;i<N+l;i++)
    cout<<c[i]<<' ';
    cout<<endl;
    cout<<"a,b���ϵĽ���:";
    for(i=0;i<k;i++)
    cout<<d[i]<<' ';
    return 0;
}