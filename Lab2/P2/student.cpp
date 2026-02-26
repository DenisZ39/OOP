#include "student.h"

void student::SetName(const char* n) {
	name = n;
}
void student::SetMathGrade(float n) {
	if (n >= 1 && n <= 10)
		MathGrade = n;
}
void student::SetEngGrade(float n) {
	if (n >= 1 && n <= 10)
		EngGrade = n;
}
void student::SetHisGrade(float n) {
	if (n >= 1 && n <= 10)
		HisGrade = n;
}
const char* student::GetName() {
	return name;
}
float student::GetMathGrade() {
	return MathGrade;
}
float student::GetEngGrade() {
	return EngGrade;
}
float student::GetHisGrade() {
	return HisGrade;
}
float student::GetAverageGrade() {
	return (MathGrade + EngGrade + HisGrade) / 3;
}