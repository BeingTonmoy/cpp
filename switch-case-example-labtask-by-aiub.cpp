// 2023 Arfan Rahman. American International University-Bangladesh (AIUB) IP LAB TASK 2.
// Email: arfanrahman12@gmail.com | tonnovate.me | Intagram: being.tonmoy
// CODE STARTING HERE.
#include <iostream>
#include<cmath> // for mathamatic solution
using namespace std;

int main () {
    int choice;
    int number; 
    float result; //float for decimal output
cout <<"Enter your choice between 1-4" <<endl;
cin>>choice; // user choice input
switch (choice) //case for choice input
{
case 1: // if user input 1 then follwing code will run.
    cout<<"Enter your number"<<endl;
    cin>>number; //user input for number.
    result = number*number; // for square, multiply your variable 2 times.
    cout<<"Answer is " <<result<<endl;
    break;
case 2: // if user input 2 then follwing code will run.
    cout<<"Enter your number"<<endl;
    cin>>number;
    result = number*number*number; // for cube, multiply your variable 3 times.
    cout<<"Cube result is " <<result<<endl;
    break; 
case 3: // if user input 3 then follwing code will run.
    cout<<"Enter your number"<<endl;
    cin>>number;
    result = sqrt(number); //for square-root = sqrt(YOUR_VARIABLE)
    cout<<"Result is "<<result<<endl;
    break;
case 4: // if user input 4 then follwing code will run.
    cout<<"Tankyou. Have a good day";
default:
    break;
}
//If user input number bigger than 0 or O or less than 0 or inputs any keyword, then following outputs will be print.
if(choice>4) {
    cout<<"Choice must be in 1-4"<<endl;
}
if(choice<=0) {
    cout<<"Input must be 1-4"<<endl;
} else {
    cout<<"Error. Input must be 1-4"<<endl;
}
return 0;
}
//END CODE
