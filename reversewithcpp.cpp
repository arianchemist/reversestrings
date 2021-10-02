#include <iostream>

using namespace std;

int main()
{
    string lae[5];
    for (int gu = 0 ; gu < 5 ; gu++)
    {
        cout << "enter members ::  ";
        cin >> lae[gu];
    }
    cout << "normal array = " << lae[0] << lae[1] << lae[2] << lae[3] << lae[4] << endl;
    cout << "reversed array = " << lae[4] << lae[3] << lae[2] << lae[1] << lae[0];
    return 0;
}