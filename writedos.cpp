#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

int main() {
	string x;
	ofstream myfile("myfile.txt");
	while(1) {
		getline(cin, x);
		if (x == "endcmd #exit") {
			cout << "\n\nData successfully entered in file. You are good to close the program." << endl;
			break;
		}
		else {
			myfile << x << endl;
			continue;
		}
	}
	getch();
	return 0;
}