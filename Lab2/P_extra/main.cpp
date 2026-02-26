#include "movie.h"
#include "global.h"
#include <cstdio>
#include <iostream>
using namespace std;
void statistici(Movie n) {
    cout << "name:" << n.GetName() << '\n';
    cout << "score:" << n.GetScore() << '\n';
    cout << "year:" << n.GetYear() << '\n';
    cout << "length:" << n.GetLength() << '\n';
    cout << "vechime:" << n.GetPassedYears() << '\n';
    cout << '\n';
}
int main() {
    Movie ep5;
    ep5.set_name("Star Wars: Episode V - The Empire Strikes Back");
    ep5.set_score(8.7);
    ep5.set_year(1980);
    ep5.set_length(124);

    Movie ep4;
    ep4.set_name("Star Wars: Episode IV - A New Hope");
    ep4.set_score(8.6);
    ep4.set_year(1977);
    ep4.set_length(121);

    Movie ep6;
    ep6.set_name("Star Wars: Episode VI - Return of the Jedi");
    ep6.set_score(8.3);
    ep6.set_year(1983);
    ep6.set_length(131);

    printf(
        R"(
ep4, ep5 comparisons:
name        : %d
year        : %d
score       : %d
length      : %d
passed years: %d
)",
movie_compare_name(ep4, ep5),
movie_compare_year(ep4, ep5),
movie_compare_score(ep4, ep5),
movie_compare_length(ep4, ep5),
movie_compare_passed_years(ep4, ep5));

    MovieSeries series;
    series.init();
    series.add(&ep5);
    series.add(&ep4);
    series.add(&ep6);

    series.sort();
    series.print();
    cout << '\n';
    cout << "statistici ep4:\n";
    statistici(ep4);
    cout << "statistici ep5:\n";
    statistici(ep5);
    cout << "statistici ep6:\n";
    statistici(ep6);
}
