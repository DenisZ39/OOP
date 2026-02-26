#include "movie.h"
#include <ctime>
void Movie::set_name(const char* n) {
	name = n;
}
void Movie::set_score(double n) {
	if(n>=1 && n<=10)IMDB=n;
}
void Movie::set_year(int n) {
	RlYear = n;
}
void Movie::set_length(int n) {
	length = n;
}
const char* Movie::GetName() {
	return name;
}
double Movie::GetScore() {
	return IMDB;
}
int Movie::GetYear() {
	return RlYear;
}
int Movie::GetLength() {
	return length;
}
int Movie::GetPassedYears() {
	time_t t = time(nullptr);
	struct tm now;
	localtime_s(&now, &t);
	int currYear = now.tm_year + 1900;
	return currYear - RlYear;
}