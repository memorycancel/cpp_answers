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
    int n;cin>>n;
    string s;cin>>s;
    int o_x=1,o_y=1;
    for(int i=0;i<n;i++)
    {
        if(maze[o_x+1][o_y]!='#')
        {
            maze[o_x][o_y]=' ';
            o_x++;
            maze[o_x][o_y]='O';
        }
        else break;
    }
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
