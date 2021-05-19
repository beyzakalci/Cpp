#include <iostream>
#include <algorithm>
using namespace std;
int dizi[]={33, 22, 33, 44, 108, 33, -17, 88 };
int main()
{
	//sort(baþlangýç, bitiþ)
	int i;
	sort(dizi,dizi+8);
	for(i=0;i<8;i++)
	cout<<dizi[i]<<" ";


return 0;
}
