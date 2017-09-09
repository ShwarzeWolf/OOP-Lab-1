#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
class iniParser{
public:
	iniParser(string name);
	getInformation();

};*/

int main(){
    string inputFileName;
    cin >> inputFileName;

    ifstream inputFile;
    inputFile.open(inputFileName, ios_base::in);

    while (!inputFile.is_open()){
            cout<< "Source file was not found" <<endl;
            cin >> inputFileName;
            inputFile.open(inputFileName, ios_base::in);
    };
	cout<< "File was open"<< endl;
	
	string currentString;
	while (!inputFile.eof()){
		std::getline(inputFile, currentString);
		int posOfSection = currentString.find('[');
		int posOfParametrs = currentString.find('=');
		if (posOfSection!=-1)
	};

	

	system("pause");
    return 0;
}
