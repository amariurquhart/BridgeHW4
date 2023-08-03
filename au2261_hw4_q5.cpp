#include <iostream>
using namespace std;

main() {

    int userInput, userInputX2, temp, temp2, n, nX2;

    cout << "Please enter a positive integer to create an hourglass" << endl;
    cin >> userInput;

    userInputX2 = ((userInput * 2) - 1);
    temp = userInputX2;
    n = userInput;

    while(n > 0) {
        temp2 = (userInput - n);
        while(temp2 > 0) {
            cout << " ";
            temp2--;
        }
        n--;
        nX2 = userInputX2;
        while(nX2 > 0) {
            cout << "*";
            nX2--;
        }
        cout << endl;
        userInputX2 -= 2;
    }

    userInputX2 = 1;

    while(userInputX2 <= temp) {
        nX2 = 0;
        temp2 = (temp - userInputX2)/2;
        while(temp2 > 0) {
            cout << " ";
            temp2--;
        }
        while(nX2 < userInputX2) {
            cout << "*";
            nX2++;
        }
        cout << endl;
        userInputX2 += 2;
    }

    return 0;
}