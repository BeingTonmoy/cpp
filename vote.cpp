// 2023 Arfan Rahman. American International University-Bangladesh (AIUB) IP LAB TASK 2.
// Email: arfanrahman12@gmail.com | tonnovate.me | Intagram: being.tonmoy
// CODE STARTING HERE.
#include <iostream>
using namespace std;

int age;
int vote;

int main () {
cout<<"Enter your age."<<endl;
cin>>age;

if (age<18) {
   cout<<"You cannot vote!"<<endl;
} else {
    cout<<"YOU CAN VOTE! Select your voter. 1)A 2)B"<<endl;
    cin>>vote;
    switch (vote)
    {
    case 1:
        cout<<"You vote A!"<<endl;
        break;
    case 2:
        cout<<"You vote B!"<<endl;
        break;
    default:
        cout<<"Input is invalid"<<endl;
        break;
    }
}

    return 0;
}
