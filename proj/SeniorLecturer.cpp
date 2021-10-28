#include "SeniorLecturer.h"
#include "Exam.h"
#include<iostream>
#include <string>
using namespace std;
class Exam;
void SeniorLecturer::setExamSign(Exam* e)
{
	cout << "Exam on " << e->discipline->getName() << " is signed by " << this->getFullName()<<endl;

}