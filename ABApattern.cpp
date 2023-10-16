/*
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
*/

#include <iostream>
using namespace std;
int main()
{
    int ROWS;
    cout << "Enter number of rows:  ";
    cin >> ROWS;
    for (int row = 0; row < ROWS; row++)
    {
        char alphabet = 'A';
        for (int col = 0; col < row + 1; col++)
        {
            cout << alphabet;
            alphabet++;
        }
        alphabet--;
        // print untill reaching to A
        while (alphabet > 'A')
        {
            alphabet--;
            cout << alphabet;
            
        }
        cout << endl;
    }
    return 0;
}
