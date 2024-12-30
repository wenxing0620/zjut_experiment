/*把多个字符串放在二维数组里，构成了字符串集合。以字符串作为数据单位，处理以下问题：
假设一个班级有10名同学，现在需要编写一个程序实现10位同学姓名的排序整理。请你使用C风
格的字符串来存储同学的姓名，并使用<cstring>库进行姓名的按字典序升序整理。（可以使
用冒泡或者选择排序）
测试数据：
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
    //采用冒泡排序的策略
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