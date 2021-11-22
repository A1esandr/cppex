#include <iostream>
#include <string>

using namespace std;

int main()
{
   // Create a string variable
   string greeting = "Hello";

   // Output string value
   cout << greeting << endl;

   string firstName = "John ";
   string lastName = "Doe";
   string fullName = firstName.append(lastName);
   cout << fullName;
}
