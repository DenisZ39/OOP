#pragma once
class Movie {
private:
	const char* name = 0;
	int RlYear = 0;
	double IMDB = 0;
	int length = 0;
	int passedYears = 0;
public:
	void  set_name(const char* name);
	const char* GetName();
	void set_score(double score);
	double GetScore();
	void set_year(int year);
	int GetYear();
	void set_length(int length);
	int GetLength();
	int GetPassedYears();
};
class MovieSeries {
private:
	int count;
	Movie* movies[16];
public:
	void init();
	bool add(Movie *m);
	void print();
	void sort();
};