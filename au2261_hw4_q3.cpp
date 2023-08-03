#include <iostream>
#include <cmath>
using namespace std;

main() {

    int userEntry, n, npow, binaryNum, binaryVal;

    n = 0;

    cout << "Enter decimal number:" << endl;
    cin >> userEntry;
    cout << "The binary representation of " << userEntry << " is ";

    binaryNum = userEntry;

    while (binaryNum > 0)
    {
        binaryNum = binaryNum / 2;
        n++;
    }
    while (n > 0)
    {
        npow = pow(2, n-1);
        if (userEntry >= npow) {
            binaryVal = 1;
            userEntry = (userEntry - npow); 
        }
        else if (userEntry < npow) {
            binaryVal = 0;
        }
        n--;
        cout << binaryVal;
    }

    return 0;
}