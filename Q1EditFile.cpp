#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outFile;
    ifstream inFile;

    outFile.open("details.txt");

    if (outFile.is_open()) {
        outFile << "Name: Ashu\n";
        outFile << "Age: 25\n";
        outFile << "Profession: Software Developer\n";
        outFile << "Hobbies: Chess, Music, Coding\n";
        outFile.close();
    } else {
        cout << "Unable to open file for writing." << endl;
        return 1;
    }

    inFile.open("details.txt");

    if (inFile.is_open()) {
        string line;
        cout << "Contents of the file are:\n";
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file for reading." << endl;
        return 1;
    }

    return 0;
}
