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
    } // Outputs "Good evening."

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

    /*
        There is also a short-hand if else, which is known as the ternary operator because it consists of three operands.
        It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:

    */
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

    // <- Arrays ->

    /*
     To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:
     string cars[4];
    */

    string cars[4] = {"Gta1", "Gta2", "Gta3", "Gta4"};
    int myNumb[3] = {1, 2, 3};

    // This statement accesses the value of the first element in cars:

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[0]; // Outputs Volvo

    // To change the value of a specific element, refer to the index number:

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";
    cout << cars[0];
    // Now outputs Opel instead of Volvo

    /*
        You can loop through the array elements with the for loop.
        The following example outputs all elements in the cars array:
    */

    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++)
    {
        cout << cars[i] << "\n";
    }

    // This example outputs the index of each element together with its value:

    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++)
    {
        cout << i << " = " << cars[i] << "\n";
    }

    // And this example shows how to loop through an array of integers:

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << "\n";
    }

    // There is also a "for-each loop" (introduced in C++ version 11 (2011), which is used exclusively to loop through elements in an array:

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers)
    {
        cout << i << "\n";
    }

    /*
        Get the Size of an Array
        To get the size of an array, you can use the sizeof() operator:
    */

    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers); // Result 20

    /*
    Why did the result show 20 instead of 5, when the array contains 5 elements?
    It is because the sizeof() operator returns the size of a type in bytes.
    You learned from the Data Types chapter that an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.
    To find out how many elements an array has, you have to divide the size of the array by the size of the data type it contains:
    */

    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << getArrayLength; // Result 5

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++)
    {
        cout << myNumbers[i] << "\n";
    }

    /*
    <- Multi-Dimensional Arrays ->

    A multi-dimensional array is an array of arrays.
    To declare a multi-dimensional array, define the variable type,
    specify the name of the array followed by square brackets which specify how many elements the main array has,
    followed by another set of square brackets which indicates how many elements the sub-arrays have:
    */
    string letters[2][4];
    // As with ordinary arrays, you can insert values with an array literal - a comma-separated list inside curly braces. In a multi-dimensional array, each element in an array literal is another array literal.
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};

    /*
        Each set of square brackets in an array declaration adds another dimension to an array. An array like the one above is said to have two dimensions.
        Arrays can have any number of dimensions. The more dimensions an array has, the more complex the code becomes. The following array has three dimensions:
    */

    string letters[2][2][2] = {
        {{"A", "B"},
         {"C", "D"}},
        {{"E", "F"},
         {"G", "H"}}};

    /*
        Access the Elements of a Multi-Dimensional Array
        To access an element of a multi-dimensional array, specify an index number in each of the array's dimensions.
        This statement accesses the value of the element in the first row (0) and third column (2) of the letters array.
    */

    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};

    cout << letters[0][2]; // Outputs "C"

    /*
    <- Change Elements in a Multi-Dimensional Array ->
    To change the value of an element, refer to the index number of the element in each of the dimensions:
    */
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};
    letters[0][0] = "Z";

    cout << letters[0][0]; // Now outputs "Z" instead of "A"

    /*
    <- Loop Through a Multi-Dimensional Array ->
        To loop through a multi-dimensional array, you need one loop for each of the array's dimensions.
        The following example outputs all elements in the letters array:
    */

    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << letters[i][j] << "\n";
        }
    }

    // This example shows how to loop through a three-dimensional array:
    string letters[2][2][2] = {
        {{"A", "B"},
         {"C", "D"}},
        {{"E", "F"},
         {"G", "H"}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << letters[i][j][k] << "\n";
            }
        }
    }

    /*
    Why Multi-Dimensional Arrays?
     Multi-dimensional arrays are great at representing grids. This example shows a practical use for them.
     In the following example we use a multi-dimensional array to represent a small game of Battleship:
    */
    // We put "1" to indicate there is a ship.
    bool ships[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0}};

    // Keep track of how many hits the player has and how many turns they have played in these variables
    int hits = 0;
    int numberOfTurns = 0;

    // Allow the player to keep going until they have hit all four ships
    while (hits < 4)
    {
        int row, column;

        cout << "Selecting coordinates\n";

        // Ask the player for a row
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        // Ask the player for a column
        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        // Check if a ship exists in those coordinates
        if (ships[row][column])
        {
            // If the player hit a ship, remove it by setting the value to zero.
            ships[row][column] = 0;

            // Increase the hit counter
            hits++;

            // Tell the player that they have hit a ship and how many ships are left
            cout << "Hit! " << (4 - hits) << " left.\n\n";
        }
        else
        {
            // Tell the player that they missed
            cout << "Miss\n\n";
        }

        // Count how many turns the player has taken
        numberOfTurns++;
    }

    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns";

    // Stop the code
    return 0;
    /*
    -> All Tutorials in folder /src/examples
    - or W3schools Website: https://www.w3schools.com/cpp/default.asp

    -> All my projects in folder /src/projects
    - https://
    */
}