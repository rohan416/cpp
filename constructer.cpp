#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
    complex(void);
     
     void print(){
         cout<<"the sum is "<<a<<"+"<<b<<"i"<<endl;
     }
} ;

complex:: complex(){
    a=10;
    b=2;
}

int main(){
    complex c;
    c.print();
    
    return 0;
}
