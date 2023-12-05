// Input Output stream package
#include <iostream>
// Use STD For outputs and Inputs
using namespace std;

// Main Function Using (int)
int main()
{
    // Print Hello World in console and end the line using (endl or \n)
    cout << "Hello World!" << endl;
    cout << "Hello World!"
         << "\n";
    // Print Hello World in console and make 3 spaces using (\t)
    cout << "Hello\tWorld!"
         << "\n";

    /*
    Variables :
    {
        int,
         string
          bool,
           float,
            double,
             char,
    }
    */

    // int for (Numbers)
    int x = 10;
    cout << x << endl;

    // String for (Names)
    string name = "Mohammed";
    cout << "My name is " << name << endl;

    // bool for (true, false) - true = 1, false = 0
    bool success = true;
    cout << "Your answer is " << success << endl;
    bool failed = false;
    cout << "Your answer is " << failed << endl;

    // float for numbers with (.) example (1.2222222) 7 numbers after (.)
    float y = 1.25;
    cout << y << endl;

    // double for numbers with (.) example (1.2222222222222222) 14 numbers after (.)
    double z = 2.25;
    cout << z << endl;
    // char indlude single character/letter/number
    char ac = 'a';
    char an = 1;
    cout << ac << endl;
    cout << an << endl;

    // Cin
    int i;
    // make ask in the console
    cout << "Type Anything: ";
    cin >> i;
    // print the answer in the output
    cout << i << endl;

    // Stop the code
    return 0;
}