/*���Ż���������ǡ�Ҫ��ʵ��һ�����򣬽��������ʹ��ĳ���ض��ķ��š�A����
ʾ���������û�����������ǵ���ʾ������ʹ���ַ�A��ʾ���е��������������5
�е�������Ǳ���Ӧ��Ϊ��
1
11
121
1331
14641
�����Ż�����Ϊ�����Ż���֮��ʹ��1���ո�ָ���
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
    cout<<"��������ʾ������n(n<100)"<<endl;
    cin>>n;
    //����������ǵ����Ǿ���
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
    //���ͼ��
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
