// lab4_2.cpp 
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void PrintTextFile(const char* filename);
int CountSpaces(const char* filename);

int main() {
	const char* filename = "testfile.txt";
	cout << "Text in file: \n";
	PrintTextFile(filename);
	cout << "Count of max space sequence: " << CountSpaces(filename) << endl;

	return 0;
}

void PrintTextFile(const char* filename) {
	ifstream fin(filename);
	string s;
	while (getline(fin, s)) {
		cout << s << endl;
	}
	cout << endl;
}
int CountSpaces(const char* filename) {
	ifstream fin(filename);
	char s[100];
	int max = 0;
	int counter = 0;
	while (fin.getline(s, sizeof(s))) {
		for (int i = 0; i < sizeof(s); i++) {
			if (s[i] == ' ')
				counter++;
			else {
				if (counter > max)
					max = counter;
				counter = 0;
			}
		}
	}
	return max;
}