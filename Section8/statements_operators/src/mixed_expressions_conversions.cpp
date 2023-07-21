#include <iostream>

using namespace std;

int main()
{
    int total_amount {100};
    int total_number {8};
    double average {0.0};

    average = total_amount / total_number;
    cout << average << endl;

    average = static_cast<double>(total_amount) / total_number;
    cout << average << endl;

    average = static_cast<double>(total_amount / total_number);
    cout << average << endl;

    average = static_cast<double>(total_amount) / static_cast<double>(total_number);
    cout << average << endl;

    int total {};
    int number1 {}, number2 {}, number3 {};
    const int count {3};

    cout << "Enter 3 integers separated by spaces: ";
    cin >> number1 >> number2 >> number3;

    total = number1 + number2 + number3;
    average = static_cast<double>(total) / count;

    cout << "The 3 numbers were: " << number1 << ", " << number2 << ", " << number3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << average << endl;

    return 0;
}
