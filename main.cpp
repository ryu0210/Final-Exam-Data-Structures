#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>

#include "CourseAdministration.h"

using namespace std;

#define max 10
#define SIZE 5
string marks[max];

int top = 0;
int items[SIZE], front, rear;

/** ================================================================================================ */

/// For Number 2: Creating Stack Data Structure

//to see if stack is full or not
bool isFull(){
	if(top >= max){
		return true;
	} else {
		return false;
	}
}

// push function (insert)
void push(float score){
	if(!isFull()){

		marks[top] = score;
		top++;
	}
}

int main(){
  bool limit = true;
    CourseAdministration Sampoerna;

    /** =========================================================================== */

    /// Number 1: Enter Student Name

    while(limit == true){
    cout << "==============================================================================================" << endl;
    cout << "==============================================================================================" << endl;
    string Name;
	  cout << "Welcome to Sampoerna University Course Administration System!\n" << "Please enter Student's Name: ";
	  cin >> Name;
}
