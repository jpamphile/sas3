#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "List.h"

//Linked List Ctor
List::List() : head(0), tail(0) { }

//Linked List Dtor
List::~List()
{
  Node* currNode = head;
  Node* nextNode;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode->cData;
    delete currNode;
    currNode = nextNode;
  }
}

//Adds a course to the Linked List
void List::add(Course* cPtr)
{
  Node* tmpNode;
  Node* currNode;
  Node* prevNode;

  tmpNode = new Node;
  tmpNode->cData = cPtr;
  tmpNode->next = 0;

  currNode = head;
  prevNode = NULL;

  while (currNode != NULL) {
    if (cPtr->lessThan(currNode->cData))
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (prevNode == NULL) {
    head = tmpNode;
  }
  else {
    prevNode->next = tmpNode;
  }

  tmpNode->next  = currNode;

  if(tmpNode->next == NULL){
    tail = tmpNode;

  }

}

//Prints out the data referenced in each Linked List node
void List::print()
{
  Node* currNode = head;

  if(head == NULL){
    cout << "NO COURSES TO PRINT." << endl;
    return;
  }

  while (currNode != NULL) {
    //Checking if the student has no course 190325
    if(currNode->cData == NULL){
      currNode = currNode->next;
      continue;
    }
    currNode->cData->print();
    currNode = currNode->next;
  }
  
  cout << "-----------------------------------------------------" << endl;

  cout << "** HEAD: "; 

  head->cData->print();
  
  cout << "** TAIL: ";
  
  tail->cData->print();
  
  return;
}
//Computes and returns the average of all course grades for a student,
//excluding the withdrawals
float List::computeGPA(){
    int     courseGrade;
    float   gradePtTotal = 0.0f;
    int     nCourses = 0;
    float   creditVal = 0.0f;
    float   gradePt[]  = {0.0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5, 5.0, 5.5, 6.0};

    Node* currNode = head;

    if(head == NULL){
        return 0.0;
    }

    while(currNode != NULL){
        if(currNode->cData == NULL){
            currNode = currNode->next;
            continue;
        }

        courseGrade = currNode->cData->getGrade();
        if(courseGrade > -1){
            //float gradePt[]  = {0.0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5, 5.0, 5.5, 6.0};
            gradePtTotal = gradePtTotal + gradePt[courseGrade];
            ++nCourses;
        }
        currNode = currNode->next;
    }
    creditVal = 0.5 * nCourses;
    return (float)gradePtTotal/creditVal;
}

//Computes and returns the number of courses that the student has failed or
//from which the student has withdrawn
int List::computeNumFW(){
    int     courseGrade;
    int     nCoursesFW = 0;
    Node*   currNode = head;

    if(head == NULL){
        //Checking if the list is empty.
        return 0;
    }

    while(currNode != NULL){
        //Checking if a course exists.
        if(currNode->cData == NULL){
            currNode = currNode->next;
            continue;
        }

        courseGrade = currNode->cData->getGrade();
        if(courseGrade <= 0){
            ++nCoursesFW;
        }
        currNode = currNode->next;
    }
    return(nCoursesFW);
}
