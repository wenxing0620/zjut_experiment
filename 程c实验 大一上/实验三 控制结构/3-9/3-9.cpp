#include<iostream>
#include<iomanip>
using namespace std;
int rngs(int x){//计算闰年的数量
    int i,y=0;
    for(i=1;i<=x-1;i++)
    {
        if((i%4==0 && i%100!=0)|| i%400==0) y=y+1;
    }
    return y;
}
int sumM(int y,int m){//计算输入年份的前几个月的天数
    int a,i,days2=0;
    for(i=1;i<=m-1;i++){
        switch(i){
            case 1:case 3:case 5:case 7: case 8:case 10:case 12:days2=days2+31;break;
            case 4:case 6:case 9:case 11:days2=days2+30;break;
            case 2:
            {
             if((y%4==0 && y%100!=0)|| y%400==0)days2=days2+29;
             else days2=days2+28;
            }
        }
    }
    return days2;
}
int main(){
    long long day,day1,day2;
    int y,m,d;
    cout<<"请输入年月日:"<<endl;
    do{cin>>y>>m>>d;}while(y<1 || m<1 || d<=1 );
    day1=365*(y-1)+rngs(y);
    day2=sumM(y,m);
    day=day1+day2+d;
    switch (day%7)
    {
    case 0:cout<<"星期日"<<endl;break;
    case 1:cout<<"星期一"<<endl;break;
    case 2:cout<<"星期二"<<endl;break;
    case 3:cout<<"星期三"<<endl;break;
    case 4:cout<<"星期四"<<endl;break;
    case 5:cout<<"星期五"<<endl;break;
    case 6:cout<<"星期六"<<endl;break;
    }
    return 0;

}