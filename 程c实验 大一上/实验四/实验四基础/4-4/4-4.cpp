/*�������һ��6X6�ľ�����ʾ����������������е������� �� ż���͡�
����ʾ���������ؿ����<cstdlib>��<ctime>; ʹ��srand((unsigned int)
time(NULL));��ʼ���������������ʹ��rand()%�������Χ��������ƶ���Χ
�ڵ������ֵ����
*/
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(){
    const int N=6;
    int a[N][N],i,j,sumj=0,sumo=0;
    srand(time(0));
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        a[i][j]=rand()%10;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++)
        cout<<setw(3)<<a[i][j]<<' ';
    cout<<endl;
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++)
        {
            if(a[i][j]%2==0)
            sumo=sumo+a[i][j];
            else sumj=sumj+a[i][j];
        }
    }
    cout<<"ż����Ϊ"<<sumo<<','<<"������Ϊ"<<sumj<<endl;
}