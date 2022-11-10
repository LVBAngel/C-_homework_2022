#include <iostream>

using namespace std;

int main()
{   double x,y;
    cout << "Give definition of x:";
    cin >> x;
    cout << "Give definition of y:";
    cin >> y;
    x+=y;
    y+=x;
    x=y-x;
    y-=2*x;
    cout <<"x=" << x <<' ' <<"y="<< y << endl;
    return 0;
}
