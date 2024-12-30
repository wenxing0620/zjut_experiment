/*2、在10000-20000中将前两位和后两位（万位和千位构成质数、十位和个位）构成质数的数找出来。比如11613。
请编写程序实现这个工作，其中对于质数的判断写成一个函数，函数的原型为int isPrime(unsigned num),是质数
返回1，否则返回0。实现这个函数并完成主程序。
(10分)答：程序解和运行截屏：
*/
#include<iostream>
using namespace std;
int isPrime(unsigned);
double sqrt_better(double);
int main(){
    unsigned xf,xb;
    int i;
    for(i=10000;i<=20000;i++)
    {
        xf=i/1000;
        xb=i%100;
        if(isPrime(xf)&&isPrime(xb))
        cout<<i<<' ';
    }
}
int isPrime(unsigned x){
    int i;
    if(x==1||x==0) return 0;
    for(i=2;i<sqrt_better(x);i++)
    {
        if(x%i==0) return 0;
    }
    return 1;
}
//来自题三的平方根函数
double sqrt_better(double n){
    double x=1.0,a,prex;
    do{
        prex=x;
        x=(0.5)*(x+n/x);
        a=x-prex;
    }while(a>1e-5||a<-1e-5);
    return x;
}