#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count ;
    int j = 1;
    int k = 1;
    for(int i = n; i >= 1; i--)
    {
        count = i;

        while(count > 0)
        {
            cout << "*" ;
            count --;
        }
        cout << endl;
        while(j!= 0)
        {
            cout << " ";
            j--;
        }

        k++;
        j = k;


    }
}
