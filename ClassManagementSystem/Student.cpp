#include "stdafx.h"
#include "Student.h"


void Student::setName(char *name)
{
	{
		if (name)
		{
			this->name = new char [ strlen(name) + 1 ];
			strcpy(this->name, name);
		}
		else
		{
			this->name = NULL;
		}
	}
}

const char * Student::getName()
{
	return this->name;
}


void Student::setSex(char *sex) 
{
	if (sex)
	{
		this->sex = new char [ strlen(sex) + 1 ];
		strcpy(this->sex, sex);
	}
	else
	{
		this->sex = NULL;
	}
}

const char * Student::getSex()
{
	return this->sex;
}

void Student::setGrade(Grade grade)
{
	this->grade = grade;
}

Grade Student::getGrade()
{
	return this->grade;
}

string Student::toString()
{
	return string("Name: ") + string(this->name) + string("  ") + string("Sex: ") + string(this->sex) + string("  ") + GradeToString(this->grade);
}

Student::Student() :name(NULL), sex(NULL), grade()
{
// 	this->name = NULL;
// 	this->sex = NULL;
// 	this->grade = {0,0,0};
}


Student::Student(char *name, char *sex, Grade grade)
{
	this->setName(name);
	this->setSex(sex);
	this->setGrade(grade);
}

Student::Student(const Student &student)
{
	this->name = new char [ strlen(student.name) + 1 ];
	strcpy(this->name, student.name);
	this->sex = new char [ strlen(student.sex) + 1 ];
	strcpy(this->sex, student.sex);
	this->grade = student.grade;
}

Student::~Student()
{
	if (!this->name) delete [] this->name;
	if (!this->sex) delete []this->sex;
}
