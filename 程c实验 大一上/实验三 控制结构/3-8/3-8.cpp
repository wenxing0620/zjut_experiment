#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int m,n,i,j,k;
    cout<<"请输入下上两个三角形的高："<<endl;

    while(cin>>m>>n)
    {
            if(n>m || m>=50) cout<<"输入高度不合理，请重新输入"<<endl;continue;

                for(i=1;i<=n;i++)
            {
                for(j=1;j<=m-i;j++)//输出空格
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
