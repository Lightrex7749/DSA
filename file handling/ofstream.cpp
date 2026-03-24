#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> datas;
    string data;

    ifstream outfile("info.txt");
    while(getline(outfile, data)) {
        datas.push_back(data);
    }
    outfile.close();

    string topush="its last line just added now";
    datas.push_back(topush);

    ofstream infile("info.txt");
    for(const auto& line : datas) {
        infile << line << endl;
    }
    infile.close();
    return 0;
}