/*?	基本描述
我们可以编程来找到一个字符串集中真正的最长串。真正的最长串是在原有输入上去掉空格以
后进行筛选得到的。现在请你来做一做。
?	输入描述
多组数据，每组数据由一个整数N引导，后面给出N个字串（字串中可能含空格，字串最大长度
不超过500）。
?	输出描述
对于每组数据，输出处理好的最长字串以及它的真实长度。行末回车。
?	样本输入
3
Aa a+a aaa-a  
Aa           aa  
abA
?	样本输出
Aaa+aaaa-a,10
*/
#include<iostream>
using namespace std;
int main(){
    const int N=501;
    char a[N][N];
    int i,j,k,n,mi;
    cin>>n;
    cin.ignore();
    for(i=0;i<n;i++)
    cin.getline(a[i],N);//读取数据完毕
    //消除空格
    for (int i = 0; i < n; i++) {
        int j = 0;
        int k = 0; 
        while (a[i][k] != '\0') {
            if (a[i][k] != ' ') {
                a[i][j++] = a[i][k]; // 非空格字符复制到前面,并重写
            }
            k++;
        }
        a[i][j] = '\0';
    }
    /*事实上，这个删除空格程序的实际含义就是遍历字符串的每一个字符，如
    果不是空格，那么就重写整个字符串的第一位*/
    k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;a[i][j]!='\0';j++);
    if(k<j)
    {
        k=j;
        mi=i;
    }
    }
    cout<<a[mi]<<','<<k<<endl;
    return 0;
}