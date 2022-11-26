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
