#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int m,n,i,j,k;
    cout<<"�������������������εĸߣ�"<<endl;

    while(cin>>m>>n)
    {
            if(n>m || m>=50) cout<<"����߶Ȳ���������������"<<endl;continue;

                for(i=1;i<=n;i++)
            {
                for(j=1;j<=m-i;j++)//����ո�
                {
                    cout<<" ";
                }
                for(k=1;k<=(2*i-1);k++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
        
            for(i=1;i<=m;i++)
            {
                for(j=1;j<=m-i;j++)
                {
                    cout<<" ";
                }
                for(k=1;k<=(2*i-1);k++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
        
    }
    return 0;
}
