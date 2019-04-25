#ifndef GPAMONITOR_H
#define GPAMONITOR_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

#include "Student.h"
#include "Monitor.h"

class GPAMonitor : public Monitor{
    public:
        //GPAMonitor Ctor
        //GPAMonitor(vector<string> inTheLog = { });
        GPAMonitor(float = 0.00);


        //GPAMonitor Dtor
        virtual ~GPAMonitor();

        //GPAMonitor-specific update() function
        virtual void update(Student* stu);

    private:
        float   gpaMin = 3.50;
};
#endif
