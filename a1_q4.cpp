#include <iostream>
using namespace std;

int main()
{
    int low, high, i, j;
    cout << "enter lower limit";
    cin >> low;
    cout << "enter upper limit";
    cin >> high;
    for (i = low; i <= high; i++)
    {
      int  count =0 ;
        for (j = 2; j *j<= i; j++)
        {
            if ((i % j) == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cout<<i<<endl;
        }
        
    }
    return 0;
}
