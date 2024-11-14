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

    void display() const {
        cout << "Student ID : " << this->sid << endl;
        cout << "Student Name : " << this->name << endl;
        float avg = 0;
        for (int i = 0; i < 3; i++) {
            avg += marks[i];
        }
        avg /= 3;
        cout << "Student Average Marks : " << avg << endl;
    }

    void writeInfo(const char* filename) {
        ofstream outfile(filename, ios::app | ios::binary);  // Append mode
        if (!outfile.is_open()) {
            cout << "Error opening file for writing!" << endl;
            return;
        }
        outfile.write(reinterpret_cast<char*>(this), sizeof(*this));
        outfile.close();
    }

    void readInfo(const char* filename) {
        ifstream infile(filename, ios::binary);
        if (!infile.is_open()) {
            cout << "Error opening file for reading!" << endl;
            return;
        }
        while (infile.read(reinterpret_cast<char*>(this), sizeof(*this))) {
            // Display student info after reading from the file
            display();
        }
        infile.close();
    }
};

int main() {
    // Marks array for the student
    float marks[3] = {65, 31, 8};
    
    // Create and display a student record
    student s(5911, "Sidhu Moosewala", marks);
    s.display();
    
    // Write the student record to the file
    s.writeInfo("student.txt");

    // Reading back all student records from the file
    student s2;  // Empty student object to load data
    s2.readInfo("student.txt");

    return 0;
}
