#include <iostream>
#include <string>

using namespace std;

class TravelAgency
{
public:
    void welcomeMessage()
    {
        cout << "Welcome to Travel Agency!" << endl;
    }

    void listDestinations()
    {
        cout << "Here are some popular travel destinations:" << endl;
        cout << "1. Goa" << endl;
        cout << "2. Ahmedabad" << endl;
        cout << "3. Mumbai" << endl;
        cout << "4. Ladakh" << endl;
        cout << "5. Jammu and Kashmir" << endl;
        cout << "6. Kedarnath" << endl;
        cout << "7. Badrinath" << endl;
        cout << "8. Jaipur" << endl;
        cout << "9. Udaipur" << endl;
        cout << "10. Haridwar" << endl;
    }
};

class Registration
{
private:
    string name;
    int age;
    string email;
    string contact;
    string password;
    string confirmPassword;

public:
    void askSignUp();

    void takeRegistration()
    {
        cout << "Please enter your registration information:" << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cout << "Email: ";
        cin >> email;
        cout << "Contact: ";
        cin >> contact;
        cout << "Password: ";
        cin >> password;
        cout << "Confirm password: ";
        cin >> confirmPassword;

        if (password != confirmPassword)
        {
            cout << "Passwords do not match. Please try again." << endl;
            takeRegistration();
            return;
        };
        cout << "Registration completed successfully." << endl;
        cout << "=========================================================" << endl;
    }

    string getEmail()
    {
        return email;
    }
    string getPassword() 
    { 
        return password; 
    }
};

class Login
{
public:
    void askLogin(string email, string password)
    {
        string input_email, input_password;
        cout << "Enter login credentials " << endl;
        cout << "Username: ";
        cin >> input_email;
        cout << "Password: ";
        cin >> input_password;

        if (email == input_email && password == input_password)
        {
            cout << "Access on account successful\n";
        }
        else
        {
            cout << "Invalid email or password\n";
            askLogin(email, password);
        }
    }
};

void Registration::askSignUp()
{
    char choice;
    cout << "Do you want to sign up? (y/n): ";
    cin >> choice;
    cout << "===========================================================" << endl;
    if (choice == 'y')
    {
        cout << "Welcome to registration" << endl;
        takeRegistration();
        Login login;
        login.askLogin(getEmail(), getPassword());
        return;
    }
    else
    {
        cout << "Thank you for visiting" << endl;
        return;
    }
}

int main()
{
    TravelAgency agency;
    Registration registration;
    agency.welcomeMessage();
    agency.listDestinations();
    registration.askSignUp();
    return 0;
}