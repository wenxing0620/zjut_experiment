#include<iostream>
using namespace std;
int tri(int x){
    int y;
    y=x*x*x;
    return y;
}
int main(){
    int i=100;
    bool flag=1;
    for(i=100;i<=999;i++)
    {if((tri(i/100)+tri(i/10%10)+tri(i%10))==i) 
        {if(!flag) cout<<",";
         cout<<i;
         flag=0;
        }
    }
    return 0;
}