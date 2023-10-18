//inverted hollow half pyramid
#include <iostream>
using namespace std;

int main()
{
    int ROWS;
    cout<<"Enter number of rows: ";
    cin>>ROWS;
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<ROWS-row;col++){
            if(col==0 ||row==0 ||col==ROWS-row-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}