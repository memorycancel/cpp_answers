#include <iostream>
using namespace std;

int main()
{
    char maze[7][6]=
    {
        {'#','#','#','#','#','#'},
        {'#',' ',' ',' ',' ','#'},
        {'#',' ',' ','O','O','#'},
        {'#','R',' ',' ',' ','#'},
        {'#',' ',' ','*','*','#'},
        {'#',' ',' ',' ',' ','#'},
        {'#','#','#','#','#','#'},
    };
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<6;j++)
        {
            cout<<maze[i][j];
        }
        cout<<endl;
    }

    return 0;
}