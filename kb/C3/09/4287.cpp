#include <iostream>
using namespace std;

int ji()
{
    return 97*65;
}

int cha()
{
    return 97-65;
}

int he()
{
    return 97+65;
}

float shang()
{
    return float(97/65.0000f);
}
int main()
{
//    cout.precision(4);
    cout<<he()<<' '<<cha()<<' '<<ji()<<' '<<shang();
    return 0;
}
