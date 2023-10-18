//  full pyramid pattern

#include <iostream>
using namespace std;
int main()
{
    int ROWS ;
    cout<<"Enter number of rows:  ";
    cin>>ROWS;
    for (int row = 0; row < ROWS; row++)
    {
        for(int space=0;space<ROWS-row-1;space++)
        {
            cout<<" ";
        }
        for (int col = 0; col < row+1; col++)
        {
           cout<<"* ";
            
        }
        cout << endl;
    }
    return 0;
}