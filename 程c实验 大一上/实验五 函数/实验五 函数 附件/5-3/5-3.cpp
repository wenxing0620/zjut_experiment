/*3.有一个种快速求得平方根的方法叫做牛顿迭代法。如果将它实现为程序会比math库中的sqrt做的更快。下面介绍
这种方法，请阅读后将其实现为一个封装好的函数sqrt_better，平方根达到0.00001的迭代精度即可, 并将这个功能
应用于题2的质数判定。
牛顿迭代法回顾：求n的平方根，先假设一猜测值X0 = 1，然后根据以下公式求出X1，
再将X1代入公式右边，继续求出X2…通过有效次迭代后即可求出n的平方根，Xk+1
*/
#include<iostream>
using namespace std;
int main(){
    double n;
    cin>>n;
    double x=1.0,a,prex;
    do{
        prex=x;
        x=(0.5)*(x+n/x);
        a=x-prex;
    }while(a>1e-5||a<-1e-5);
    cout<<x<<endl;
    return 0;
}
