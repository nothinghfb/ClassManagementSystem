#include "stdafx.h"
#include "Class.h"


void Class::setNumber(int number)
{
	this->number = number;
}

int Class::getNumber()
{
	return this->number;
}

void Class::setStudent(Student &student,int i)
{
	if (this->students && i < this->number && i>=0)
	{
		this->students [ i ] = Student(student);
	}
}

Student Class::findViaName(char *name)
{
	int i = 0;
	if (name)
	{
		return Student();
	}
	for (i = 0;i < this->number;++i)
	{
		if (strcmp(name, this->students [ i ].getName()) == 0)
		{
			return Student(this->students [ i ]);
		}
	}
	return Student();
}

void Class::showStudent(char *name)
{
	cout << this->findViaName(name).toString() << endl;
}

void Class::setClassNum(char *str)
{
	if (str)
	{
		this->ClassNum = new char [ strlen(str) + 1 ];
		strcpy(this->ClassNum, str);
	}
	else
	{
		this->ClassNum = NULL;
	}
}

const char* Class::getClassNum()
{
	return this->ClassNum;
}

std::string Class::toString()
{
	int i;
	char buffNum [ 20 ];
	char buffnum [ 20 ];
	sprintf(buffNum, "%s", this->ClassNum);
	sprintf(buffnum, "%d", this->number);
	string rt = string("ClassNum: ")+string(buffNum) + string("  ") + string("number: ") + string(buffnum) + string("\n");
	for (i = 0;i < this->number;++i)
	{
		rt = rt +this->students [ i ].toString() + string("\n");
	}
	return rt;
}

Class::Class()
{
	this->ClassNum = NULL;
	this->number = 0;
	this->students = NULL;
}


Class::Class(char *classNum, int nummber)
{
	if (!classNum)
	{
		this->ClassNum = NULL;
	}
	this->ClassNum = new char [ strlen(classNum) + 1 ];
	strcpy(this->ClassNum, classNum);
	this->number = nummber;
	this->students = new Student [ nummber ];
}

Class::Class(const Class& classInfo)
{

}

Class::~Class()
{
	if (!this->ClassNum)delete [] ClassNum;
	if (!this->students)delete []this->students;
}
