#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    int i,sum=0;
    cout<<"请输入一个正整数："<<endl;
    while(cin>>a){
        sum=0;
        for(i=a.size()-1;i>=0;i--)
        {
        sum=sum+a[i]-'0';
        }
        if(sum%3==0)cout<<"是3的倍数"<<endl;
        else cout<<"不是3的倍数"<<endl;
    }
    return 0;
}
