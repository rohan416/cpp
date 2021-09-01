#include <iostream>
using namespace std;

class employee
{
private:
  int a, b, c;

public:
  int d, e;
  void setdata(int x, int y, int z);
  void getdata()
  {
    cout << "value of a is" << a << endl;
    cout << "b is" << b << endl;
    cout << "c is " << c << endl;
  }
};

void employee ::setdata (int x, int y, int z){
  a=x;
  b=y;
  c=z;

}


main()
{
  employee rc;
  rc.d=23;
  rc.e=69;
  rc.setdata(4,5,6);
  rc.getdata();
  return 0;
}