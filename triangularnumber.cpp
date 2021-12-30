#include <iostream>
using namespace std;
int main ()
{
    int n,i,f=0,sum =0;
    cout << "Enter the number" << endl;
    cin >> n;
    for ( i =1 ; i <n;i++)
    {
        sum = sum+i;
        if (sum == n)
        {
        f = 1;
        break;
        }
    }
    if (f==1)
    {
        cout << n << " is triangular number" << endl;
    }
    else
    cout << n << " is not a triangular number" << endl;

    return 0;
}