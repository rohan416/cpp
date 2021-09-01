#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
  string s;

public:
  void readData();
  void CheckData();
  void one();
  void display();
};


void binary::readData()
{
  cout << "enter a number" << endl;
  cin >> s;
}

void binary::CheckData()
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) != '0' && s.at(i) != '1')
    {
      cout << "not a binary number" << endl;
      exit(0);
    }
  }
  cout << "it is binary"<<endl;
}

void binary::one()
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) == '0')
    {
      s.at(i) = '1';
    }
    else
    {
      s.at(i) = '0';
    }
  }
}

void binary::display()
{
   cout << "1's compliment is ";
  for (int i = 0; i < s.length(); i++)
  {
   
    cout << s.at(i);
  }
  
  
}


int main()
{
  binary b;
  b.readData();
  b.CheckData();
  b.one();
  b.display();
 

  return 0;
}