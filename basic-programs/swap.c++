#include<iostream>
using namespace std;
int main()
{
    int a , b , temp;
    cout << " enter the a";
    cin >> a;
    cout << " enter the b";
    cin >> b;
    temp = a;
    a = b;
    b= temp;
    cout << " a is >" << a << " b  is >" << b;
 return 0;
}