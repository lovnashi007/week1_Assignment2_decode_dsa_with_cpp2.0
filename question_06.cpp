/*Find the output of the below code*/

#include <iostream>
using namespace std;
int main()
{
    int i = (4 + 7 / 5 * 6 * 6 + 9) % 100; // here firstly parenthesis solved then other in parenthesis firstly '/' and '*' will be solved both have same precidence then they are being solved right to left then '+' after that '%' will be solved. then outpu will be i=49%100=49;
    cout << i; // 49 will be print.
}