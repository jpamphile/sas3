#ifndef MONITOR_H
#define MONITOR_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

#include "Student.h"


class Monitor{
    public:
        //Monitor Ctor
        //Monitor(vector<string> l = { });
        Monitor();

        //Monitor Dtor
        virtual ~Monitor();

        //Pure virtual update() function
        virtual void update(Student* theStudent) = 0;

        //Prints the collection of logs to the screen
        void printLogs();

    private:
        //Stores a collection of logs
        //vector<string> inTheLog;

        //float   gpaMin;
        //int     numFWCourses;

    protected:
        //Stores a collection of logs
        vector<string> inTheLog;
};
#endif
