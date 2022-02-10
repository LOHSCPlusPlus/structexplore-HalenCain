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
  cout << "First Name: " << p.firstName << endl;;
  cout << "Last Name: " << p.secondName << endl;
}

void ChangeLastName(Person &p, string lastName){
  p.secondName = lastName;
}

int main() {
	// Create two instances of person here, and assign the names.
  Person a;
  a.firstName = "Dorian";
  a.secondName = "Gray";

  Person b("Linus", "Van Pelt");    
  printPerson(a);
  printPerson(b);

  ChangeLastName(b, "Torvalds");
  printPerson(b);
  




	// Add the prints here




	return 0;
}
