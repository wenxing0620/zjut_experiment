 /*单词统计：
输入一行文本（只包含字母和空格），其中以空格来分隔单词，请编写程序实现统
计该行文本的单词数。程序可以实现连续的统计工作。
输入样本：
Jennie   is   a  nice   girl↙
     Abc  def  gh   ↙
输出样本：
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