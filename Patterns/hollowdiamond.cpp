//  hollow diamond pattern

#include <iostream>
using namespace std;
int main()
{
    int ROWS;
    cout << "Enter number of rows:  ";
    cin >> ROWS;
    for (int row = 0; row < ROWS; row++)
    {
        for (int space = 0; space < ROWS - row - 1; space++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0 || col == row + 1 - 1)
            {
                cout << "* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout << endl;
    }
    for (int row = 0; row < ROWS; row++)
    {
        for(int space=0;space<row;space++)
        {
            cout<<" ";
        }
        int totalcol=ROWS-row;
        for (int col = 0; col <totalcol; col++)
        {
            if(col==0||col==totalcol-1)
              cout<<"* ";
            else
               cout<<"  ";
            
        }
        cout << endl;
    }
    return 0;
}