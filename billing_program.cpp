#include<iostream>

using namespace std;

int main() 
{
	cout << "Hello ,welcome to carpet cleaning service !" << endl;
	cout << "\nhow many rooms would you liked to be cleaned?";

	int number_of_rooms(0);
	cin >> number_of_rooms;

		cout << "\n Estimate for carpet cleaning service" << endl;
		cout << "Number of rooms :" << number_of_rooms << endl;
		cout<< "Price per room:$" << 30 << endl;
		cout << "cost:$" << 30 * number_of_rooms << endl;
		cout << "tax:$" << 30 * number_of_rooms * 0.06 << endl;
		cout <<"==========================================================" << endl;
		cout << "Total estimate:$" << (30 * number_of_rooms) + (30 * number_of_rooms * 0.06) << endl;
		cout << "This estimate is valid for" << 30 << "days" << endl;

		cout << endl;
		return 0;


}   