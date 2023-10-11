#include <iostream>
#include <fstream> // Include the header for file operations. Required for read and write files.
#include <curl/curl.h> // For making HTTP requests
using namespace std;

// 2023 TONNOVATE Software Development, code by Arfan Rahman Tonmoy. Visit www.tonnovate.me for more.
// Arfan Rahman - CSE in AIUB (23-51598-2). Follow on Instagram ig/being.tonmoy.
// This code build is for run a bot to answer your questions and do some task for user.
// CODE STARTS FROM HERE.
int main() {
    string name; // user name string type
    string email; // user email string type
    string phonenumber; // user phonenumber string type
    string response; //user input and response string type
    string menu; // for menu input
    double userhight; // 

    cout << "Greetings! I am a bot. What's your name?" << endl; // ask name
    getline(cin, name); // input for name

    cout << "Hello " << name << ". Nice to meet you! What's your email?" << endl; // ask email
    getline(cin, email); // input for email

    cout << "Now give me your phone number." << endl; // ask phone number
    getline(cin, phonenumber); // input for phone number

    cout << "Your email " << email << " and phone number " << phonenumber << " have been confirmed!" << endl; // input confirmation msg

    cout << "Do you want to ask me anything?" << endl; // collect response from user for string 'response'
    getline(cin, response); // get response data from user
    // user reponse and bot response question bank.
    // question 1
    if (response == "How are you?") {
        cout << "I am fine!" << endl;
    // question 2
    } else if (response == "Tell me about yourself.") {
        cout << "I am a bot developed in C++. Author is Arfan Rahman Tonmoy." << endl;
    // question 3
    } else if (response == "What is my name?") {
        cout << "Your name is " << name << endl;
    // question 4
    } else if (response == "system info") {
        cout << "BOT by TONNOVATE v1.0. Created by Arfan Rahman Rahman. C++ developed in VS Code. FREE OPEN SOURCE PROJECT." << endl;
    // menu question 5 and services
    // menu start
    } else if (response == "show service menu") {
        cout << "Here is the menu  =>> 1)save response 2)bmi check 3)exit" << endl; // list of display orders
        getline(cin, menu); // user selection (must input 1-9 in order to navigate menu)
        //if user select option 2 (its a exit.)
        if (menu == "2") { 
            cout <<"What is your hight? (in cm)" <<endl; //ask user hight
            cin>>userhight;
            cout <<"What is your weight? (in kg)" <<endl; // ask user weight
            if (userhight<=150) { 
                cout <<"You are too short" <<endl; // define if hight is short
            }
            else {
                cout <<"Your hight is perfect" <<endl;
            }
        } else if (menu == "1") {
            // Specify the file name
        string fileName = "file.txt"; // you can rename 'file.txt'. (eg. example.txt)

        // Open the file for writing
        ofstream outFile(fileName);

        if (outFile.is_open()) {
            // Write user input to the file
            outFile << "Name: " << name << endl; // OUTPIUT to file.txt
            outFile << "Email: " << email << endl; // OUTPUT to file.txt
            outFile << "Phone Number: " << phonenumber << endl; // OUTPUT to file.txt

            // Close the file
            outFile.close();

            cout << "Data saved to " << fileName << " successfully." << endl;
        } else {
            cout << "Failed to open the file for writing. Please make sure there is a file.txt present where bot.cpp placed." << endl;
        }
        }
    //end of menu section
    // question 6 and task for saving data. All user data will be saved to file.txt
    } // END 1
     else if (response == "save my input data") {
        // Specify the file name
        string fileName = "file.txt";

        // Open the file for writing
        ofstream outFile(fileName);

        if (outFile.is_open()) {
            // Write user input to the file
            outFile << "Name: " << name << endl;
            outFile << "Email: " << email << endl;
            outFile << "Phone Number: " << phonenumber << endl;

            // Close the file
            outFile.close();

            cout << "Data saved to " << fileName << " successfully." << endl;
        } else {
            cout << "Failed to open the file for writing. Please make sure there is a file.txt present where bot.cpp placed." << endl;
        }
    } else {
        cout << "I don't understand that question." << endl;
    }

    return 0;
}
