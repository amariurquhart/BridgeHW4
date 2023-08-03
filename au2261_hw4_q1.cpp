#include <iostream>
using namespace std; 

main() {

    cout << "section a" << endl;

    int n, evenNumber;
    evenNumber = 0;

    cout << "Please enter a positive integer: ";
    cin >> n;

    while (n-- > 0)
    {
        evenNumber = evenNumber + 2;
        cout << evenNumber << endl;
    }

    cout << "section b" << endl;

    evenNumber = 0;

    cout << "Please enter a positive integer: ";
    cin >> n;

    for (n = n; n > 0; n--)
    {
        evenNumber = evenNumber + 2;
        cout << evenNumber << endl;
    }

    return 0;

}