#include <iostream>
#include <cmath>
using namespace std;

main() {

    int sequenceLength, sequenceFullLength, sequenceTotal, number;
    double sequenceMean, sequenceDouble, sequenceRoot;

    cout << "Please enter the length of the sequence: ";
    cin >> sequenceFullLength;
    cout << "Please enter your sequence:";

    sequenceTotal = 0;
    sequenceLength = sequenceFullLength;
    

    for(sequenceLength = sequenceFullLength; sequenceLength > 0; sequenceLength--) {
        cin >> number;
        if (sequenceLength == sequenceFullLength)
            sequenceTotal = number;
        else if (sequenceLength < sequenceFullLength)
            sequenceTotal = (number * sequenceTotal);
    }

    sequenceDouble = sequenceTotal;
    sequenceRoot = (1 / sequenceFullLength);
    sequenceMean = pow(sequenceDouble, sequenceRoot);

    cout << "The geometric mean is: " << sequenceMean;

    return 0;

}