/*?	��������
������Ҫ���һ������Ӹ������ַ����������ʮ����������
�����ַ���0xA15P B0XC1d 2+0x12k0Xk51�м𵽵�ʮ��������Ϊ0xA15,0XC1d,0x12��
Ȼ�����η���ɶ�Ӧ��ʮ����ֵ�����
?	�����������������룬ÿ�и���һ���ַ��������ܰ����ո� (����������5000)
���������Ӧÿ�����룬�����������0x����0X��ͷ����Ч��ʮ������������������Ӧ��ʮ��
��ֵ��ÿ������ռһ�У���ĩ�س�������֮��ʹ��һ���ո�ָ���ת�����ʮ����ֵ
������int�������Ǹ�ֵ��
?	��������
0xA15P B0XC1d 2+0x12k0Xk51
?	�������
2581 3101 18
*/
#include<bits/stdc++.h>
using namespace std;
int pow1(int,int);
int main(){
    char a[100][5001]={};
    int temp[5001]={};
    int i,j,k,l=0,m,n,p,sum,aux;
    cin>>n;
    cin.ignore();
    for(i=0;i<n;i++)
    cin.getline(a[i],5001);//�����ռ�
    //����ʮ��������,�����
    for(i=0;i<n;i++)
    {
        for(j=0;a[i][j]!='\0';j++)
        {
        if(a[i][j]=='0'&&(a[i][j+1]=='x'||a[i][j+1]=='X'))
        {
            for(p=0;p<5001;p++)
            temp[p]=0;           
            for(k=j+2;(a[i][k]>='0'&&a[i][k]<='9')||(a[i][k]>='A'&&a[i][k]<='F')||(a[i][k]>='a'&&a[i][k]<='f');k++)
            {
                if(a[i][k]>='A'&&a[i][k]<='F')
                aux=int(a[i][k]-'A'+10);
                else if(a[i][k]>='a'&&a[i][k]<='f')
                aux=int(a[i][k]-'a'+10);
                else aux=int(a[i][k]-'0');
                temp[l]=aux;
                l++;
            }
            if(k>j+2)
            {
                sum=0;
                p=1;
                for(m=l-1;m>=0;m--)
                {   
                    aux=temp[m];
                    sum=sum+p*aux;
                    p*=16;
                }
            cout<<sum<<' ';
            }        
        }
        }
    }
    return 0;

}
int pow1(int x,int y){
    int i,sum=1;
    for(i=y;i>0;i--)
    sum*=x;
    return sum;
}
