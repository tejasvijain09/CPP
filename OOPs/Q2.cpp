#include<iostream>
using namespace std;
class Student{
    int marks;
    friend class Teacher;
    public:
    Student():marks(0){}
    int getMarks() {
        return marks;
    }
};
class Teacher{
    public:
    void AssignMarks(Student &S){
        S.marks = 80; // Assigning marks to Student object
        cout << "Marks assigned to Student: " << S.marks << endl;
    }
};
int main()
{
    Student S1;
    Teacher T1;
    T1.AssignMarks(S1); // Passing Student object to Teacher's function
    S1.getMarks();
 return 0;
}
//  #include <iostream>
// using namespace std;

// class Teacher; // Forward declaration

// class Student {
// private:
//     int marks;

// public:
//     // Constructor to initialize marks to 0
//     Student() : marks(0) {}

//     // Friend class declaration
//     friend class Teacher;

//     // Getter to return marks
//     int getMarks() {
//         return marks;
//     }
// };

// class Teacher {
// public:
//     // Function to assign marks to the student
//     void assignMarks(Student &s, int m) {
//         s.marks = m; // Accessing private member of Student
//     }
// };

// int main() {
//     // Creating objects of Student and Teacher
//     Student student;
//     Teacher teacher;

//     // Assigning marks using Teacher class
//     teacher.assignMarks(student, 95);

//     // Printing the student's marks using the getMarks function
//     cout << "The student's marks are: " << student.getMarks() << endl;

//     return 0;
// }
