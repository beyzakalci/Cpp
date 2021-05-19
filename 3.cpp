#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
char *names[]={"Ahmet","Tugran","Hanife","Selami","Büþra","Ramazan"};

bool karsilastir(char *, char *);
int main()
{
	int i;
	sort(names, names + 6, karsilastir);
	for(i=0;i<6;i++)
		cout<<names[i]<<endl;
		return 0;
}

bool karsilastir(char *s1, char *s2)
{
	return (strcmp(s1,s2)<0) ? true: false;
}
