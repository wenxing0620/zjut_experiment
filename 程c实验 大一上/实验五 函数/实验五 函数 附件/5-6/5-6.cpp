/*6����֪һ��ʹ��������Ե�������������£�
#include <iostream>
#define n 10
void SortFunction(int [],unsigned); //�������Ľ�������
void Display(int [],unsigned); //����������ʾ
int main()
{ int x[n+1]={0,800,150,300,600,550,650,400,350,450,700};
 Display(x,n); //����ǰ��ʾ
//SortFunction(x,n); //����
Display(x,n);//�������ʾ
return 0;
}
�������������ʹ������������ԣ�ð�ݺ�ѡ�񣩡�
��1��	ʵ��ð�ݵĽ���������ԣ�����ԭ��Ϊ�� void BubbleSort(int [],unsigned);ʹ�ø����ĳ����ܲ�����ĺ�����
��2��	ʵ��ѡ��Ľ���������ԣ�����ԭ��Ϊ�� void SelectSort(int [],unsigned); ʹ�ø����ĳ����ܲ�����ĺ�����
��(5��) (1) void BubbleSort(int [],unsigned);

(5��) (2) void SelectSort (int [],unsigned);

(10��) (3)�������ʵ���Լ����Խ����
*/
#include <iostream>
#define n 10
using namespace std;
void BubbleSort(int [],unsigned);//�������Ľ�������
void SelectSort (int [],unsigned);
void Display(int [],unsigned); //����������ʾ
int main()
{ int x[n+1]={0,800,150,300,600,550,650,400,350,450,700};
Display(x,n); //����ǰ��ʾ
BubbleSort(x,n); //����
//SelectSort(x,n);
Display(x,n);//�������ʾ
return 0;
}
void BubbleSort(int a[],unsigned){
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        if(a[j]<a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }

}
void SelectSort(int a[],unsigned){
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(a[j]>a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
void Display(int a[],unsigned x){
    int i,flag=0;
    for(i=1;i<=x;i++)
    {
        if(flag==1)cout<<',';
        cout<<a[i];
        flag=1;
    }
    cout<<endl;
}