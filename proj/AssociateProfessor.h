#pragma once
#include "SeniorLecturer.h"
#include "Student.h"
class Student;
class AssociateProfessor :
    public SeniorLecturer
{
    using SeniorLecturer::SeniorLecturer;
public:
    void mentorCourseProject(Student* s);
};

