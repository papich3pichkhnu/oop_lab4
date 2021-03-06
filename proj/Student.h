#pragma once
#include "Faculty.h"
#include "Person.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Faculty;
class Person;
	class Student : public Person
	{
	private:
		Faculty* sFaculty;				
	public:			
		Student();		
		~Student();
		Student(string _ln, string _fn, string _mn, int _a, int _h, string _coe, string _coh);	
		void setFaculty(Faculty* _sFaculty);
		static Student* generate();
		static Student readFromFile();
		void printToFile();
		void show();
		void showFaculty();		
		void speak(Student* another);
	};

