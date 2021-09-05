#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int x1, y1;

public:
    point(int, int);
    friend void distance(point, point);
};

point::point(int x, int y)
{
    x1 = x;
    y1 = y;
}

void distance(point o1, point o2)
{
    int d;
    d = sqrt(((o1.x1 - o2.x1) * (o1.x1 - o2.x1)) + ((o1.y1 - o2.y1) * (o1.y1 - o2.y1)));
    cout << "the distance is " << d << endl;
}

int main()
{
    point c1(1, 1);
    point c2(0, 0);
    distance(c1, c2);

    return 0;
}
