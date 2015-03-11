#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream infile;
    string fileinput;
    int word;
    cout << "Enter filename" << endl;
    cin >> fileinput;
    infile.open(fileinput.c_str());
    while (!fileinput.eof())
    {
        infile >> word;
        word++;
    }
    if (!fileinput)
    {
        cout << "File not found" << endl;
        return 0;
    }
    infile.close();
    cout << "Found " << word << endl;
    return 0;
}
