#include<iostream>
using namespace std;

class Bird{
	public:
		
		string fn,ln;
		
		void input(string fname, string lname){
		fn=fname;
		ln=lname;	
		}
		void display()
		{
			cout<<"your full name: "<<fn<<" "<<ln;
		}
};
int main(){
	
	Bird duck;
	
	string name1,name2;
	
	cout<<"Enter your first name: ";
	cin>>name1;
	
	cout<<"Enter your last name: ";
	cin>>name2;
	
	duck.input(name1,name2);
	cout<<endl;
	duck.display();
}
