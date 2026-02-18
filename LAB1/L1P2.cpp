#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main() {
	char s[31],cp[31][31],*p;
	int nr_cuv=0;
	cin.getline(s, 31);
	p = strtok(s, " ");
	while (p) {
		strcpy(cp[nr_cuv], p);
		nr_cuv++;
		p = strtok(NULL, " ");
	}
	for(int i=0;i<nr_cuv-1;i++)
		for (int j = i + 1;j < nr_cuv;j++) {
			int c1 = strlen(cp[i]);
			int c2 = strlen(cp[j]);
			if (c1 < c2) {
				char aux[31];
				strcpy(aux, cp[i]);
				strcpy(cp[i], cp[j]);
				strcpy(cp[j], aux);
			}
			else if (c1 == c2) {
				if (strcmp(cp[i], cp[j]) > 0) {
					char aux[31];
					strcpy(aux, cp[i]);
					strcpy(cp[i], cp[j]);
					strcpy(cp[j], aux);
				}
			}
		}
	for (int i = 0; i < nr_cuv; i++) {
		cout << cp[i] << "\n";
	}
}