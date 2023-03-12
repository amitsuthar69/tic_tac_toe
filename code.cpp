#include <bits/stdc++.h>
using namespace std;

char s[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void printTable()
{
    cout << "       |       |       \n";
    cout << "   " << s[0] << "   |   " << s[1] << "   |   " << s[2] << "   \n";
    cout << "_______|_______|_______\n";
    cout << "       |       |       \n";
    cout << "   " << s[3] << "   |   " << s[4] << "   |   " << s[5] << "   \n";
    cout << "_______|_______|_______\n";
    cout << "       |       |       \n";
    cout << "   " << s[6] << "   |   " << s[7] << "   |   " << s[8] << "   \n";
    cout << "       |       |       \n";
}

int main()
{
    system("cls");
    cout << "\n ---> TIC TAC TOE <---\n\n";
    printTable();
    return 0;
}
