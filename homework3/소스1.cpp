#include <iostream>
#include <cmath>
using std::abs;
using std::cout;
using std::endl;
using std::string;

void main()
{
    for (int i = 1; i <= 11; i++)
    { 
        cout << string(abs(6 - i),' ') << string(12 - 2 * abs(6 - i), '*')<< endl;
    }
    

}