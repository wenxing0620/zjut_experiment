#include<iostream>
using namespace std;
int main(){
    int y,m,d;
    cout<<"��������ݺ��·ݣ�"<<endl;
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
        default:cout<<"�·ݲ��Ϲ�"<<endl;
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
        default:cout<<"�·ݲ��Ϲ�"<<endl;
            break;
        }
        }
        cout<<y<<"��"<<m<<"����"<<d<<"��"<<endl;
    }
    else cout<<"��ݲ��Ϲ�"<<endl;
    return 0;
}