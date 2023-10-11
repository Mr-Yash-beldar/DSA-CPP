//Inverted numeric half pyramid pattern

#include <iostream>
using namespace std;
int main()
{
    int ROWS = 5;
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < ROWS-row; col++)
        {
            cout << ROWS-col-row;
        }
        cout << endl;
    }
    return 0;
    // int n=10;
    // if(cout <<n){
    //     cout <<"Yash";
    // }
}