#include <iostream>

using namespace std;

int main()
{
    int room_width {0};
    cout << "Enter the width of the room: ";
    cin >> room_width;

    int room_length {0};
    cout << "Enter the length of the room: ";
    cin >> room_length;

    cout << "The area of the room is " << room_width * room_length << " square feet." << endl;

    unsigned short int short_var {65535};
    cout << "short_var: " << short_var << endl;

    int counties_represented {65};
    cout << "countries_represented: " << counties_represented << endl;

    long people_in_florida {20610000};
    cout << "people_in_florida: " << people_in_florida << endl;

    long long people_on_earth {7'600'000'000};
    cout << "people_on_earth: " << people_on_earth << endl;

    long long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "distance_to_alpha_centauri: " << distance_to_alpha_centauri << endl;

    float car_payment {401.23};
    cout << "car_payment: " << car_payment << endl;

    double pi {3.14159};
    cout << "pi: " << pi << endl;

    long double large_amount {2.7e120};
    cout << "large_amount: " << large_amount << endl;

    bool game_over {false};
    cout << "game_over: " << game_over << endl;

    char middle_initial {'J'};
    cout << "middle_initial: " << middle_initial << endl;

    string name {"Frank"};
    cout << "name: " << name << endl;

    return 0;

}
