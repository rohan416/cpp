#include<iostream>
using namespace std;

int fib(int n){
  if (n<2){
    return 1;
  }
  return fib(n-1)+fib (n-2);
}

int main(){
  int a ;
  cout<<"enter the no"<<endl;
  cin>>a;
  cout<<"fibo at "<<a<<"'s place is "<<fib(a)<<endl;

  
  return 0;
}