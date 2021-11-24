#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World" << endl;

    int myNum;
    myNum = 15;
    cout << myNum << endl;

    int myAge = 35;
    cout << "I am " << myAge << " years old." << endl;

    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << sum << endl;

    int x1 = 5, y1 = 6, z = 50;
    cout << x1 + y1 + z << endl;

    char a = 65, b = 66, c = 67;
    cout << a;
    cout << b;
    cout << c << endl;

    string food = "Pizza";

    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    cout << *ptr << "\n";

    // Output the new value of the food variable (Hamburger)
    cout << food << "\n";
}
