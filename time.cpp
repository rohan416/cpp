#include<iostream>
using namespace std;

class time{
    int hour, minute;
    public:
    void getTime(){
        cout<<"enter the hour"<<endl;
        cin>>hour;
        cout<<"enter the minute"<<endl;
        cin>>minute;
    }
    void display(){
        cout<<"hours :"<<hour<<endl;
        cout<<"minutes : "<<minute<<endl;
    }
    time addTime(time a, time b){
        time c;
        c.hour= a.hour+ b.hour;
        c.minute=a.minute+ b.minute;
        return c;
    }
};
 
int main(){
    time t1,t2,t3, result;
    t1.getTime();
    t1.display();
    t2.getTime();
    t2.display();
    result= t3.addTime(t1, t2);
    result.display(); 
    // t3.display();
    return 0;
}
