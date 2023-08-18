/*Find the output for this code. Let input:- 2 3 6 */
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter first number\n";
    cin >> x; // user will give ‘x’ a value.
    int y, m;
    cout << "Enter second number and value for taking modulus\n";
    cin >> y >> m;       // user will give ‘y’ and 'm' value.
    int Z = (x * y) % m; // '*' and '%' have same precedence so precendence will decide by moving right to left,so firstly multiply x and y and then modulo operator will resolve the problem so Z = (2*3)%6=6%6=0

    cout << "Output is: " << Z; // here Z = 0
    return 0;
}