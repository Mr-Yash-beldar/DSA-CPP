// fliped solid diamind pattern
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
   int ROWS=n/2;
   
    for (int row = 0; row < ROWS; row++)
    {
        //inverted pyramid
        for (int col = 0; col < ROWS-row; col++)
        {
            cout << "*";
        }
         //pyramid full space
        for (int col = 0; col < row*2+1; col++)
        {
            cout << " ";
        }
        //inverted half pyramid
        for (int col = 0; col < ROWS-row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = 0; row < ROWS; row++)
    {
        //half pyramid
        for (int col = 0; col <row+1; col++)
        {
            cout << "*";
        }
         //inverted pyramid full space
        for (int col = 0; col < 2*ROWS-(2*row+1); col++)
        {
            cout << " ";
        }
        //half half pyramid
        for (int col = 0; col < row+1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
   
   
   
    return 0;
}