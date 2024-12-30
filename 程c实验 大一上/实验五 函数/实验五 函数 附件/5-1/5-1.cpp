/*1、A工程队接了若干个建造游泳池的项目。经历数周，他们终于做完了工程。现在到了跟客户收项目款的时间，
请你补充完下面的程序以便帮助这个工程队快速的完成收款工作。备注：游泳池的造价由走道费用和围栏费用两部分构
成。铺设走道的单价为167.5元/平方米，围栏的单价是36.4元/米。其中，游泳池形状如图所示，橙色部分为走道，
红色部分为围栏。
工程队一共造了5个游泳池。分别为
1号池直径12.2米，走道宽3米；
2号池直径5米，走道宽2.8米；
3号池直径4.8米，走道宽1米；4号池直径宽6米；走道宽1.4米；
5号池直径8.7米，走道宽2.3米。

//============================================================
#include <iostream>
using namespace std;
…… //函数声明
int main(){
const double zddj=167.5;//走道单价
  const double wldj=36.4;//围栏单价
  const double pi=3.14;//定义圆周率
double r;//池直径
  double c;//走道宽
  double wlc;//围栏长度
  double zds;//走道面积
  int i;
for(i=1;i<=5;i++)
{  cout<<"请输入第"<<i<<"号游泳池数据(直径，走道宽)：";
cin>>r>>c;
wlc=fwlc(r); //函数调用，用于计算围栏长度，
zds=fzds(c,r); //函数调用，用于计算走道面积
cout<<"The cost of No."<<i<<" is:"
<<(wlc*wldj+zds*zddj)<< " Yuan."<<endl;
}
}
……//函数定义
*/
#include <iostream>
using namespace std;
double fwlc(double);
double fzds(double,double);
const double zddj=167.5;//走道单价
const double wldj=36.4;//围栏单价
const double pi=3.14;//定义圆周率
int main(){
    double r;//池直径
    double c;//走道宽
    double wlc;//围栏长度
    double zds;//走道面积
    int i;
    for(i=1;i<=5;i++)
    {  
        cout<<"请输入第"<<i<<"号游泳池数据(直径，走道宽):";
        cin>>r>>c;
        wlc=fwlc(r); //函数调用，用于计算围栏长度，
        zds=fzds(c,r); //函数调用，用于计算走道面积
        cout<<"The cost of No."<<i<<" is:"
        <<(wlc*wldj+zds*zddj)<< " Yuan."<<endl;
    }
}
double fwlc(double r){
    double wlc;
    r=r/2;
    wlc=2*pi*r;
    return wlc;
}
double fzds(double c,double r){
    double s;
    r=r/2;
    s=pi*(c+r)*(c+r)-pi*r*r;
    return s;
}