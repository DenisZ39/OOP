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
	float media = 0;
	int cnt = 0;
	if (MathGrade != 0) {
		media += MathGrade;
		cnt++;
	}
	if (EngGrade != 0) {
		media += EngGrade;
		cnt++;
	}
	if (HisGrade != 0) {
		media += HisGrade;
		cnt++;
	}
	return media / cnt;
}