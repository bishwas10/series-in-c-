/*Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n. Go to the editor
Sample Output:
Input the value for nth term: 5
1/1^1 = 1
1/2^2 = 0.25
1/3^3 = 0.037037
1/4^4 = 0.00390625
1/5^5 = 0.00032
The sum of the above series is: 1.29126 */
#include <iostream>
using namespace std;
int main()
{
    int n , i ;
    float sum ;
    cout << "Input the value for nth term" << endl;
    cin >> n;
    for (i = 1 ; i <=n;i++)
    {
        sum = sum + 1.00/(i*i);
    }
    cout << "The sum of series is " << sum << endl;

    return 0;
}
