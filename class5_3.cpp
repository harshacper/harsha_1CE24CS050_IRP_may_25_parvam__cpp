#include <iostream>
#include <fstream>
#include <algorithm> // for transform
using namespace std;

class Teacher {
public:
    string tno;
    string tname;
    string tempid;
    string tgender;
    string tdesig;
    string tcity;
    string tstate;
   

    void setTeacher() {
        cout << "Enter teacher no: ";
        cin >> tno;
        cout << "Enter teacher name: ";
        cin.ignore();
        getline(cin, tname);
        cout << "Enter teacher empid: ";
        cin >> tempid;
        cout << "Enter teacher gender (M/F): ";
        cin >> tgender;
        cout << "Enter teacher designation: ";
        cin >> tdesig;
        cout << "Enter city (chikkamanagaluru/Bengaluru/belagavi/Mysuru): ";
        cin >> tcity;
        cout << "Enter state: ";
        cin >> tstate;
    }
    void displayTeacher(ofstream &fout) {
    // Set color based on city
    if (tcity == "chikkamanagaluru")
        fout << " red"; // red
    else if (tcity == "Bengaluru")
        fout << "yellow"; // yellow
    else if (tcity == "belagavi")
        fout << " green";   // green
    else if (tcity == "Mysuru")
        fout << " white";   // white
    else
        fout << "black";   // black

    // Add title based on gender

        string title = (tgender == "M" || tgender == "m") ? "Mr. " : "Mrs. ";

        fout << "  |   " << tno << "  |   " << title << tname << "  |   " << tempid
             << "  |   " << tgender << "  |   " << tdesig << "  |   "
             << tcity << "  |   " << tstate<< endl;
    }
};

int main() {
    ofstream fout("output.txt"); // output file

    // ========== Teacher Information ==========
    int n;
    cout << "Enter number of teachers: ";
    cin >> n;
    Teacher* teachers = new Teacher[n];

    for (int i = 0; i < n; i++) {
        cout << "--------------Enter Teacher " << i + 1 << " Details--------------" << endl;
        teachers[i].setTeacher();
    }

    fout << "\nAll Teachers:\n";
    fout << "  |   tno  |   tname  |   tempid  |   tgender  |   tdesig  |   tcity  |   tstate  \n";
    for (int i = 0; i < n; i++) {
        teachers[i].displayTeacher(fout);
    }

    fout << "\nTeachers with names containing 'ar':\n";
    fout << "  |   tno  |   tname  |   tempid  |   tgender  |   tdesig  |   tcity  |   tstate \n";
    for (int i = 0; i < n; i++) {
        string nameLower = teachers[i].tname;
        transform(nameLower.begin(), nameLower.end(), nameLower.begin(), ::tolower);

        if (nameLower.find("ar") != string::npos) {
            teachers[i].displayTeacher(fout);
        }
    }

    // Clean up
    delete[] teachers;
    fout.close();

    cout << "\nAll output saved to 'output.txt'\n";

    return 0;
}
