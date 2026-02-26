#pragma once
class student {
	const char* name=0;
	float MathGrade=0;
	float EngGrade = 0;
	float HisGrade=0;
public:
	void SetName(const char* name);
	const char* GetName();

	void SetMathGrade(float n);
	float GetMathGrade();

	void SetEngGrade(float n);
	float GetEngGrade();

	void SetHisGrade(float n);
	float GetHisGrade();

	float GetAverageGrade();
};