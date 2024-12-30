/*2����10000-20000�н�ǰ��λ�ͺ���λ����λ��ǧλ����������ʮλ�͸�λ���������������ҳ���������11613��
���д����ʵ��������������ж����������ж�д��һ��������������ԭ��Ϊint isPrime(unsigned num),������
����1�����򷵻�0��ʵ��������������������
(10��)�𣺳��������н�����
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
//����������ƽ��������
double sqrt_better(double n){
    double x=1.0,a,prex;
    do{
        prex=x;
        x=(0.5)*(x+n/x);
        a=x-prex;
    }while(a>1e-5||a<-1e-5);
    return x;
}