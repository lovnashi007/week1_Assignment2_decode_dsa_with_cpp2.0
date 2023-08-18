/*Find the output for this code. Let input:- 3 2*/

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter first number\n";
    cin >> x; // user will give 'x' a value. x=3
    int y;
    cout << "Enter second number\n";
    cin >> y; // user will give 'y' a value. y=2
    cout << (x != y) << " " << (x >= y);//(3!=2) which is true so here 1 will be printed. and 3>=2 is also true then here also 1 will be printed so output is 1 1.
    return 0;
}