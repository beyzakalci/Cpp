#include <iostream>
using namespace std;
const int mak=100;

template <class T>
class stack{
	private:
		T dizi[mak];
		int top;
		public:
			stack() {top=-1;}
			void push(T a){ dizi[++top] =a;}
			T pop(){return dizi[top--];}
			void goster(){
				for(int i=0;i<top;i++)
				cout<<dizi[i]<<endl;
			}
};
int main()
{
	stack<float> s1; //stack s1;
	s1.push(111.1F);
	s1.push(222.2F);
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	stack<char> s2;
	s2.push('a');
	s2.push('b');
	/*cout<<s2.pop()<<endl;
	cout<<s1.pop()<<endl;*/
	return 0;
}
