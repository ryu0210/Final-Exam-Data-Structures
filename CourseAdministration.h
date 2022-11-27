#ifndef COURSEADMINISTRATION_H
#define COURSEADMINISTRATION_H

using namespace std;


class CourseAdministration
{
    public:

        void PrevSem(int Courses, string namer); // To print out main menu for previous semester courses
        void CurrentSem(); // To print out main menu for current semester courses


        // =================================================================================
        /// For Number 3
        float round(float var); // To round the code
        float calculateGPA(float score, float credit); // To calculate and convert score into GPA
        float SemGPA(float Total, float CreditNo);
        // =================================================================================

        void Menubar(string student_name); // To print main menu name
        void MenubarRemove();





    private:
        int NumLesson;
        string Name;

        /// For Number 3
        float value;
        float GPA;
        float point;
        float CummulativeGPA;
};

#endif // COURSEADMINISTRATION_H
