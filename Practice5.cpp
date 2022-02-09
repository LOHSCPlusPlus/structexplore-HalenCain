#include <iostream>
using namespace std;

// Put the person struct here

struct Person {
  string firstName;
  string secondName;
  Person();
  Person(string INfirstName, string INsecondName);
};
Person::Person() {
  firstName = "unknown";
  secondName = "unkown";
}
Person::Person(string INfirstName, string INsecondName){
  firstName = INfirstName;
  secondName = INsecondName;
}


void printPerson(Person p){
  cout << "First Name: " << p.firstName;
  cout << "Last Name: " << p.secondName;
}

int main() {
	// Create two instances of person here, and assign the names.
  Person a;
  a.firstName = "Dorian";
  a.secondName = "Gray";

  Person b("Linus", "Van Pelt");    
  printPerson(a);
  printPerson(b);
  




	// Add the prints here




	return 0;
}
