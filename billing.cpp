#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, nationality, citizenship;
    int age;
    double bill;


    cout << "Enter name: ";
    cin>> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter citizenship: ";
    cin >> citizenship;
    cout << "Enter bill amount: ";
    cin >> bill;
cout<<"============================================================================="<<endl;
    if (citizenship == "indian" && age > 18 && age < 40 && bill > 5000){
        cout<<"total bill: "<<bill<<endl;
        cout<<"Discounted price: "<<bill*30/100<<endl;
        cout<<"Final price: "<<bill-bill*30/100<<endl;
    } else if (citizenship == "indian" && age >= 40) {
          cout<<"total bill: "<<bill<<endl;
        cout<<"Discounted price: "<<bill*50/100<<endl;
        cout<<"Final price: "<<bill-bill*50/100<<endl;
    }
    return 0;
    }
