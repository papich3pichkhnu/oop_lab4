#include "AssociateProfessor.h"
#include<string>
#include<iostream>
using namespace std;
void AssociateProfessor::mentorCourseProject(Student* s)
{
	cout << "Associate Professor "<<this->getFullName()<<" is mentoring course project of student "<<s->getFullName()<<endl;

}