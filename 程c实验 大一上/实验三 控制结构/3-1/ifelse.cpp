#include<iostream>
using namespace std;
int main(){
    int y,m,d;
    cout<<"��������ݺ��·ݣ�"<<endl;
    cin>>y>>m;
    if(y>=1 && m>=1 && m<=12){
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) d=31;
    else if(m==4||m==6||m==9||m==11) d=30;
    else{
        if((y%4==0 && y%100!=0)||y%400==0) d=29;
        else d=28;
    }cout<<y<<"��"<<m<<"����"<<d<<"��"<<endl;
    }
    else cout<<"��������²��Ϲ�"<<endl;
    
    return 0;
}