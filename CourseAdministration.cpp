#include <iostream>

using namespace std;

#include "CourseAdministration.h"

/** ================================================================================================ */

/// For number 3: Evaluate GPA

float CourseAdministration::round(float var){
    value = (int)(var * 100 + .5);
    return (float)value / 100;
}

float CourseAdministration::calculateGPA(float score, float credit){
    point = score / 100 * 4;
	GPA = point * credit;
	return GPA;
}

float CourseAdministration::SemGPA(float Total, float CreditNo){
    CummulativeGPA = Total / CreditNo;
    return CummulativeGPA;
}

/** ================================================================================================ */
//i added menubar
void CourseAdministration::PrevSem(int Courses, string namer){
    NumLesson = Courses;
    Name = namer;
    cout << "\nLessons: ";
    cout << "\n1. Discrete [3cr]";
    cout << "\n2. DSA [4cr]";
    cout << "\n3. Algebra [3cr]";
    cout << "\n4. English [2cr]";
    cout << "\n5. Algorithm [3cr]";
    cout << "\n6. Physics [5cr]";
    cout << "\n7. Business [3cr]";
    cout << "\nEnter the " << NumLesson << " Courses [1-7] " << Name << " has taken:";
}

void CourseAdministration::CurrentSem(){
    cout << "\nLessons: ";
    cout << "\n1. Object Oriented Programming(5cr)";
    cout << "\n2. Kewarganegaraan(2cr)";
    cout << "\n3. Biology(3cr)";
    cout << "\n4. Macroeconomics(3cr)";
    cout << "\n5. Chemistry(4cr)";
    cout << "\n6. Principles of IS(3cr)";
    cout << "\n7. Mobile Development (3cr)";
    cout << "\n8. Statistics (4cr)";
    cout << "\nPress any key to finish" << endl;
    cout << "\nPick Courses [1-8] to Apply:";
}

void CourseAdministration::Menubar(string student_name){
    cout << "==============================================================================================" << endl;
    cout << "==============================================================================================\n" << endl;
    cout << "Welcome to Sampoerna University student portal!\n" << endl;
    cout << "Press 1 to Print all of " << student_name << "'s Courses" << endl;
    cout << "Press 2 to Delete " << student_name << "'s Certain Courses" << endl;
    cout << "Press 3 to Sort Courses of " << student_name << endl;
    cout << "Press 4 to Sort Courses of " << student_name << " in PostOrder Traversal" << endl;
    cout << "Press 5 to Submit " << student_name << "'s Courses" << endl;
}
