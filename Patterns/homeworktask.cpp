/*
1
1 2
1  3
1   4
12345
*/
#include <iostream>
using namespace std;

int main()
{
    int ROWS;
    cout<<"Enter number of rows: ";
    cin>>ROWS;
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<=row;col++){
            if(row==col && row!=0 && row!=ROWS-1)
                cout<<" ";
            if(col==0 || row==ROWS-1 || col==row)
                cout<<col+1;
            else
            cout<<" ";
                
            
        }
        cout<<endl;
    }
    return 0;
}