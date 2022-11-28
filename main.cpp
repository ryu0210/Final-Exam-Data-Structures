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

/** =========================================================================== */

/// For Main Menu 3: Sort Courses of Student

bool comparator(string a,string b)
{
    return a<b;
} // An algorithm library function that compares for sorting algorithm

// Data structure to store a binary tree node

/** =========================================================================== */

/// For Main Menu 4: Sort Courses of Student using Tree PostOrder Traversal

// Declare Node of tree using LinkedList
struct Node
{
    string data;
    Node *left, *right;

    Node(string data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

// Recursive function to perform postorder traversal on the tree
void postorder(Node* root)
{
    // if the current node is empty
    if (root == nullptr) {
        return;
    }

    // Traverse the left subtree
    postorder(root->left);

    // Traverse the right subtree
    postorder(root->right);

    // Display the data part of the root (or current node)
    cout << "- " << root->data << endl;
}

/** =========================================================================== */

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
	
	/** Grade Point Average: (score/100) * 4 
	    Grade Point Formula: GPA * Course Credit
	    Cummulative GPA Formula: Total Grade Point/Total Credits Taken */

	FinalGPA = Sampoerna.SemGPA(TotalGPA, creditsum); // This is Cummulative GPA
	
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
/** =========================================================================== */

    /// To Insert Courses Student has taken

    cout << "==============================================================================================" << endl;

    cout << "\nMaximum Credits for Student to take: " << FinalCredits << endl;

    int LimitedCredits = 0; /// To add more credits using operator assignment, initialized with zero
    int choice2; /// Button to choose credit
    int z = 0; /// Size of the number of courses
    string CourseNo[100] = {}; /// Courses are defined using string arrays

    int arr2[8] = {}; //arr so the user dont pick the same option twice

    if(FinalCredits == 24){
        while(!(LimitedCredits > 21)){
            Sampoerna.CurrentSem();
            cin >> choice2;

            if(arr2[0] == choice2 || arr2[1] == choice2 || arr2[2] == choice2 || arr2[3] == choice2 || arr2[4] == choice2 || arr2[5] == choice2 || arr2[6] == choice2 || arr2[7] == choice2){
                cout << "You have chosen this lesson\n" << "Choose a different lesson\n" << endl;
                continue;
            }


            else if( choice2 == 1){
                CourseNo[z] = "Object Oriented Programming(5cr)";
                z++;
                arr2[0] = 1;
                LimitedCredits += 5;
                cout << "Object Oriented Programming has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 2){
                CourseNo[z] = "Kewarganegaraan(2cr)";
                z++;
                arr2[1] = 2;
                LimitedCredits += 2;
                cout <<  "Kewarganegaraan has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 3){
                CourseNo[z] = "Biology(3cr) ";
                z++;
                arr2[2] = 3;
                LimitedCredits += 3;
                cout << "Biology has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 4){
                CourseNo[z] = "Macroeconomics(3cr)";
                z++;
                arr2[3] = 4;
                LimitedCredits += 3;
                cout << "Macroeconomics has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 5){
                CourseNo[z] = "Chemistry(4cr)";
                z++;
                arr2[4] = 5;
                LimitedCredits += 4;
                cout << "Chemistry has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 6){
                CourseNo[z] = "Principles of IS(3cr)";
                z++;
                arr2[5] = 6;
                LimitedCredits += 3;
                cout << "Principles of IS has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 7){
                CourseNo[z] = "Mobile Development(3cr)";
                z++;
                arr2[6] = 7;
                LimitedCredits += 3;
                cout << "Mobile Development has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 8){
                CourseNo[z] = "Statistics(4cr)";
                z++;
                arr2[7] = 8;
                LimitedCredits += 4;
                cout << "Statistics has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }
            else{
                break;
            }
        }
    }


    else if(FinalCredits == 21){
        while(!(LimitedCredits > 18)){
            cout << "\nLessons: " << "\n1. Object Oriented Programming(5cr) " << "\n2. Kewarganegaraan(2cr) " << "\n3. Biology(3cr) " << "\n4. Macroeconomics(3cr) " << "\n5. Chemistry(4cr) " << "\n6. Principles of IS(3cr)" << "\n7. Mobile Development (3cr)" << "\n8. Statistics (4cr)" << "\nPick Courses [1-8] to Apply:";
            cin >> choice2;

            if(arr2[0] == choice2 || arr2[1] == choice2 || arr2[2] == choice2 || arr2[3] == choice2 || arr2[4] == choice2 || arr2[5] == choice2|| arr2[6] == choice2 || arr2[7] == choice2){
                cout << "You have chosen this lesson\n" << "Choose a different lesson\n" << endl;
                continue;
            }

            else if( choice2 == 1){
                CourseNo[z] = "Object Oriented Programming(5cr)";
                z++;
                arr2[0] = 1;
                LimitedCredits += 5;
                cout << "Object Oriented Programming has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 2){
                CourseNo[z] = "Kewarganegaraan(2cr)";
                z++;
                arr2[1] = 2;
                LimitedCredits += 2;
                cout <<  "Kewarganegaraan has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 3){
                CourseNo[z] = "Biology(3cr) ";
                z++;
                arr2[2] = 3;
                LimitedCredits += 3;
                cout << "Biology has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 4){
                CourseNo[z] = "Macroeconomics(3cr)";
                z++;
                arr2[3] = 4;
                LimitedCredits += 3;
                cout << "Macroeconomics has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 5){
                CourseNo[z] = "Chemistry(4cr)";
                z++;
                arr2[4] = 5;
                LimitedCredits += 4;
                cout << "Chemistry has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 6){
                CourseNo[z] = "Principles of IS(3cr)";
                z++;
                arr2[5] = 6;
                LimitedCredits += 3;
                cout << "Principles of IS has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 7){
                CourseNo[z] = "Mobile Development(3cr)";
                z++;
                arr2[6] = 7;
                LimitedCredits += 3;
                cout << "Mobile Development has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 8){
                CourseNo[z] = "Statistics(4cr)";
                z++;
                arr2[7] = 8;
                LimitedCredits += 4;
                cout << "Statistics has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }
            else{
                break;
            }
        }
    }


    else if(FinalCredits == 18){
        while(!(LimitedCredits > 15)){
            cout << "\nLessons: " << "\n1. Object Oriented Programming(5cr) " << "\n2. Kewarganegaraan(2cr) " << "\n3. Biology(3cr) " << "\n4. Macroeconomics(3cr) " << "\n5. Chemistry(4cr) " << "\n6. Principles of IS(3cr)" << "\n7. Mobile Development (3cr)" << "\n8. Statistics (4cr)" << "\nPick Courses [1-8] to Apply:";
            cin >> choice2;

            if(arr2[0] == choice2 || arr2[1] == choice2 || arr2[2] == choice2 || arr2[3] == choice2 || arr2[4] == choice2 || arr2[5] == choice2|| arr2[6] == choice2 || arr2[7] == choice2){
                cout << "You have chosen this lesson\n" << "Choose a different lesson\n" << endl;
                continue;
            }
            else if( choice2 == 1){
                CourseNo[z] = "Object Oriented Programming(5cr)";
                z++;
                arr2[0] = 1;
                LimitedCredits += 5;
                cout << "Object Oriented Programming has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 2){
                CourseNo[z] = "Kewarganegaraan(2cr)";
                z++;
                arr2[1] = 2;
                LimitedCredits += 2;
                cout << "Kewarganegaraan has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 3){
                CourseNo[z] = "Biology(3cr)";
                z++;
                arr2[2] = 3;
                LimitedCredits += 3;
                cout << "Biology has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 4){
                CourseNo[z] = "Macroeconomics(3cr)";
                z++;
                arr2[3] = 4;
                LimitedCredits += 3;
                cout << "Macroeconomics has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 5){
                CourseNo[z] = "Chemistry(4cr)";
                z++;
                arr2[4] = 5;
                LimitedCredits += 4;
                cout << "Chemistry has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 6){
                CourseNo[z] = "Principles of IS(3cr)";
                z++;
                arr2[5] = 6;
                LimitedCredits += 3;
                cout << "Principles of IS has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 7){
                CourseNo[z] = "Mobile Development(3cr)";
                z++;
                arr2[6] = 7;
                LimitedCredits += 3;
                cout << "Mobile Development has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }

            else if( choice2 == 8){
                CourseNo[z] = "Statistics(4cr)";
                z++;
                arr2[7] = 8;
                LimitedCredits += 4;
                cout << "Statistics has been chosen!" << endl;
                cout << "\nTotal Credits: " << LimitedCredits << endl;
            }
            else{
                break;
            }
        }
    }



    cout << "\nApplication Completed, please re-evaluate!\n" << endl;

	
int menu; /// Button to choose menu

    bool limit2 = true; /// To limit the main menu bar
    bool deletor = false; /// To detect the deletor for main menu 1
    bool sorter = false; /// To detect the sorter for main menu 1
    bool LemonTree = false; /// To detect the Traversal for main menu 1

    int ListNo2 = 1; /// To show and navigate the list number for the courses to delete
    int key; /// Button to select which courses to delete
    int progress; /// Button to add more students or end the program

    string t1, t2, t3, t4, t5, t6, t7, t8; /// For Post Order Traversal
    t1 = CourseNo[0];
    t2 = CourseNo[1];
    t3 = CourseNo[2];
    t4 = CourseNo[3];
    t5 = CourseNo[4];
    t6 = CourseNo[5];
    t7 = CourseNo[6];
    t8 = CourseNo[7];

    while (limit2 == true){
        Sampoerna.Menubar(Name);
        cout << "\nChoose Evaluation Option ";
        cin >> menu;
        cout << "\n==============================================================================================" << endl;
        cout << "==============================================================================================" << endl;

        /** =========================================================================== */

        /// Main Menu 1: Print out all students recorded

        if (menu == 1){

            if(deletor == true){
                    if(sorter == true){
                        cout << "\n" << Name << "'s Course(s): \n" << endl;
                        sort(CourseNo,CourseNo+z,comparator);
                        z-=1;
                        for(int i=0;i<z;i++)
                        {
                            cout << "- " << CourseNo[i+1] << endl;
                        }
                    }

                    else{
                        cout << "\n" << Name << "'s Course(s): \n" << endl;
                        for(i = 0; i < z - 1; i++){
                            cout << "- " << CourseNo[i+1] << endl;
                        }
                    }
            }

            else if(sorter == true){
                    if(deletor == true){
                        cout << "\n" << Name << "'s Course(s): \n" << endl;
                        sort(CourseNo,CourseNo+z,comparator);
                        for(i = 0; i < z - 1; i++){
                            cout << "- " << CourseNo[i+1] << endl;
                        }
                        cout << "\nTotal Credits: " << LimitedCredits << "\n" << endl;
                    }
                    else{
                        cout << "\n" << Name << "'s Course(s): \n" << endl;
                        sort(CourseNo,CourseNo+z,comparator);
                        for(int i=0;i<z;i++){
                        cout << "- " << CourseNo[i] << "\n";
                        }
                    }
            }

            else if(LemonTree == true){
                cout << "\n" << Name << "'s Course(s): \n" << endl;
                Node* root = new Node(t1);
                root->left = new Node(t2);
                root->right = new Node(t3);
                root->left->left = new Node(t4);
                root->right->left = new Node(t5);
                root->right->right = new Node(t6);
                root->right->left->left = new Node(t7);
                root->right->left->right = new Node(t8);

                postorder(root);
            }


            else{

                cout << "\n" << Name << "'s Course(s): \n" << endl;
                for (i = 0; i < z; i++){
                    cout << "- " << CourseNo[i] << "\n";
                }
            }
            cout << "\nTotal Credits: " << LimitedCredits << "\n" << endl;
        }

        /** =========================================================================== */

        /// Main Menu 2: Delete Certain Courses of Student

        else if (menu == 2){
            cout << "To remove a course, enter the 'key' number on the right side of 'course': " << endl;
            if(sorter == true){
                        cout << "\n" << Name << "'s Course(s): \n" << endl;
                        sort(CourseNo,CourseNo+z,comparator);
                        for(int i=0;i<z;i++)
                        {
                            cout << "Course " << ListNo2 << ": " << CourseNo[i] << endl;
                            ListNo2++;
                        }
                    }
            else{
                cout << "\n" << Name << "'s Course(s): \n" << endl;
                for (i = 0; i < z; i++){
                    cout << "Course " << ListNo2 << ": " << CourseNo[i] << "\n";
                    ListNo2++;
                }
                cout << "\nTotal Credits: " << LimitedCredits << "\n" << endl;
            }

                cout << "Enter the key number:";
                cin >> key;

                for(i = key-1; i < z-1; i++){
                    CourseNo[i] = CourseNo[i+1];
                }

                cout << "\nCourses after deletion: " << endl;
                cout << "\n" << Name << "'s Course(s): \n" << endl;
                LimitedCredits -= 3;

                for(i = 0; i < z - 1; i++){
                    cout << "- " << CourseNo[i] << endl;
                }
                cout << "\nTotal Credits: " << LimitedCredits << "\n" << endl;
                ListNo2 = 1;
                deletor = true;
        }

        /** =========================================================================== */

        /// Main Menu 3: Sort Courses of Student

        else if (menu == 3){
            cout << "\n" << Name << "'s Course(s): \n" << endl;
            sort(CourseNo,CourseNo+z,comparator);
            if(deletor == true){
                z-=1;
                for(i = 0; i < z; i++){
                    cout << "- " << CourseNo[i+1] << endl;
                }
                cout << "\nTotal Credits: " << LimitedCredits << "\n" << endl;
            }
            else{
                for(int i=0; i<z; i++)
                {
                    cout << "- " << CourseNo[i] << endl;
                }
            }
            cout << "\nTotal Credits: " << LimitedCredits << "\n" << endl;
            sorter = true;

        }

        /** =========================================================================== */

        /// Main Menu 4: To Sort using Courses of Student Tree PostOrder Traversal

        else if (menu == 4){
            cout << "\n" << Name << "'s Course(s): \n" << endl;
            Node* root = new Node(t1);
            root->left = new Node(t2);
            root->right = new Node(t3);
            root->left->left = new Node(t4);
            root->right->left = new Node(t5);
            root->right->right = new Node(t6);
            root->right->left->left = new Node(t7);
            root->right->left->right = new Node(t8);

            postorder(root);
            cout << "\nTotal Credits: " << LimitedCredits << "\n" << endl;
            LemonTree = true;
        }

        /** =========================================================================== */

        /// Main Menu 5: To choose whether to end program or continue adding another student

        else if (menu == 5){
                limit2 = false;
                cout << "\n" << Name << "'s confirmed Course(s): \n" << endl;
                for (i = 0; i < z; i++){
                    cout << "- " << CourseNo[i] << "\n";
                }
                cout << "\nTotal Credits: " << LimitedCredits << "\n" << endl;

                cout << Name << "'s course(s) has been submitted\n\nHow would you like to proceed?" << endl;
                cout << "Press 1 add another student" << endl;
                cout << "Press 2 to end the program\n" << endl;
                cout << "Input choice:";
                cin >> progress;

                if(progress == 1){
                    cout << "";
                }
                else if(progress == 2){
                    cout << "\nThank you for using College Course Application Program!" << endl;
                    cout << "\nHave a nice day!" << endl;
                limit = false;
                }
        }

        else{
            cout << "Invalid input! Please try again!" << endl;
        }
    }
    }
    return 0;

}	
