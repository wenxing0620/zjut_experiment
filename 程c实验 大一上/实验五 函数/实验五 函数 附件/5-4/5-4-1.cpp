/*4. 学习了递归函数后 ，我们发现原来好多用循环实现的工作实际都有其对应的递归解，比如n! ， xy  ，
 * 斐波那契数求解等。你知道很多没有直接数学递归表达的工作也有其对应的递归解吗？现在就让我们来试一试。
（1）数制转换：将一个10进制数num转换为2进制数。请尝试写一个非递归的函数, 函数原型为 void D2B(int num); 
将num转换为2进制值输出；再尝试写一个递归的函数，函数原型为 void D2BRecursion(int num); 仔细分析这个计算
模型的递推规则和回归点，完成函数后将非递归和递归的实现进行比较，你更偏爱哪种实现呢？
（3）对于（1）（2）实现的函数，都请你设计相应的主函数来测试你的工作的正确性。
*/
#include<iostream>
using namespace std;
void D2B(int);
void D2BRecursion(int);
int main(){
    int num;
    cin>>num;
    D2B(num);
    cout<<endl;
    D2BRecursion(num);
}
void D2B(int x){
    
}
