#include <iostream>
using namespace std;

int main()
{
    char maze[7][6]=
    {
        {'#','#','#','#','#','#'},
        {'#',' ',' ',' ',' ','#'},
        {'#',' ','O',' ','*','#'},
        {'#','R','O',' ','*','#'},
        {'#',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ','#'},
        {'#','#','#','#','#','#'},
    };
    int n;cin>>n;
    string s;cin>>s;
    int r_x=3,r_y=1;
    for(int i=0;i<n;i++)
    {
        // if O next to R
        if(maze[r_x][r_y+1]=='O')
        {   // right of R is ' '
            if(maze[r_x][r_y+2]==' ')
            {
                maze[r_x][r_y]=' ';
                maze[r_x][r_y+1]='R';
                maze[r_x][r_y+2]='O';
                r_y++;
            }
            else if(maze[r_x][r_y+2]=='*')
            {
                maze[r_x][r_y]=' ';
                maze[r_x][r_y+1]='R';
                maze[r_x][r_y+2]='@';
                r_y++;
            }
        }
    }
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
