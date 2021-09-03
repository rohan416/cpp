#include <iostream>
using namespace std;

class shop
{
  int itemTd[100];
  int itemPrice[100];
  int counter;

public:
  void initCounter(void) { counter = 0; }
  void setPrice(void);
  void displayPrice(void);
};

void shop::setPrice(void)
{
  cout << "enter Id of item " << counter + 1 << endl;
  cin >> itemTd[counter];
  cout << "enter price" << endl;
  cin >> itemPrice[counter];
  counter++;
}

void shop::displayPrice(void)
{
  for (int i = 0; i < counter; i++)

  {
    cout << "the price of the item id with id " << itemTd[i] << " is " << itemPrice[i] << endl;
  }
}

int main()
{
  shop dukaan;
  dukaan.initCounter();
  dukaan.setPrice();
  dukaan.setPrice();
  dukaan.setPrice();
  dukaan.setPrice();
  dukaan.displayPrice();

  return 0;
}
