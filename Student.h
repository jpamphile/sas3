#ifndef STUDENT_H
#define STUDENT_H

#include "defs.h"
#include "Course.h"
#include "List.h"

class Student
{
  public:
    //Student Ctor
    Student(int=0);

    //Student Dtor
    ~Student();

    //Adds a course to the Linked List of Courses
    void addCourse(Course* aCoursePtr);

    //Prints courses stored in Linked List
    void print();

    //Returns the GPA for the student, using a function implemented in
    //a previous step
    float computeGPA();

    //Returns the number of FW courses for this student, using a function
    //implemented in a previous step
    int computeNumFW();

    //Getter function - gets student id
    int getId();

  private:
    int     id;
    List    llCourses;
};

#endif
