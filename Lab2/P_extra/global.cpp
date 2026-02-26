#include "global.h"
#include <string.h>
#include <iostream>
#include "movie.h"
int movie_compare_name(Movie movie1, Movie movie2) {
	const char* m1 = movie1.GetName();
	const char* m2 = movie2.GetName();
	if (strcmp(m1, m2) == 0)return 0;
	else if (strcmp(m1, m2) < 0)return -1;
	else return 1;
}
int movie_compare_year(Movie movie1, Movie movie2) {
	int y1 = movie1.GetYear();
	int y2 = movie2.GetYear();
	if (y1 < y2)return -1;
	else if (y1 > y2)return 1;
	else return 0;
}
int movie_compare_score(Movie movie1, Movie movie2) {
	int s1 = movie1.GetScore();
	int s2 = movie2.GetScore();
	if (s1 < s2)return -1;
	else if (s1 > s2)return 1;
	else return 0;
}
int movie_compare_length(Movie movie1, Movie movie2) {
	int l1 = movie1.GetLength();
	int l2 = movie2.GetLength();
	if (l1 < l2)return -1;
	else if (l1 > l2)return 1;
	else return 0;
}
int movie_compare_passed_years(Movie movie1, Movie movie2) {
	int p1 = movie1.GetPassedYears();
	int p2 = movie2.GetPassedYears();
	if (p1 < p2)return -1;
	else if (p1 > p2)return 1;
	else return 0;
}