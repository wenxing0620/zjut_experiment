/*�Ѷ���ַ������ڶ�ά������������ַ������ϡ����ַ�����Ϊ���ݵ�λ�������������⣺
����һ���༶��10��ͬѧ��������Ҫ��дһ������ʵ��10λͬѧ������������������ʹ��C��
����ַ������洢ͬѧ����������ʹ��<cstring>����������İ��ֵ�����������������ʹ
��ð�ݻ���ѡ������
�������ݣ�
char bj[10][20] = {"DongLinwei","WangJunjie","ChiJiamei", "XieZhongjie",
"HuangXuhang","WangJun","Huanghang",
"ZhangZhongjie","HuangQian","DongMeihao"};
*/
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char bj[10][20] = {"DongLinwei","WangJunjie","ChiJiamei", "XieZhongjie","HuangXuhang","WangJun","Huanghang","ZhangZhongjie","HuangQian","DongMeihao"};
    char temp[20]={};
    int i,j,k;
    //����ð������Ĳ���
    for(i=0;i<10;i++)
    {
        for(j=0;j<=10;j++)
        if(strcmp(bj[i],bj[j])<=0)
        {
            strcpy(temp,bj[i]);
            strcpy(bj[i],bj[j]);
            strcpy(bj[j],temp);
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;bj[i][j]!='\0';j++)
        cout<<bj[i][j];
    cout<<endl;    
    }
    return 0;
}