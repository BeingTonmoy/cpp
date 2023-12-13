// 2023 TONNOVATE, developed by Arfan Rahman.
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Functions

//Funtion for user info
void userInfo (string& userName, string& userEmail) {
 cout<<"Enter your full name :"<<endl;
 getline(cin, userName);
 cout<<"Nice to meet you "<<userName<<"! \nPlease enter your email :"<<endl;
 getline(cin, userEmail);
 cout<<"Thanks for giving information!"<<endl;
}
// Function for contacts
    class Contact {
public:
    string name;
    string phoneNumber;

    Contact(string _name, string _phoneNumber) : name(_name), phoneNumber(_phoneNumber) {}
};

class PhoneBook {
private:
    vector<Contact> contacts;

public:
    // Function to add a new contact
    void addContact(string name, string phoneNumber) {
        Contact newContact(name, phoneNumber);
        contacts.push_back(newContact);
        cout << "Contact added successfully!\n";
    }

    // Function to display all contacts
    void displayContacts() {
        if (contacts.empty()) {
            cout << "No contacts available.\n";
        } else {
            cout << "All Contacts:\n";
            for (const auto& contact : contacts) {
                cout << "Name: " << contact.name << "\tPhone Number: " << contact.phoneNumber << endl;
            }
        }
    }
};
//
int main () {
    //Variable Initialize
    string userName;
    string userEmail;
    int menuInput;
    PhoneBook phoneBook;
    string name, phoneNumber;

//Main print codes.
cout<<"=======================\n@2023 TONNOVATE all rights reserved. Bot Version 1.2.\n===============\nWELCOME! What's your name?"<<endl;
 userInfo(userName, userEmail);

// user manu show
do{
 cout<<"### Main Menu (1-4)###"<<endl;
 cout<<"1. Show user info \n2. Add Contacts \n3. View Contacts \n4. Exit program"<<endl;
 cout<<"Enter your input :"<<endl;
 cin>>menuInput;

 switch (menuInput)
 {
 case 1:
    cout<<"##Here is user info##"<<endl;
    cout<<"Full Name: "<<userName<<endl;
    cout<<"Email: "<<userEmail<<endl;
    break;
 case 2:
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Phone Number: ";
    cin >> phoneNumber;
    phoneBook.addContact(name, phoneNumber);
    break;
 case 3:
    phoneBook.displayContacts();
    break;
 case 4:
    cout<<"Quiting program..\n"<<endl;
    break;
 default:
  cout<<"Invalid input! You must enter 1-4 to select. More options will available soon."<<endl;
    break;
 
 }
} while (menuInput != 4);

    return 0;
}
