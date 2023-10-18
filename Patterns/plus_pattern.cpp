// inverted half pyramid pattern
/*
Enter number of rows: 7
   *   
   *   
   *   
*******
   *   
   *   
   *  
*/
#include <iostream>
using namespace std;
int main()
{
    int ROWS ;
    cout<<"Enter number of rows: ";
    cin>>ROWS;

    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < ROWS; col++)
        {
            if (col == ROWS / 2 || row == ROWS / 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}