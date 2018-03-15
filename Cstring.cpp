#include <iostream>
#include <cstring>
using namespace std;

int main () {
char name[8] = "Natasha";
char last [8] = "Love";
char copy [8];

strncpy (copy, last, 2);
cout << "First name: " << name << ", Last name: " << copy << endl;

return 0;
}