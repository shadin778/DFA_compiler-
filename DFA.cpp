#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    int state = 0;

    for (char ch : input) {
        switch (state) {
            case 0:
                if (ch == 'b') state = 0;
                else if (ch == 'a') state = 1;
                else state = 7;
                break;

            case 1:
                if (ch == 'a') state = 2;
                else if (ch == 'b') state = 3;
                else state = 7;
                break;

            case 2:
                if (ch == 'a') state = 2;
                else if (ch == 'b') state = 3;
                else state = 7;
                break;

            case 3:
                if (ch == 'a') state = 4;
                else state = 7;
                break;

            case 4:
                if (ch == 'a') state = 5;
                else if (ch == 'b') state = 6;
                else state = 7;
                break;

            case 5:
                if (ch == 'a') state = 2;
                else if (ch == 'b') state = 3;
                else state = 7;
                break;

            case 6:
                if (ch == 'a') state = 2;
                else if (ch == 'b') state = 3;
                else state = 7;
                break;

            default:
                state = 7;
        }
    }

    if (state == 1 || state == 2 || state == 5 || state == 6)
        cout << "ACCEPTED";
    else
        cout << "REJECTED";

    return 0;
}
