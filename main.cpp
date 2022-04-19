#include <iostream>

using namespace std;

int main() {
    char name[20];
    char greeting[50];

    cout << "Enter Name: " << endl;
    gets(name);
    cout << "Hello choose a greeting: " << endl;
    gets(greeting);

    cout << "Hello!";
    cout << " "  << name;
    cout << " " << greeting;


    return 0;
}
