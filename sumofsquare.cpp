/* Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n). Go to the editor
Sample Output:
Input the value for nth term: 5
1*1 = 1
2*2 = 4
3*3 = 9
4*4 = 16
5*5 = 25
The sum of the above series is: 55 */
#include <iostream>
using namespace std;
int main()
{
    int n ,i,sum =0;
    cout << "Input the value for nth term" << endl;
    cin >> n;
    for ( i =1; i <=n;i++)
    {
        sum = sum +i*i;
         cout << i << "*" << i << " = " << i * i << endl;
    }
    cout << "The sum of the series is " << sum<< endl;

}