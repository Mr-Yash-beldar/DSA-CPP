// Gopal inverted numeric half pyramid
/*
333222111
332211
321
*/

#include <iostream>
using namespace std;
int main()
{
    int ROWS;
    cout << "Enter Number of Rows: ";
    cin >> ROWS;
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < ROWS; col++)
        {
            for (int col2 = 0; col2 < ROWS - row; col2++)
            {
                cout << ROWS - col;
            }
        }
        cout << endl;
    }
    return 0;
}
