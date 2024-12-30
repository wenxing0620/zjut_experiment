#include<iostream>
using namespace std;
int main(){
    int y,m,d;
    cout<<"请输入年份和月份："<<endl;
    cin>>y>>m;
    if(y>1)
    {
        if((y%4==0 && y%100!=0)||y%400==0){
        switch (m)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:d=31;break;
        case 4:
        case 6:
        case 9:
        case 11:d=30;break;
        case 2:d=29;break;
        default:cout<<"月份不合规"<<endl;
            break;
        }
        }
        else{
                switch (m)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:d=31;break;
        case 4:
        case 6:
        case 9:
        case 11:d=30;break;
        case 2:d=28;break;
        default:cout<<"月份不合规"<<endl;
            break;
        }
        }
        cout<<y<<"年"<<m<<"月有"<<d<<"天"<<endl;
    }
    else cout<<"年份不合规"<<endl;
    return 0;
}