/*
In this code, we will get a text from user and then we will write it character
by character to see where are ; characters. Then we will write substrings
according to ; characters. Purpuse of the code: To learn how to use string
functions.

Developed by = Barış Someroğlu
Date = 27.06.2024 - 01:00 am
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string Text;
    int Counter = 0;

    cout << "Please Enter a Text (instead of space use ;) = ";
    cin >> Text;

    cout << "\n";

    // We will write a loop to see where are ; characters
    for (int i = 0; i < Text.length(); i++) {
        cout << "Char at " << i << ". index = " << Text.at(i) << endl;
    }

    cout << "\n";

    cout << "Space at:" << endl;

    // We will write a loop to see count of ; characters
    for (int i = 0; i < Text.length(); i++) {
        if (Text[i] == ';') {
            cout << i << endl;
            Counter++;
        }
    }

    cout << "\n";

    // We will write a loop to see substrings according to ; characters
    for (int i = 1; i <= Counter; i++) {
        cout << i << ". substr = " << Text.substr(0, Text.find(';')) << endl;
        Text = Text.substr(Text.find(';') + 1);
    }

    // Remaining part after last semicolon
    if (!Text.empty()) {
        cout << Counter + 1 << ". substr = " << Text << endl;
    }

    return 0;
}
