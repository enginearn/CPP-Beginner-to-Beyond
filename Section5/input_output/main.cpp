#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int favorite_number;

    cout << "Enter your favorite number between 1 and 100: ";
    cin >> favorite_number;

    while(cin.fail() || favorite_number < 1 || favorite_number > 100) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a number between 1 and 100: ";
        cin >> favorite_number;
    }

    cout << "Amazing!! That's my favorite number too!" << endl;
    cout << " No really, " << favorite_number << " is my favorite number!" << endl;

    return 0;
}
