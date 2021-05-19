#include<iostream>

using namespace std;

int main()
{
	float not1;
	cout << "Notunuzu giriniz:";
	cin >> not1;
	if (not1>=0 && not1<=39)
	cout << "Harf notunuz 'F'.";
	else if
	(not1>=40 && not1<=49)
	cout << "Harf notunuz 'E'.";
	else if
	(not1>=50 && not1<=59)
	cout << "Harf notunuz 'D'.";
	else if
	(not1>=60 && not1<=69)
	cout << "Harf notunuz 'C'.";
	else if
	(not1>=70 && not1<=84)
	cout << "Harf notunuz 'B'.";
	else if
	(not1>=85 && not1<=100)
	cout << "Harf notunuz 'A'.";
	
	return 0;
	

	
}
