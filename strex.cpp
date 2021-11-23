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
   cout << fullName << endl;

   string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   cout << "The length of the txt string is: " << txt.length() << endl;

   string myString = "Hello";
   cout << myString[1] << endl;
   myString[0] = 'J';
   cout << myString << endl;
}
