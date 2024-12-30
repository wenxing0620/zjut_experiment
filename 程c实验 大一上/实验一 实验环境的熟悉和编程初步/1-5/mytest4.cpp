#include<iostream>
using namespace std;
int main(){
   int a;
   a=3;
   a--;
   cout<<a<<endl;
   --a;
   cout<<a<<endl;

   int b=a;
   cout<<(b--)<<endl;
   cout<<b<<endl;

   cout<<(--b)<<endl;
   cout<<b<<endl;

   return 0;
}

