/*��һά����ģ�����ݹ�ģΪ100���������ݼ������ݼ���Χ���⣩��Ҫ��������
�ݼ������ֵ����Сֵ���Լ���Ӧ�ڼ����е�λ�á������е�����ʹ�����������
����������ֵ�����ֵ��λ���±꣬��Сֵ����Сֵ��λ���±ꡣ����ʾ������
���������鿴ʵ���ĸ���1���������аٶȣ�*/
#include<iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;
int main(){
    const int N=100;
    int a[100],i,max,min,m,n;
    srand(time(0));
    for(i=0;i<N;i++)      
    a[i]=rand() % 100+ 1;
    max=min=a[0];     
    for(i=0;i<N;i++){
        if(a[i]>max){
            max=a[i];
            m=i;
        }
    }
    for(i=0;i<N;i++){
        if(a[i]<min){
            min=a[i];
            n=i;
        }
    }
    cout<<"���ֵΪ"<<max<<"��"<<m<<"������СֵΪ"<<min<<"��"<<n<<"��"<<endl;
    return 0;
}