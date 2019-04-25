# STUDENT AUDITING SYSTEM - COMP2404 - ASSIGNMENT3 - 2019/03/26 - 12:00:00

## Program and Revision Author
    Jean Pamphile


## Purpose
    - GOAL
      - To modify the student auditing program from a previous assignment or
        from the base code to implement a simplified version of the Observer
        design pattern.
      - To implement two concrete monitor classes that observe changes to
        student GPA and the number of courses that students fail or from which
        they withdraw.

    - LEARNING OUTCOMES
      - Apply the OO concepts of inheritance and polymorphism
      - Work with virtual and pure virtual functions in C++
      - Implement a simplified version of the Observer design pattern


## Files
    -Sources (*.cc)
        main.cc
        Course.cc
        Student.cc
        List.cc
        Storage.cc
        View.cc
        Control.cc
        Monitor.cc
        GPAMonitor.cc
        FWMonitor.cc

    -Header (*.h)
        Course.h
        Student.h
        List.h
        Storage.h
        View.h
        Control.h
        Monitor.h
        GPAMonitor.h
        FWMonitor.h
        defs.h

    -Data (*.txt)
        in.txt

    -Build file
        Makefile

    -Design Document
        a3UmlDesignDoc.pdf


## Compilation, Launching and Operating Instructions
    
    '''In Terminal, type the following commands to compile/launch the system...

    make clean
    make
    ./sas < in.txt

    '''

