#include <iostream>
using namespace std;

const int I_VAL = 1;
const int V_VAL = 5;
const int X_VAL = 10;
const int L_VAL = 50;
const int C_VAL = 100;
const int D_VAL = 500;
const int M_VAL = 1000;

main() {

    int decimalValue, currentValue, ICount, VCount, XCount, LCount, CCount, DCount, MCount;

    cout << "Enter decimal number:" << endl;
    cin >> decimalValue;

    ICount = VCount = XCount = LCount = CCount = DCount = MCount = 0;
    currentValue = decimalValue;

    if (currentValue >= M_VAL)
    {
        MCount = (currentValue / M_VAL);
        currentValue = (currentValue % M_VAL);
    }
    if ((currentValue >= D_VAL) && (currentValue < M_VAL))
    {
        DCount = DCount + 1;
        currentValue = (currentValue - D_VAL);
    }
    if ((currentValue >= C_VAL) && (currentValue < D_VAL))
    {
        CCount = (currentValue / C_VAL);
        currentValue = (currentValue % C_VAL);
    }
    if ((currentValue >= L_VAL) && (currentValue < C_VAL))
    {
        LCount = LCount + 1;
        currentValue = (currentValue - L_VAL);
    }
    if ((currentValue >= X_VAL) && (currentValue < L_VAL))
    {
        XCount = (currentValue / X_VAL);
        currentValue = (currentValue % X_VAL);
    }
    if ((currentValue >= V_VAL) && (currentValue < X_VAL))
    {
        VCount = VCount + 1;
        currentValue = (currentValue - V_VAL);
    }
    if ((currentValue >= I_VAL) && (currentValue < V_VAL))
    {
        ICount = (currentValue / I_VAL);
        currentValue = (currentValue % I_VAL);
    }

    cout << decimalValue << " is ";

    while (MCount > 0)
    {
        MCount = MCount - 1;
        cout << "M";
    }
    while (DCount > 0)
    {
        DCount = DCount - 1;
        cout << "D";
    }
    while (CCount > 0)
    {
        CCount = CCount - 1;
        cout << "C";
    }
    while (LCount > 0)
    {
        LCount = LCount - 1;
        cout << "L";
    }
    while (XCount > 0)
    {
        XCount = XCount - 1;
        cout << "X";
    }
    while (VCount > 0)
    {
        VCount = VCount - 1;
        cout << "V";
    }
    while (ICount > 0)
    {
        ICount = ICount - 1;
        cout << "I";
    }

    return 0;

}