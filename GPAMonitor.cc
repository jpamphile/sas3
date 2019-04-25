#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

#include "GPAMonitor.h"

/*
//GPAMonitor Ctor
GPAMonitor::GPAMonitor(vector<string> gpal) 
           : Monitor(gpal) {
    cout << "In gpamonitor ctor" << endl;
}
*/

//GPAMonitor Ctor
GPAMonitor::GPAMonitor(float gm) 
           : gpaMin(gm){
    //cout << "In gpamonitor ctor" << endl;
}

//GPAMonitor Dtor
GPAMonitor::~GPAMonitor() {
    //cout << "In gpamonitor ctor" << endl;
}

//GPAMonitor-specific update() function implementation
//Checks if the given student's GPA is belowthe minimum threshold
void GPAMonitor::update(Student* stu){
    string aGPALog;

    if(stu->computeGPA() <= gpaMin){
        //Create a new log with id and GPA
        aGPALog = "--Id : " + to_string(stu->getId()) + " --GPA : "
        + to_string(stu->computeGPA());

/*
        aGPALog = "--Id : " + to_string(stu->getId()) + " --GPA : "
        + to_string((int)stu->computeGPA()) + "."
        + to_string((int)(stu->computeGPA()-(int)stu->computeGPA())*10000);
*/

        //Adds the new log to its collection
        inTheLog.push_back(aGPALog);
    } 
    return;
}

