#include <iostream>
using namespace std;

//solution 1
// int main()
// {
//     for(int i=1; i<=9; i++)
//     {
//         for(int j=0; j<=9; j++)
//         {
//             for(int k=0; k<=9; k++)
//             {
//                 for(int l=0; l<=9; l++)
//                 {
//                     int a = i*1000+j*100+k*10+l;
//                     int b = l*1000+k*100+j*10+i;
//                     if(a * 9 == b)
//                     {
//                         cout << a << endl;
//                     }
//                 }
//             }
//         }
//     }

//     return 0;
// }

// solution 2
int main()
{
    for(int i=1000;i<=9999;i++)
    {
        int a=i/1000%10;
        int b=i/100%10;
        int c=i/10%10;
        int d=i/1%10;
        if(i*9==d*1000+c*100+b*10+a) cout<<i<<endl;
    }

    return 0;
}
