#pragma once

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

// 学生成绩信息
typedef struct 
{
	double Chinese;
	double Math;
	double Engnish;
}Grade;

static string GradeToString(const Grade grade)
{
	char buffC [ 20 ];
	char buffM [ 20 ];
	char buffE [ 20 ];
	sprintf(buffC, "%lf", grade.Chinese);
	sprintf(buffM, "%lf", grade.Math);
	sprintf(buffE, "%lf", grade.Engnish);
	return string("Chinese: ") + string(buffC) + string("  ") + string("Math: ") + string(buffM) + string("  ") + string("English: ") + string(buffE);
};
class Student
{
private:
	char *name;//姓名
	char *sex;//性别
	Grade grade;

public:
	void setName(char *name);
	const char * getName();
	void setSex(char *sex) ;
	const char * getSex();
	void setGrade(Grade grade);
	Grade getGrade();
	string toString();

public:
	Student();
	Student(char *name, char *sex, Grade grade);
	Student(const Student &student);
	~Student();
};

