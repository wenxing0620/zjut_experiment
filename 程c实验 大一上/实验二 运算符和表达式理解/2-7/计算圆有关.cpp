#include<iostream>
#include<cmath>
#include<iomanip>
#define pai 3.14159265358979323846
using namespace std;
int main(){
    double r,zc,mj,bmj,tj;
    cout<<"请输入半径：";
    cin>>r;
    zc=2*pai*r;
    mj=pai*r*r;
    bmj=4*pai*r*r;
    tj=(4/3)*pai*r*r*r;
    cout<<"周长为"<<setiosflags(ios::left)<<setprecision(4)<<setfill('*')<<setw(15)<<zc<<endl;
    cout<<"面积为"<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(2)<<setfill('*')<<setw(15)<<mj<<endl;
    cout<<"球的表面积为"<<scientific<<setprecision(5)<<setfill('*')<<setw(15)<<bmj<<endl;
    cout<<"球的体积为"<<fixed<<setprecision(3)<<setiosflags(ios::right)<<setfill('*')<<setw(15)<<tj<<endl;
    return 0;
}
 