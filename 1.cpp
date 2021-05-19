#include<iostream>

using namespace std;

int main()

{
int x=10,y;
y=3;
cout << "x+y=" << x+y;
cout << "\n x-y=" << x-y;
cout << "\n x*y=" << x*y;
cout << "\n x/y=" << x/y;
cout << "\n x%y=" << x%y;
cout << "\n x++=" << ++x;
cout << "\n y--=" << --y;
cout << "\n x++=" << x++;
cout << "\n x=" << x;
///////////////////////////
cout << "\n x=x+3 =>" << (x=x+3);
cout << "\n x+=3 =>" << (x+=3);
cout << "\n x=x-3 =>" << (x-=3);
cout << "\n x=x*3 =>" << (x*=3);
cout << "\n x/=3 =>" << (x/=3);
cout << "\n x%=3 =>" << (x%=3);

return 0;
}
