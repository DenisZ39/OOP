#include "student.h"
#include "global.h"
#include <iostream>
using namespace std;

void rezultat(int n) {
	if (n == 0)cout << "s1 si s2 sunt egali" << '\n';
	else if (n == 1)cout << "s1 este superior" << '\n';
	else cout << "s2 este superior" << '\n';
}
int main() {
	student s1, s2;

	s1.SetName("denis");
	s2.SetName("andrei");

	s1.SetMathGrade(8.5);
	s2.SetMathGrade(8.7);

	s1.SetEngGrade(7);
	s2.SetEngGrade(10);
	
	s1.SetHisGrade(10);
	s2.SetHisGrade(9.49);

	int name = CompareStudentName(s1, s2);
	rezultat(name);
	int math = CompareMathGrade(s1, s2);
	rezultat(math);
	int eng = CompareEngGrade(s1, s2);
	rezultat(eng);
	int his = CompareHisGrade(s1, s2);
	rezultat(his);
	cout << "media s1:" << s1.GetAverageGrade() << '\n';
	cout << "media s2:" << s2.GetAverageGrade() << '\n';
	int avg = CompareAverageGrade(s1, s2);
	rezultat(avg);
	return 0;
}