#include <iostream>
using namespace std;

main() {

    int userEntry, nx, ny, temp2;

    cout << "Please enter a positive integer:" << endl;
    cin >> userEntry;
    
    for (ny = 1; ny <= userEntry; ny++) {
        for (nx = 1; nx <= userEntry; nx++) {
            temp2 = (nx * ny);
            cout << temp2 << "    ";
            }
        cout << endl;
        }

    return 0;

}