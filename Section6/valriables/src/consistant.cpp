#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double pi = 3.1415926535;

    cout << "6 decimal: " << pi << endl;
    cout << "12 decimal: " << fixed << pi << endl;
    cout << "4 decimal: " << setprecision(4) << pi << endl;
    cout << "4 decimal: " << setprecision(9) << pi << endl;

    cout << "Hello, welcome to Frank's Carpet Cleaning Service\n"
         << endl;
    cout << "How many rooms would you like cleaned? ";

    int number_of_rooms{0};
    cin >> number_of_rooms;

    const double price_per_room{30.0};
    const double sales_tax{0.06};
    const int estimate_expiry{30}; // days

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << fixed << setprecision(2) << price_per_room << endl;
    cout << "Cost: $" << fixed << setprecision(2) << price_per_room * number_of_rooms << endl;
    cout << "Tax: $" << fixed << setprecision(2) << price_per_room * number_of_rooms * sales_tax << endl;
    cout << "=====================================" << endl;
    cout << "Total estimate: $" << fixed << setprecision(2) << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

    cout << endl;

    return 0;
}
