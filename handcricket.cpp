#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    string name  ;
    int round, number, randomNumber, run1 = 0, run2 = 0,age;

    cout << "WELCOME TO HAND CRICKET" << endl;
    cout << "ENTER YOUR NAME: ";
    getline(cin, name);
    cout<<"ENTER YOUR AGE"<<endl;
    cin>>age;
    cout << "ENTER NUMBER OF ROUNDS: ";
    cin >> round;

    srand(time(0));  

    for (int i = 1; i <= round; i++) {
        cout << "ENTER YOUR NUMBER : ";
        cin >> number;

        
        randomNumber = rand() % 6 + 1;
        cout << "YOUR OPPONENT NUMBER IS: " << randomNumber << endl;

        if (number < 1 || number > 6) {
            cout << "PLEASE CHOOSE BETWEEN 1 AND 6." << endl;
            continue;
        }

        if (number == randomNumber) {
            cout << "YOU ARE OUT" << endl;
            break;
        } 
        else if (number > randomNumber) {
            run1++;  
        } 
        else {
            run2++;  
        }
    }

    
    if (run1 > run2) {
        cout << "HURRAY, YOU WIN" << endl;
    } 
    else if (run1 < run2) {
        cout << "YOU LOSE" << endl;
    } 
    else {
        cout << "MATCH IS DRAW " << endl;
    }

    return 0;
}
