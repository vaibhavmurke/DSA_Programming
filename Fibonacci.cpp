#include<iostream>
using namespace std;
int fibo(int n ){
    if(n==0 || n== 1 )return n;
    
    int fib1 = fibo(n-1);
    int fib2 = fibo(n -2);
    int ans = fib1 + fib2 ;
    return ans;
}
int main(){
    int n =10;
    int re = fibo(10);
    cout<<"fibonaacci  "<< n << " is :"<<re<<endl;
    return 0;
}
