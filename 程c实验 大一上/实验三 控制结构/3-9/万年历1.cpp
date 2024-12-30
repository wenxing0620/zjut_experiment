#include<iostream>
#include<iomanip>
using namespace std;
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
int week(int y,int m){//计算这个月的第一天是周几
    long long day,day1,day2;
    int week,d=1;
    day1=365*(y-1)+rngs(y);
    day2=sumM(y,m);
    day=day1+day2+d;
    week=day%7;
    return week;
}
int main(){
    int y,m,d,md;
    const char* weekname[]={"日", "一", "二", "三", "四", "五", "六"};
    cin>>y>>m;
    d=week(y,m);
    switch(m){
            case 1:case 3:case 5:case 7: case 8:case 10:case 12:md=md+31;break;
            case 4:case 6:case 9:case 11:md=md+30;break;
            case 2:
            {
             if((y%4==0 && y%100!=0)|| y%400==0)md=md+29;
             else md=md+28;
            }
    }
    for(int i=0;i<=6;i++)
    cout<<weekname[i]<<" ";
    cout<<endl;
    for(int i=0;i<d;i++)
    {
        cout<<setw(3)<<" ";
    }
    for(int i=1;i<=md;i++)
    {
     cout<<setw(3)<<setiosflags(ios::left)<<i;
     if((i+d)%7==0)cout<<endl;
    }
    return 0;
}