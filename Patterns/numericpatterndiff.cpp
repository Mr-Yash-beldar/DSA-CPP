/*
Pattern
N = 4
   1
  232
 34543
4567654
*/

#include <iostream>
using namespace std;
int main()
{
    int ROWS;
    cout<<"Enter number of rows: ";
    cin>>ROWS;
    for(int row=0;row<ROWS;row++){
        //space loop
        for(int col=0;col<ROWS-row-1;col++){
                cout<<" ";
        }
        int number=row+1;
        for(int col=0;col<row+1;col++){
                cout<<number;
                number++;
        }
        number=number-1;
        for(int col=0;number>row+1;col++){
                number--;
                cout<<number;
        }
        

        cout<<endl;
    }
    return 0;

}