//task pattern
/*
-DCBA
4-CBA
34-BA
234-A
1234-

*/

#include <iostream>
using namespace std;
int main()
{
    int ROWS;
    cout<<"Enter number of rows: ";
    cin>>ROWS;
    for (int row = 0; row < ROWS; row++)
    {
        char alphabet ='A'+(ROWS-row-2);
        int letter=ROWS-row;
        
        for (int col = 0; col < ROWS; col++)
        {
            if((row==col))
                cout<<"-";
            else if(row<col){
                cout<<alphabet;
                alphabet--;}
            else{
                cout <<letter;
                letter++;
            }


        }
        cout << endl;
    }
    return 0;
}