#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file("info.txt");
    string line;

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}