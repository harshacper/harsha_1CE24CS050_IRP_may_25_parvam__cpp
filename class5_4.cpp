#include <iostream>
#include <fstream>
#include <algorithm>
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

    string getColor() {
        if (tcity == "chikkamanagaluru")
            return "red";
        else if (tcity == "Bengaluru")
            return "orange";
        else if (tcity == "belagavi")
            return "green";
        else if (tcity == "Mysuru")
            return "gray";
        else
            return "black";
    }

    void displayTeacher(ofstream &fout) {
        string title = (tgender == "M" || tgender == "m") ? "Mr. " : "Mrs. ";
        string color = getColor();

        fout << "<tr style='color:" << color << ";'>\n";
        fout << "<td>" << tno << "</td>"
             << "<td>" << title << tname << "</td>"
             << "<td>" << tempid << "</td>"
             << "<td>" << tgender << "</td>"
             << "<td>" << tdesig << "</td>"
             << "<td>" << tcity << "</td>"
             << "<td>" << tstate << "</td>\n";
        fout << "</tr>\n";
    }
};

void writeTableHeader(ofstream &fout, const string &title) {
    fout << "<h2>" << title << "</h2>\n";
    fout << "<table border='1' cellspacing='0' cellpadding='5'>\n";
    fout << "<tr style='background-color:lightgray;'>"
         << "<th>tno</th><th>tname</th><th>tempid</th><th>tgender</th>"
         << "<th>tdesig</th><th>tcity</th><th>tstate</th></tr>\n";
}

int main() {
    ofstream fout("output.html");

    // HTML Header
    fout << "<!DOCTYPE html><html><head><title>Teacher Information</title></head><body>\n";

    int n;
    cout << "Enter number of teachers: ";
    cin >> n;
    Teacher* teachers = new Teacher[n];

    for (int i = 0; i < n; i++) {
        cout << "--------------Enter Teacher " << i + 1 << " Details--------------" << endl;
        teachers[i].setTeacher();
    }

    // All Teachers
    writeTableHeader(fout, "All Teachers");
    for (int i = 0; i < n; i++) {
        teachers[i].displayTeacher(fout);
    }
    fout << "</table>\n";

    // Teachers with names containing "ar"
    writeTableHeader(fout, "Teachers with names containing 'ar'");
    for (int i = 0; i < n; i++) {
        string nameLower = teachers[i].tname;
        transform(nameLower.begin(), nameLower.end(), nameLower.begin(), ::tolower);

        if (nameLower.find("ar") != string::npos) {
            teachers[i].displayTeacher(fout);
        }
    }
    fout << "</table>\n";

    // HTML Footer
    fout << "</body></html>";
    fout.close();

    delete[] teachers;

    cout << "\nAll output saved to 'output.html'. Open it in a web browser to see the result with colors.\n";
    return 0;
}
