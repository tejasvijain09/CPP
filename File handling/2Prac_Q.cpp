#include<iostream>
#include<fstream>
using namespace std;

class student {
    int sid;
    string name;
    float marks[3];  // Array to store marks in 3 subjects

public:
    student() {}  // Default constructor for reading from file

    // Constructor to initialize student details
    student(int sid, string name, float marks[]) {
        this->sid = sid;
        this->name = name;
        for (int i = 0; i < 3; i++) {
            this->marks[i] = marks[i];
        }
    }

    void display() {
        cout << "Student ID : " << this->sid << endl;
        cout << "Student Name : " << this->name << endl;
        float avg = 0;
        for (int i = 0; i < 3; i++) {
            avg += marks[i];
        }
        avg /= 3;
        cout << "Student Average Marks : " << avg << endl;
    }

    // Writing student information to the file in plain text format
    void writeInfo(const char* filename) {
        ofstream outfile(filename, ios::app);  // Append mode
        if (!outfile.is_open()) {
            cout << "Error opening file for writing!" << endl;
            return;
        }
        float avg = (marks[0] + marks[1] + marks[2]) / 3;
        // Writing data in a readable format
        outfile << sid << " " << name << " " << marks[0] << " " << marks[1] << " " << marks[2] << " " << avg << endl;
        outfile.close();
    }

    // Reading student information from the file
    void readInfo(const char* filename) {
        ifstream infile(filename);
        if (!infile.is_open()) {
            cout << "Error opening file for reading!" << endl;
            return;
        }

        // Reading and displaying data from the file
        while (infile >> sid >> name >> marks[0] >> marks[1] >> marks[2]) {
            display();
        }
        infile.close();
    }
};

int main() {
    // Marks array for the student
    float marks[3] = {65, 31, 8};
    
    // Create and display a student record
    student s(5911, "SidhuMoosewala", marks);
    s.display();
    
    // Write the student record to the file in text format
    s.writeInfo("studnt.txt");

    // Reading back all student records from the file
    student s2;  // Empty student object to load data
    s2.readInfo("studnt.txt");

    return 0;
}
