#include <iostream>
using namespace std;
const float pi=3.14;
class daire{

	public:
		daire();
		~daire();
		float alan(float r);
		
};
daire::daire()
{
	cout<<"yapici olusturuldu."<<endl;
	
}
daire::~daire()
{
	cout<<"yikim basarili."<<endl;
}
float daire::alan(float r)
{
	float alan;
	alan=(r*r)*pi;
	return alan;
}
int main()
{
	daire d1;
	float r;
	cout<<"yaricapi giriniz:"<<endl;
	cin>>r;
	cout<<"alan="<<d1.alan(r)<<endl;
	return 0;
}
