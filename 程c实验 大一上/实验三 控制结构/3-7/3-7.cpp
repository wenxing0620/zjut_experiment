#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    int i,sum=0;
    cout<<"������һ����������"<<endl;
    while(cin>>a){
        sum=0;
        for(i=a.size()-1;i>=0;i--)
        {
        sum=sum+a[i]-'0';
        }
        if(sum%3==0)cout<<"��3�ı���"<<endl;
        else cout<<"����3�ı���"<<endl;
    }
    return 0;
}
