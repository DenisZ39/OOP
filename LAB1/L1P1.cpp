#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
ifstream fin("in.txt");

int convert(char s1[]) {
	int nr = 0;
	for (int i = 0;i < strlen(s1); i++) {
		nr = nr * 10 + s1[i] - '0';
	}
	return nr;
}

int main() {
	char s1[101];
	int suma = 0;
	while (fin >> s1) {
		suma += convert(s1);
	}
	cout << suma;
	return 0;
}