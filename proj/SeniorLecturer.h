#pragma once
#include "Lecturer.h"
#include "Exam.h"
class Exam;
class SeniorLecturer :
    public Lecturer
{
    using Lecturer::Lecturer;
public:
    void setExamSign(Exam*);

};

