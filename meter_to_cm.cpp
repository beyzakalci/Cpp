#include <iostream>
#include <algorithm>
using namespace std;

	double metre[]={3.5, 6.2, 1.0, 12.75, 4.33};
	double cm[5];
	double metre_to_cm(double);
	int main()
	{
		transform(metre, metre+5, cm, metre_to_cm);
		int i;
		for(i=0; i<5;i++)
		cout<< metre[i]<<"m = "<<cm[i]<<" cm"<<endl;
		return 0;
}
double metre_to_cm(double m)
	{
	return (m*100);
}

