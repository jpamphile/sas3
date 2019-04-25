#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

#include "FWMonitor.h"

/*
//FWMonitor Ctor
FWMonitor::FWMonitor(vector<string> fwl) 
          : Monitor(fwl){
    cout << "In fwmonitor ctor" << endl;
}
*/

//FWMonitor Ctor
FWMonitor::FWMonitor(int nfwc) 
          : numFWCourses(nfwc){
    //cout << "In fwmonitor ctor" << endl;
}

//FWMonitor Dtor
FWMonitor::~FWMonitor() {
    //cout << "In fwmonitor ctor" << endl;
}

//FWMonitor-specific update() function implementation
//Checks if the given student's number of Failed/Withdrawn courses is above threshold
void FWMonitor::update(Student* stu){
    string aFWLog;

    if(stu->computeNumFW() >= numFWCourses){
        //Create a new log with id and FW
        aFWLog = "--Id : " + to_string(stu->getId()) + "  --Num FW : " + to_string(stu->computeNumFW());

        //Adds the new log to its collection
        inTheLog.push_back(aFWLog);
    }
    return;
}

