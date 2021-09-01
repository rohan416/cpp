#include <iostream>
using namespace std;

int fact(int a)
{
    if (a <= 1)
    {
      return 1;
    }
    else
    {
      return a * fact(a-1);
    }
  
}

int main()
{
  int x;
  cout << "enter the no" << endl;
  cin >> x;
  cout << "the factorial is " << fact(x);
  return 0;
}