#pragma once
#include "Student.h"

// 班集信息
class Class
{
private:
	int number;//班集人数
	Student *students;
	char *ClassNum;//班集名称
public:
	void setNumber(int number);
	int getNumber();

	void setStudent(Student &student,int i);
	Student findViaName(char *name);
/*	Student findViaName(string name);*/
	void showStudent(char *name);
	void setClassNum(char *str);
	const char* getClassNum();
	string toString();

public:
	Class();
	Class(char *classNum, int nummber);
	Class(const Class& classInfo);
	~Class();
};

