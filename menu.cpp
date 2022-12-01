#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const string FILE_NAME = "menu.txt";

void readFile()
{
    fstream currentFile;
    currentFile.open(FILE_NAME, ios::in);
    if (currentFile.good() == true)
    {
        string text = "";
        cout << "Uzyskano dostep do pliku!" << std::endl;
        // tu operacje na pliku
        getline(currentFile, text);
        cout << text << endl;
    }
    else
        cout << "Dostep do pliku zostal zabroniony!" << std::endl;
}
