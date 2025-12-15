
#include <iostream>
#include <string>   // Always include <string> when using std::string
using namespace std;

int main() {
    string name;
    int roll, marks;

    // Use getline for name so multi-word names are allowed
    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter roll number: ";
    cin >> roll;

    cout << "Enter marks: ";
    cin >> marks;

    // Validate marks (0–100)
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks entered!" << endl;
        return 1; // Exit program with error
    }

    // Grade calculation
    char grade = (marks >= 80 ? 'A' : (marks >= 60 ? 'B' : 'C'));

    // Output
    cout << "\n--- Student Report ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
