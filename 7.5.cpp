/* THIS PROGRAM IS PREPARED BY 24CE066_RENA
   7.5 Stream I/O and File – Display marks with formatted output.*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
ostream& currency(ostream& os) {
    os << "rupees ";
    return os;
}
struct Student {
    string name;
    float marks;
    float tuitionFee;
};
void displayStudents(Student students[], int count) {
    cout << "\n======= Student Academic Report =======\n";
    cout << left << setw(20) << "Name"
         << setw(10) << "Marks"
         << setw(15) << "Tuition Fee" << endl;
    cout << string(45, '-') << endl;

    for (int i = 0; i < count; ++i) {
        cout << left << setw(20) << students[i].name
             << setw(10) << fixed << setprecision(2) << students[i].marks
             << currency << setw(14) << fixed << setprecision(2) << students[i].tuitionFee << endl;
    }
}

int main() {
    Student students[] = {
        {"Siya", 88.5f, 45000.00f},
        {"Tiya", 91.0f, 47000.50f},
        {"Krishna", 85.25f, 44000.75f},
        {"Radha", 89.75f, 46000.00f}
    };

    int studentCount = sizeof(students) / sizeof(students[0]);

    displayStudents(students, studentCount);

    cout<<endl<<"Rena Naik-24CE066";

    return 0;
}
