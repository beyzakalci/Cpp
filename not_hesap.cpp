#include <iostream>
using namespace std;
int main()
{
	int v, f, ort;
	cout<<"vize notunuzu giriniz:"<<endl;
	cin>>v;
	cout<<"final notunuzu giriniz:"<<endl;
	cin>>f;
	ort=(v*0,6)+(f*0.4)/2;
	if(ort<50)
	{
		cout<<"kaldiniz."<<endl;
	}
	else
	cout<<"geçtiniz.\n ort="<<ort<<endl;
	
	getchar();
	return 0;
}
