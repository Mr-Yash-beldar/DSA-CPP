// Pascal traingle
/*
1
11
121
1331
14641
15101051
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
        int pascal=1;
        for (int col = 0; col < row+1 ; col++)
        {
           cout << pascal;
           pascal=pascal*((row+1)-(col+1))/(col+1);
        }
        cout << endl;
    }
    return 0;
}

// Pascal=1

// ((row-col)/col)*pascal