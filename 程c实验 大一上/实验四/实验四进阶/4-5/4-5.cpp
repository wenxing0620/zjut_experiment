/*?	基本描述
现在需要设计一个程序从给定的字符串中挑拣出十六进制数。
比如字符串0xA15P B0XC1d 2+0x12k0Xk51中拣到的十六进制数为0xA15,0XC1d,0x12，
然后依次翻译成对应的十进制值输出。
?	输入描述：多行输入，每行给出一个字符串，可能包含空格。 (串长不超过5000)
输出描述对应每行输入，拣出其中所有0x或者0X开头的有效的十六进制数，并给出对应的十进
制值。每组数据占一行，行末回车。数据之间使用一个空格分隔。转换后的十进制值
不超过int，不考虑负值。
?	样本输入
0xA15P B0XC1d 2+0x12k0Xk51
?	样本输出
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
    cin.getline(a[i],5001);//数据收集
    //查找十六进制数,并输出
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
