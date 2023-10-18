//diamond pattern
#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number of rows:  ";
    cin>>n;
    int ROWS=n/2;
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
    }for (int row = 0; row < ROWS; row++)
    {
        for(int space=0;space<row;space++)
        {
            cout<<" ";
        }
        for (int col = 0; col < ROWS-row; col++)
        {
           cout<<"* ";
            
        }
        cout << endl;
    }
    return 0;
}