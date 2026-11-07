### Folosing o variabila auxiliara
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b;
    c=a;
    a=b;
    b=c;
    cout << a << ' ' << b;
}

### Fara a folosi o variabila auxiliara
#include <iostream>
using namespace std;

int main()
{
int a, b;
cin >> a >> b;
a=a+b;
b=a-b;
a=a-b;
cout << a << ' ' << b;
}

### Folosing functia swap
#include <iostream>
using namespace std;

int main()
{
int a, b;
cin >> a >> b;
swap (a, b);
cout << a << " " << b;
}
