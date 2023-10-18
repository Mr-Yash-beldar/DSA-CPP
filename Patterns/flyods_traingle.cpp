// Floyd's Traingle
/*
1
23
456
78910
*/
#include <iostream>
using namespace std;
int main()
{
    int ROWS;
    cout << "Enter number of rows: ";
    cin >> ROWS;
    // ROWS=5;
    int number = 1;
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << number++;
        }
        cout << endl;
    }
    return 0;
}