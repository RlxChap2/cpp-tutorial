#include <iostream>
using namespace std;

int main()
{
    int x, y;
    char mark; // Change mark to a char type

    cout << "Type a Number: ";
    cin >> x;
    cout << "Type another Number: ";
    cin >> y;
    cout << "Type The Mark To Calculate (+, -, *, /): ";
    cin >> mark; // Read in a character

    int result; // Variable to store the result

    // Use a switch statement to perform the operation based on the mark
    switch (mark)
    {
    case '+':
        result = x + y;
        cout << "Sum is: " << result;
        break;
    case '-':
        result = x - y;
        cout << "Difference is: " << result;
        break;
    case '*':
        result = x * y;
        cout << "Product is: " << result;
        break;
    case '/':
        if (y != 0) // Check for division by zero
        {
            result = x / y;
            cout << "Division result is: " << result;
        }
        else
        {
            cout << "Error: Division by zero!";
        }
        break;
    default:
        cout << "Invalid operation!";
    }

    return 0;
}
