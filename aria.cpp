#include <iostream>
#include <cmath>
using namespace std;

int main()
{
float a, b, c, p, aria;
cin >> a >> b >> c;
p=(a+b+c) / 2;
aria=sqrt(p*(p-a)*(p-b)*(p-c));
cout << aria;
}
