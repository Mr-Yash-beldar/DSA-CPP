/*

*
**
***
****
***
**
*

*/
#include <iostream>
using namespace std;
int main()
{
    int ROWS;
    cout << "Enter number of rows:  \n";
    cin >> ROWS;
    // ROWS=4;
    for (int row = 0; row < ROWS; row++)
    {

        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int row = ROWS - 1; row > 0; row--)
    {

        for (int col = 0; col < row ; col++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
