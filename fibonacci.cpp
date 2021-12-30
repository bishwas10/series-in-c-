#include <iostream>
using namespace std;
int main ()
{
    int a = 0, b = 1,c,n,i;
    cout << "Enter the number of terms you want in Fibonacci Series" << endl;
    cin >> n;
    for (i = 1; i <=n;i++)
    {
        cout << a ;
        cout << " " ;
        c = a+b;
        a = b;
        b = c;
      
    }
    
    return 0;

}