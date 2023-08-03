#include <iostream>
#include <cmath>
using namespace std;

main() {

    cout << "section a" << endl;

    int sequenceLength,  number;
    double sequenceMean, sequenceTotal, sequenceRoot, sequenceFullLength;

    cout << "Please enter the length of the sequence: ";
    cin >> sequenceLength;
    cout << "Please enter your sequence:" << endl;

    sequenceTotal = 1;
    sequenceFullLength = sequenceLength;

    while(sequenceLength > 0) {
        cin >> number;
        sequenceTotal *= number;
        sequenceLength--;
    }

    sequenceRoot = (1 / sequenceFullLength);
    sequenceMean = pow(sequenceTotal, sequenceRoot);

    cout << "The geometric mean is: " << sequenceMean << endl;

    cout << "section b" << endl;

    sequenceTotal = 1;
    sequenceLength = 0;

    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: " << endl;
    
    while(sequenceLength >= 0) {
        cin >> number;
        if(number == -1)
            break;
        else {
            sequenceTotal *= number;
            sequenceLength++;
        }
    }

    sequenceFullLength = sequenceLength;
    sequenceRoot = (1 / sequenceFullLength);
    sequenceMean = pow(sequenceTotal, sequenceRoot);

    cout << "The geometric mean is: " << sequenceMean << endl;

    return 0;

}