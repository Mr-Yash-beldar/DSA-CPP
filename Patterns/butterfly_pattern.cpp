//Buttefly pattern
/*
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
*/

//half pyramid pattern

#include <iostream>
using namespace std;
int main()
{
    int ROWS = 8;
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}