#include<iostream>
#include<string>

using namespace std;

// Teacher class definition
class Teacher {
private:
    string name;
    string department;
    double salary;
    int experience; // in years

public:
    // Method to input teacher details
    void inputDetails() {
        cout << "Enter teacher's name: ";
        getline(cin, name);

        cout << "Enter department: ";
        getline(cin, department);

        cout << "Enter salary: ";
        cin >> salary;

        cout << "Enter years of experience: ";
        cin >> experience;
        cin.ignore(); // To clear input buffer after cin
    }

    // Method to display teacher details
    void displayDetails() const {
        cout << "\n--- Teacher Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Experience: " << experience << " years" << endl;
    }
};

int main() {
    Teacher t;

    t.inputDetails();
    t.displayDetails();

    return 0;
}
