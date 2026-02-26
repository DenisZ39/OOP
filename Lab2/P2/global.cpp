#include "global.h"
#include <string.h>

int CompareStudentName(student student1, student student2) {
	const char*s1 = student1.GetName();
	const char* s2 = student2.GetName();

	if (strcmp(s1, s2) == 0)return 0;
	else if (strcmp(s1, s2) < 0)return 1;
	else return -1;
}
int CompareMathGrade(student student1, student student2) {
	float s1 = student1.GetMathGrade();
	float s2 = student2.GetMathGrade();

	if (s1 == s2)return 0;
	else if (s1 > s2)return 1;
	else return -1;
}
int CompareEngGrade(student student1, student student2) {
	float s1 = student1.GetEngGrade();
	float s2 = student2.GetEngGrade();

	if (s1 == s2)return 0;
	else if (s1 > s2)return 1;
	else return -1;
}
int CompareHisGrade(student student1, student student2) {
	float s1 = student1.GetHisGrade();
	float s2 = student2.GetHisGrade();

	if (s1 == s2)return 0;
	else if (s1 > s2)return 1;
	else return -1;
}
int CompareAverageGrade(student student1, student student2) {
	float s1 = student1.GetAverageGrade();
	float s2 = student2.GetAverageGrade();

	if (s1 == s2)return 0;
	else if (s1 > s2)return 1;
	else return -1;
}