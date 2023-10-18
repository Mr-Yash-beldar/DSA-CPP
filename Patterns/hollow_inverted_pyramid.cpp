//  hollow inverted  pyramid pattern

#include <iostream>
using namespace std;
int main()
{
    int ROWS ;
    cout<<"Enter number of rows:  ";
    cin>>ROWS;
    for (int row = 0; row < ROWS; row++)
    {
        for(int space=0;space<row;space++)
        {
            cout<<" ";
        }
        int totalcol=ROWS-row;
        for (int col = 0; col <totalcol; col++)
        {
            if(col==0||col==totalcol-1||row==0)
              cout<<"* ";
            else
               cout<<"  ";
            
        }
        cout << endl;
    }
    return 0;
}