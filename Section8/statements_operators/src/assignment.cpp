#include <iostream>

using namespace std;

int main()
{
    int num1 = {10};
    int num2 = {20};

    num1 = num2 = 1000;

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    int result = {0};

    result = num1 + num2;

    cout << "result is " << result << endl;

    result = num1 - num2;

    cout << "result is " << result << endl;

    result = num1 * num2;

    cout << "result is " << result << endl;

    result = num1 / num2;

    cout << "result is " << result << endl;

    result = num1 % num2;

    cout << "result is " << result << endl;

    num1 = 10;

    num1 += 100;

    cout << "num1 is " << num1 << endl;

    num1 -= 100;

    cout << "num1 is " << num1 << endl;

    num1 *= 100;

    cout << "num1 is " << num1 << endl;

    num1 /= 100;

    cout << "num1 is " << num1 << endl;

    num1 %= 100;

    cout << "num1 is " << num1 << endl;

    num1 = 10;

    num1++;

    cout << "num1 is " << num1 << endl;

    num1--;

    cout << "num1 is " << num1 << endl;

    num1 = 10;

    // q: why num2 is 11?
    // a: ++num1 is pre increment, so num1 = num1 + 1, then num2 = num1
    num2 = ++num1;

    cout << "num1 is " << num1 << endl;

    cout << "num2 is " << num2 << endl;

    num1 = 10;

    // q: why num2 is 10?
    // a: num1++ is post increment, so num2 = num1, then num1 = num1 + 1
    num2 = num1++;

    cout << "num1 is " << num1 << endl;

    cout << "num2 is " << num2 << endl;

    num1 = 10;

    num2 = --num1;

    cout << "num1 is " << num1 << endl;

    cout << "num2 is " << num2 << endl;

    num1 = 10;

    num2 = num1--;

    cout << "num1 is " << num1 << endl;

    cout << "num2 is " << num2 << endl;

    return 0;
}
