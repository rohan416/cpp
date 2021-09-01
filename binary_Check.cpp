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
      cout << "it is binary";
}

int main()
{
  binary b;
  b.readData();
  b.CheckData();

  return 0;
}