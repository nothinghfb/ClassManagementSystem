#pragma once
#include "Student.h"

// �༯��Ϣ
class Class
{
private:
	int number;//�༯����
	Student *students;
	char *ClassNum;//�༯����
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

