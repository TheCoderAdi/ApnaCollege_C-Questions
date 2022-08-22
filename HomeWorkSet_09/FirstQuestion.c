#include <stdio.h>
#include <string.h>
struct CollegeInfo
{
    char studentName[100];
    char teacherName[100];
    char staffName[100];
    int studentRoll;
};

int main()
{
    // Make a system that can store information of all students , teachers &staff of your college in the form of structures
    struct CollegeInfo S_name1, S_name2, T1, T2, St_name1, St_name2;
    // Intializing The Names
    strcpy(S_name1.studentName, "Aju Bhai");
    strcpy(S_name2.studentName, "Harry Bhai");
    strcpy(St_name1.staffName, "Rakesh");
    strcpy(St_name2.staffName, "Rasmi");
    strcpy(T1.teacherName, "Bapuni Sir");
    strcpy(T2.teacherName, "Kanha Sir");

    // Students RollNumber
    S_name1.studentRoll = 2022;
    S_name2.studentRoll = 2023; 

    // Student Info
    printf("The name of the student is :%s\n", S_name1.studentName);
    printf("The roll number of the student is :%d\n", S_name1.studentRoll);
    printf("The name of the student is :%s\n", S_name2.studentName);
    printf("Roll Number of the student is :%d\n", S_name2.studentRoll);
    
    // Teacher info
    printf("Math Teacher name : %s\n", T1.teacherName);
    printf("Science Teacher name : %s\n", T2.teacherName);

    // Staff Info
    printf("Hostel staff name : %s\n", St_name1.staffName);
    printf("Cantine staff name : %s\n", St_name2.staffName);
    return 0;
}