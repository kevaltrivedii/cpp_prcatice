#include<iostream>
using namespace std;
class bird
{
	public:
	int a=12,b=45;
	
	void display()
	{
		cout<<"addition: "<<a+b;
	}
};

int main(){
	bird duck;
	cout<<"Value or class member: "<<duck.a<<endl;
	cout<<"Value or class member: "<<duck.b<<endl;
	duck.display();
	return 0; 
}
