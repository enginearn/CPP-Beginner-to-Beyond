#include <iostream>

using namespace std;

int main()
{
    int num1{0}, num2{0};

    cout << boolalpha;

    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;

    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;

    int num3 = 5;
    int num4 = 10;

    auto result = num3 <=> num4;

    cout << num3 << " <=> " << num4 << " : ";

    if (result < 0) {
        cout << "num3 is less than num4";
    } else if (result == 0) {
        cout << "num3 is equal to num4";
    } else {
        cout << "num3 is greater than num4";
    }

    cout << endl;

    const int lower{10}, upper{20};

    cout << "\nEnter an integer that is greater than " << lower << " : ";
    cin >> num1;

    cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;
    cout << num1 << " <= " << upper << " is " << (num1 <= upper) << endl;

    cout << "\nEnter an integer between " << lower << " and " << upper << " inclusive: ";
    cin >> num1;

    cout << num1 << " >= " << lower << " and " << num1 << " <= " << upper << " is " << (num1 >= lower && num1 <= upper) << endl;

    cout << "\nEnter an integer that is outside " << lower << " and " << upper << " inclusive: ";
    cin >> num1;

    cout << num1 << " < " << lower << " or " << num1 << " > " << upper << " is " << (num1 < lower || num1 > upper) << endl;

    cout << "\nBoolean not operator on " << num1 << " > " << lower << " is " << !(num1 > lower) << endl;

    cout << endl;
    return 0;
}
