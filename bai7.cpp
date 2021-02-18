#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1][n+1];
    for(int i = 1; i <= n ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j] = j;
        }
    }
    int j = 1;
    int k;
    while(j <= n)
    {
        k = a[1][j];
        for (int i = 1; i <= n; i++)
        {
            a[i][j] = k;
            k++;
            if(k > n) k = 1;
        }
        j++;


    }
     for(int i = 1; i <= n ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


}


