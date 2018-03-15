#include <iostream>
#include <string>
using namespace std;

int main () {
string test = "Natasha";

cout << test << endl;
test = "Love";

cout << test << endl;

cout << "The length of test is " << test.length () << endl;

cout << "the 3d char is :" << test [2] << endl;

for (int i=0; i<test.length(); i++) {

cout << "You spell " << test << " with a " << test[i] << endl;
}

cin >> test;

cout << "test is now equal to " << test << endl;

//cout << "First name: " << name << ", Last name: " << copy << endl;

return 0;
}