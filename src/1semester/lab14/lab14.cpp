#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {

	ofstream outf("SomeText.txt");

	
	if (!outf)
	{
		
		cerr << "Uh oh, SomeText.txt could not be opened for writing!" << endl;
		exit(1);
	}

	ifstream inf("SomeText.txt");

	if (!inf)
	{
		
		cerr << "Uh oh, SomeText.txt could not be opened for reading!" << endl;
		exit(1);
	}
	
	while (inf)
	{
		
		string strInput;
		getline(cin, strInput);
		cout << strInput << endl;
		for (int i = 0; i < strInput.size(); i++) {
			if (strInput[i] >= '0' && strInput[i] <= '9')
				cout << strInput[i];
			else if (!(strInput[i] >= '0' && strInput[i] <= '9') && strInput[i + 1] >= '0' && strInput[i + 1] <= '9')
				cout << " ";
		}
	}

	return 0;
}