#ifndef CONTROL_H
#define CONTROL_H

#include "Student.h"
#include "Storage.h"
#include "View.h"
#include "Monitor.h"
#include "GPAMonitor.h"
#include "FWMonitor.h"

using namespace std;

class Control
{
    public:    
        //Control ctor
        Control();

        //Control dtor
        ~Control();

        //Implements the program control flow and does the following:
        void launch();

        //Notifies the monitor objects when a new student is created
        void notify(Student* newStu);

    private:
        //Data member for the Storage object that used to be declared in main()
        Storage             inStorage;

        //Data member for a new View object. Will be responsible for user I/O
        View                theView;

        //Data member for Student object. Used to be declared in main().        
        Student*            aStudent;

        //Data member tracking the number of courses. Used to be declared in main()
        int                 numCourses;

        //Data member - stores a collection of Monitor object pointers in a vector
        vector<Monitor*>    vecMonPtrs;

        //Data member for Monitor object.
        Monitor*            m1;
        Monitor*            m2;

};
#endif
