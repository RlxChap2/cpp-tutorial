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
    cout << "Type Anything: " << endl;
    cin >> i;
    // print the answer in the output
    cout << i << endl;

    // Use the if statement to specify a block of C++ code to be executed if a condition is true or Comparing two numbers
    int v = 20;
    int w = 18;
    if (v > w)
    {
        cout << "x is greater than y" << endl;
    }

    // Use the else statement to specify a block of code to be executed if the condition is false.
    int time = 20;
    if (time < 18)
    {
        cout << "Good day." << endl;
    }
    else
    {
        cout << "Good evening." << endl;
    }
    // Outputs "Good evening."

    // Use the else if statement to specify a new condition if the first condition is false.
    int time2 = 22;
    if (time2 < 10)
    {
        cout << "Good morning." << endl;
    }
    else if (time2 < 20)
    {
        cout << "Good day." << endl;
    }
    else
    {
        cout << "Good evening." << endl;
    }
    // Outputs "Good evening."

    // There is also a short-hand if else, which is known as the ternary operator because it consists of three operands.
    // It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:
    int time3 = 20;
    string result = (time3 < 18) ? "Good day." : "Good evening.";
    cout << result;

    // The example below will print the numbers 0 to 4:
    for (int k; k < 5; k++)
    {
        cout << k << "\n";
    }

    // The example below will print the numbers 0 to 5:
    for (int j; j <= 5; j++)
    {
        cout << j << "\n";
    }

    // Continue -> https://www.w3schools.com/cpp/cpp_break.asp

    // The break statement can also be used to jump out of a loop.
    for (int v; v < 10; v++)
    {
        // This example jumps out of the loop when i is equal to 4:
        if (v == 4)
        {
            break;
        }
        cout << v << "\n";
    }

    // The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.
    for (int q; q < 10; q++)
    {
        //  This example skips the value of 4:
        if (q == 4)
        {
            continue;
        }
        cout << q << "\n";
    }

    // Stop the code
    return 0;
}