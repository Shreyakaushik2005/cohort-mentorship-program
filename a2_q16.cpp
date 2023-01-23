#include <iostream>
using namespace std;

int main()
{
    int i, j, n, k, space_1, space_2;
    cout << "enter no. of rows";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == n)
            {
                break;
            }

            cout << j << " ";
        }
        for (space_1 = 1; space_1 <= n - i; space_1++)
        {
            cout << "  ";
        }
        for (space_2 = 1; space_2 <= n - i - 1; space_2++)
        {
            cout << "  ";
        }

        for (k = i; k >= 1; k--)
        {

            cout << k << " ";
        }
        cout << endl;
    }
}
