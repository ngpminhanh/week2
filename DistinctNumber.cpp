#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    a != n;
    int b = 0;
    int count = 0;
    while(n > 0)
    {
        if ( a != n)
        {
           b = b*10 + n;
            a = n;
            count ++;
            cin >> n;
        }
        else cin >> n;

    }
    count = pow(10, count -1);
    while(count != 0)
    {
        cout << b / count << " ";
        b = b % count;
        count = count /10;
    }


}
