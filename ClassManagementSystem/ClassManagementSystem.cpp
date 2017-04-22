// ClassManagementSystem.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Class.h"

int main()
{
	Class myClass("Love",3);
	Grade sa = { 100,100,100};
	Grade sb = { 65,80,90 };
	Grade sc = { 99,96,94 };
	Student stuA("name1", "Male", sa);
	Student stuB("name2", "Male", sb);
	Student stuC("name3", "FeMale", sc);
	myClass.setStudent(stuA,0);
	myClass.setStudent(stuB, 1);
	myClass.setStudent(stuC, 2);

	cout << myClass.toString() << endl;

	system("pause");
    return 0;
}

