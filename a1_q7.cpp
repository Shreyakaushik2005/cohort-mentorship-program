#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int x, sum = 1, count = 0, r;
    cout << "enter a number";
    cin >> x;

    while (x != 0)
    {
        r = x % 10;
        x = x / 10;
        count++;
        sum = sum + count * pow(10, r - 1);
    }
    cout << "inverse of this no. is" << sum << endl;
    return 0;
}
