 /*����ͳ�ƣ�
����һ���ı���ֻ������ĸ�Ϳո񣩣������Կո����ָ����ʣ����д����ʵ��ͳ
�Ƹ����ı��ĵ��������������ʵ��������ͳ�ƹ�����
����������
Jennie   is   a  nice   girl�L
     Abc  def  gh   �L
���������
5
3
*/
#include<iostream>
using namespace std;
int main(){
     const int N=101;
     char a[N]={};
     int i,j=0,k;
     while(cin.getline(a,100))
     {
     j=0;
     for(i=0;a[i]!='\0';i++)
     {
          if((((a[i]>='A')&&(a[i]<='Z'))||((a[i]>='a')&&(a[i]<='z')))&&a[i+1]==' ')
          j++;
          if(a[i]==' '&&a[i+1]=='\0')
          j--;
     }
     cout<<j+1<<endl;
     }
     return 0;
}