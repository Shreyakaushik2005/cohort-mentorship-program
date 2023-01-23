#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "enterno. of rows";
    cin >> n;
    int star = 1;
    int space = n / 2;
    int oval = 1;
    for (i = 1; i <= n; i++)
    {
        int inval = oval;
        for (j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= star; j++)
        {
            cout << inval << " ";

            if (j <= star / 2)
            {
                inval++;
            }
            else
            {
                inval--;
            }
        }
        cout << endl;

        if (i <= n / 2)
        {
            space--;
            star = star + 2;
            oval++;
        }
        else
        {
            space++;
            star = star - 2;
            oval--;
        }
    }
}
