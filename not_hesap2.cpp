#include<iostream>

using namespace std;

int main()
{
	float durum,final,vize;
	cout<<"final notunuzu giriniz:";
	cin>>final;
	cout<<"vize notunuzu giriniz:";
	cin>>vize;
	
	if((vize>=0 && vize<=100) && (final>=0 && final<=100))
	{
	durum=(final*0.6)+(vize*0.4);
	if(durum>=50)
	cout << "Gectiniz.";
	else
	cout<< "Kaldiniz.";
}
	else 
	cout << "Vize ve final notlari 0-100 araliginda olmali";
	return 0;
	

	
}
