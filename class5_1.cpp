#include <iostream>
#include<fstream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter Statement: ";
    getline(cin, str); 
    
    ofstream outFile("info.txt");
    outFile << str;
    outFile.close();

    // Read from file
    ifstream inFile("info.txt");
    string line;
    while (getline(inFile, line))
    {
        cout << "Read from file: " << line << endl;
    }
    inFile.close();

    for (int i = 0; i < str.length(); i++)
    {
        cout << str.at(i) << " ";
    }
    cout << endl;

    return 0;
}