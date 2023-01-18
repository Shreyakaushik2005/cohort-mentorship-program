#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int n1, n2, i;
    cout << "enter two no.";
    cin >> n1;
    cin >> n2;
    int lowest = n1;
    if (n2 < n1)
    {
        lowest = n2;
    }
    for (i = lowest; i >= 2; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            break;
        }
    }
    cout << i << endl;
    int lcm = (n1 * n2) / i;
    cout << lcm << endl;
    return 0;
}
