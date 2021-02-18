#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count1;
    int k = 0;
    int count;
    for(int i = 1; i <= n; i++)
    {
       count1 = n -i;
       while(count1 != 0)
       {
           cout << " ";
           count1 --;
       }
       count = i + k;
       while(count != 0)
       {
           cout << "*";
           count--;
       }
       k++;
       cout << endl;

    }
}
