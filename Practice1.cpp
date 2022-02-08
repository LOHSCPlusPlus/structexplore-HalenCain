#include <iostream>
using namespace std;

// Put the person struct here

struct Person {
  string firstName;
  string secondName;
};




int main() {
	// Create two instances of person here, and assign the names.
  Person a;
  a.firstName = "Dorian";
  a.secondName = "Gray";

  Person b;
  b.firstName = "Charlie";
  b.secondName = "Brown";

  cout << "Person a's first name: " << a.firstName << endl;
  cout << "Person a's second name: " << a.secondName << endl;
  cout << "Person b's first name: " << b.firstName << endl;
  cout << "Person b's second name: " << b.secondName << endl;
  




	// Add the prints here




	return 0;
}
