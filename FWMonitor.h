#ifndef FWMONITOR_H
#define FWMONITOR_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

#include "Student.h"
#include "Monitor.h"

class FWMonitor : public Monitor{
    public:
        //FWNonitor Ctor
        //FWMonitor(vector<string> inTheLog = { });
        FWMonitor(int = 0);

        //FWMonitor Dtor
        virtual ~FWMonitor();

        //FWMonitor-specific update() function
        virtual void update(Student* stu);

        private:
            int numFWCourses = 2;

};
#endif
