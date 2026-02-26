#include "movie.h"
#include <iostream>
using namespace std;
void MovieSeries::init() {
	count = 0;
}
bool MovieSeries::add(Movie* n) {
	if (count >= 16)return false;
	movies[count] = n;
	count++;
}
void MovieSeries::print() {
	for (int i = 0;i < count;i++)
		cout << movies[i]->GetName() << '\n';
}
void MovieSeries::sort() {
	for (int i = 0;i < count-1;i++)
		for (int j = i + 1;j < count;j++) {
			if (movies[i]->GetPassedYears() < movies[j]->GetPassedYears())
				swap(movies[i], movies[j]);
		}
}