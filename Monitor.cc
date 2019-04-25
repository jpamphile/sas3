#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

#include "Monitor.h"

//Monitor 
/*
Monitor::Monitor(vector<string> itl)
        : inThelog(itl){

}
*/
Monitor::Monitor(){

}

//Monitor Dtor
Monitor::~Monitor(){
    //cout << "Monitor Destroyed!" << endl;
}


//Prints the collection of logs to the screen
void Monitor::printLogs(){
    for(int i = 0; i < inTheLog.size(); ++i){
        cout << inTheLog[i] << endl;
    }
    return;
}

