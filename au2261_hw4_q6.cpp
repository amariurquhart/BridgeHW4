#include <iostream>
using namespace std;

main() {

    int n, temp, temp2, oddDigits, evenDigits, currentDigit;

    cout << "Enter a positive integer: " << endl;
    cin >> n;

    for (temp = 0; temp <= n; temp++) {
        temp2 = temp;
        evenDigits = 0;
        oddDigits = 0;
        while(temp2 > 0) {
            currentDigit = temp2 % 10;
            if ((currentDigit % 2) == 0) {
                evenDigits++;
                temp2 = temp2 / 10;
            }
            else if ((currentDigit % 2) == 1) {
                oddDigits++;
                temp2 = temp2 / 10;
            }
        }
        if (evenDigits > oddDigits)
            cout << temp << endl;
    }

    return 0;
    
}