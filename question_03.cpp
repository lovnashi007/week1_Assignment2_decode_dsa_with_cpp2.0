/*Find the output for this code. Let input:- 2 3*/

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;// user will give the value of x and y and in question value is given x=2 and y=3;
    x += y;// this statement means x=x+y =>x=2+3=> x=5;

    x -= y;// this statement means x = x-y => x=5-3=>x=2;

    x %= y;// this statement means x=x%y  =>  x = 2%3  =>  x=2;

    cout << x; // x will  be printed here . and x=2 so output is 2

    return 0;
}