/* THIS PROGRAM IS PREPARED BY 24CE066_RENA
   7.4 Stream I/O and File – Read and format student data.*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>

using namespace std;
struct Student {
    char name[50];
    float marks;
    char grade;
};
ostream& alignColumn(ostream& os) {
    return os << setw(15) << left;
}
void generateReport(const char* filename) {
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Error: Could not open file \"" << filename << "\" for reading.\n";
        return;
    }

    Student student;

    cout << "\n======= Student Performance Report =======\n";
    cout << alignColumn << "Name"
         << alignColumn << "Marks"
         << alignColumn << "Grade" << endl;
    while (file >> student.name >> student.marks >> student.grade) {
        cout << alignColumn << student.name
             << alignColumn << fixed << setprecision(2) << student.marks
             << alignColumn << student.grade << endl;
    }

    file.close();
}

int main() {
    const char* filename = "students.txt";

    cout << "=== Student Report Generator ===\n";

    generateReport(filename);


    cout<<"Rena Naik-24CE066";
    return 0;
}
