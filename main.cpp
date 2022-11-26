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
	/** =========================================================================== */

	/// Enter the Courses Siswa Took

	int NumLesson; // to select number of classes student has taken
	cout << "\nHow many courses had " << Name << " taken previously: ";
	cin >> NumLesson;

	int TotalCredit = 7; // define number of courses
	string lesson[TotalCredit] = {"Discrete", "DSA", "Algebra", "English", "Algorithm", "Physics", "Business"};
	float score;
	float GPA[TotalCredit];
	float TotalGPA = 0; // To add GPA into total GPA using operator assignment
	float FinalGPA;
	float credits;
	float creditsum = 0; //To add more credits using operator assignment, initialized with zero
	int score_in_stack; // To add calculations as stack

	int arr[7] = {}; //arr so the user dont pick the same option twice

	int i = 0;


	/** =========================================================================== */

    /// To Evaluate GPA of every course student took
	while(i < NumLesson){

		int choice;
		Sampoerna.PrevSem(NumLesson, Name);
		cin >> choice;

		if(arr[0] == choice || arr[1] == choice || arr[2] == choice || arr[3] == choice || arr[4] == choice || arr[5] == choice || arr[6] == choice){
			cout << "You have chosen this lesson\n" << "Choose a different lesson\n" << endl;
			continue;
		}

		if( choice == 1){
			cout << "\nInsert " << lesson[0] << " Score: ";
			cin >> score;
			score_in_stack = score;
			i++;
			credits = 3;
			GPA[i] = Sampoerna.calculateGPA(score, credits);  //GPA = score/100 * 4
			cout << "Grade Point: " << GPA[i] << endl;
			TotalGPA = TotalGPA + GPA[i];
			cout << endl;
			arr[0] = 1;
			creditsum += credits;
			push(score_in_stack);

		}if( choice == 2){
			cout << "\nInsert " << lesson[1] << " Score: ";
			cin >> score;
			score_in_stack = score;
			i++;
			credits = 4;
			GPA[i] = Sampoerna.calculateGPA(score, credits);
			cout << "Grade Point: " << GPA[i] << endl;
			TotalGPA = TotalGPA + GPA[i];
			cout << endl;
			arr[1] = 2;
			creditsum += credits;
			push(score_in_stack);

		}if( choice == 3){
			cout << "\nInsert " << lesson[2] << " Score: ";
			cin >> score;
			score_in_stack = score;
			i++;
			credits = 3;
			GPA[i] = Sampoerna.calculateGPA(score, credits);
			cout << "Grade Point: " << GPA[i] << endl;
			TotalGPA = TotalGPA + GPA[i];
			cout << endl;
			arr[2] = 3;
			creditsum += credits;
			push(score_in_stack);

		}if( choice == 4){
			cout << "\nInsert " << lesson[3] << " Score: ";
			cin >> score;
			score_in_stack = score;
			i++;
			credits = 2;
			GPA[i] = Sampoerna.calculateGPA(score, credits);
			cout << "Grade Point: " << GPA[i] << endl;
			TotalGPA = TotalGPA + GPA[i];
			cout << endl;
			arr[3] = 4;
			creditsum += credits;
			push(score_in_stack);

		}if( choice == 5){
			cout << "\nInsert " << lesson[4] << " Score: ";
			cin >> score;
			score_in_stack = score;
			i++;
			credits = 3;
			GPA[i] = Sampoerna.calculateGPA(score, credits);
			cout << "Grade Point: " << GPA[i] << endl;
			TotalGPA = TotalGPA + GPA[i];
			cout << endl;
			arr[4] = 5;
			creditsum += credits;
			push(score_in_stack);

		}if( choice == 6){
			cout << "\nInsert " << lesson[5] << " Score: ";
			cin >> score;
			score_in_stack = score;
			i++;
			credits = 5;
			GPA[i] = Sampoerna.calculateGPA(score, credits);
			cout << "Grade Point: " << GPA[i] << endl;
			TotalGPA = TotalGPA + GPA[i];
			cout << endl;
			arr[5] = 6;
			creditsum += credits;
			push(score_in_stack);

		}if( choice == 7){
			cout << "\nInsert " << lesson[6] << " Score: ";
			cin >> score;
			score_in_stack = score;
			i++;
			credits = 3;
			GPA[i] = Sampoerna.calculateGPA(score, credits);
			cout << "Grade Point: " << GPA[i] << endl;
			TotalGPA = TotalGPA + GPA[i];
			cout << endl;
			arr[6] = 7;
			creditsum += credits;
			push(score_in_stack);

		}

	}


	FinalGPA = Sampoerna.SemGPA(TotalGPA, creditsum);
	
	/** =========================================================================== */

    /// To set the conditions for next semester application

    cout << "==============================================================================================\n" << endl;

	int FinalCredits;

	if(FinalGPA >= 3.5){
		FinalCredits = 24;
		cout << "Student Name: " << Name << endl;
		cout << "Cumulative GPA: " << Sampoerna.round(FinalGPA) << endl;
		cout << "Maximum Credits: " << FinalCredits << endl;
		cout << "\nPlease proceed to apply!\n" << endl;

	} else if(FinalGPA >= 3.0 && FinalGPA <3.5){
		FinalCredits = 21;
		cout << "Student Name: " << Name << endl;
		cout << "Cumulative GPA: " << Sampoerna.round(FinalGPA) << endl;
		cout << "Maximum Credits: " << FinalCredits << endl;
		cout << "\nPlease proceed to apply!\n" << endl;

	} else if(FinalGPA > 2.0 && FinalGPA < 3.0){
		FinalCredits = 18;
		cout << "Student Name: " << Name << endl;
		cout << "Cumulative GPA: " << Sampoerna.round(FinalGPA) << endl;
		cout << "Maximum Credits: " << FinalCredits << endl;
		cout << "\nPlease proceed to apply!\n" << endl;

	} else {
		cout << "Student Name: " << Name << endl;
		cout << "Cumulative GPA: " << Sampoerna.round(FinalGPA) << endl;
		cout << Name << " failed the semester!" << endl;
		FinalCredits = 0;
	}
