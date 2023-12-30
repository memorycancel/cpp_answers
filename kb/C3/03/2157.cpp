#include <iostream>
using namespace std;

int main()
{
    char maze[6][6]=
    {
        {'#','#','#','#','#','#'},
        {'#','O',' ','#',' ','E'},
        {'#',' ','#','#',' ','#'},
        {'#',' ',' ','#',' ','#'},
        {'#','#',' ',' ',' ','#'},
        {'#','#','#','#','#','#'}
    };
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cout<<maze[i][j];
        }
        cout<<endl;
    }
    return 0;
}
