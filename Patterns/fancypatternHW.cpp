/*
1
2*2
3*3*3
4*4*4*4
3*3*3
2*2
1
*/
#include <iostream>
using namespace std;
int main()
{   
    int ROWS ;
    cout<<"Enter number of rows:  \n";
    cin>>ROWS;
    // ROWS=4;
    for (int row = 0; row < ROWS; row++)
    {
     
        for (int col = 0; col < row*2+1; col++)
        {
            if(col%2==0)
                cout<<row+1;
            else
                cout<<"*";
            
        }
      
        cout << endl;
    }
    for (int row = ROWS-1; row > 0; row--)
    {
     
        for (int col = 0; col < 2*row-1; col++)
        {
            if(col%2==0)
                cout<<row;
            else
                cout<<"*";
            
        }
        
      
        cout << endl;
    }
       

    return 0;
}
