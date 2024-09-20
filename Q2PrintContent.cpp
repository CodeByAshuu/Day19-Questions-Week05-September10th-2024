#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    FILE* file;

    file = fopen("sample.txt", "r");
    if (file == nullptr) {
        cout << "Error: Could not open file." << endl;
        return 1;
    }

    char line[256];

    cout << "Contents of the file are:\n";
    while (fgets(line, sizeof(line), file)) {
        cout << line;
    }

    fclose(file);

    return 0;
}
