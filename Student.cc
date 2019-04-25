#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Student.h"

//Student Ctor
Student::Student(int i)
{
  id = i;
}


//Student Dtor - created to clean up the dynamically allocated Course objects
Student::~Student()
{

}


//Print() to work with Course pointers instead of objects
void Student::print()
{
  cout  << endl  << endl     << "Id: "  << id;
  cout  << right << setw(15) << "GPA: " << fixed << setprecision(2) << llCourses.computeGPA() << endl;

    llCourses.print();

    cout << "*****************************************************" << endl;

    return;
}


//Adds a course to the Linked List
void Student::addCourse(Course* aCoursePtr)
{
    llCourses.add(aCoursePtr);
    return;
}

//Getter function - gets student id
int Student::getId(){
    return id;
}

//Returns the GPA for the student, using a function implemented in a previous
//step
float Student::computeGPA(){
    return(llCourses.computeGPA());
}


//Returns the number of FW courses for this student, using a function implemented in a previous
//step
int Student::computeNumFW(){
    return(llCourses.computeNumFW());
}
