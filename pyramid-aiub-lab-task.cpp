// 2023 Arfan Rahman. American International University-Bangladesh (AIUB) IP LAB TASK 2.
// Email: arfanrahman12@gmail.com | tonnovate.me | Intagram: being.tonmoy
// CODE STARTING HERE.
#include <iostream>
using namespace std;
int main() {
    int x;
    int number;

         // for piramid code
    cout<<"Input your number";
    cin>>number;
    cout << "Input your number for row use: ";
    cin >> x;
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= x - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 1 * i - 1; k++) {
            cout << " *";
        }
        cout << std::endl;
    }

    return 0;
}
