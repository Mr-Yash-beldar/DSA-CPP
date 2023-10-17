// Numeric palindrom equilateral pyramid
/*
    1
   121
  12321
 1234321
123454321
*/

#include <iostream>
using namespace std;
int main()
{
    int ROWS;
    cout << "Enter number of rows:  \n";
    cin >> ROWS;
    // ROWS = 5;
    for (int row = 0; row < ROWS; row++)
    {
        int number = 1;
        // for space
        for (int col = 0; col < ROWS - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row * 2 + 1 -row; col++)
        {
            cout << number;
            number++;
        }
        number--;
        while (number > 1)
        {
            number--;
            cout << number;
        }
        cout << endl;
    }
    return 0;
}
