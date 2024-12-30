#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"请输入三角形的三边"<<endl;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b) 
    {
     if((a==b || a==c || b==c) && (a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)) cout<<"等腰直角三角形"<<endl;
     else if(a==b || a==c || b==c) cout<<"一般等腰三角形"<<endl;
     else if(b*b+c*c==a*a || b*b==c*c+a*a || c*c==a*a+b*b) cout<<"一般直角三角形"<<endl;
     else cout<<"一般三角形"<<endl;
    }
    else cout<<"不能构成三角形"<<endl;
    return 0;
}
