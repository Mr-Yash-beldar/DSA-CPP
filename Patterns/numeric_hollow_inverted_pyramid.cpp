// Numeric hollow inverted pyramid
/*
12345
2  5
3 5
45
5
*/

#include <iostream>
using namespace std;
int main()
{
    int ROWS;
    cout << "Enter number of rows:  ";
    cin >> ROWS;
    // ROWS=5;
    for (int row = 0; row < ROWS; row++)
    {

        for (int col = 0; col < ROWS - row; col++)
        {
            if(row==0)
                cout << col+row+1;
            else if(col==0 || col==ROWS-row-1)
                cout << col+row+1;
            else
                cout<<" ";
        }
        cout << endl;
    }
    return 0;
}
