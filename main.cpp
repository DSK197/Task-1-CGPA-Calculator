#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

struct Course {
    string name;
    string grade;
    double gradePoint;
    int credits;
};

// Convert grade to grade point
double getGradePoint(string grade) {
    if (grade == "A+") return 10.0;
    if (grade == "A")  return 9.0;
    if (grade == "B+") return 8.0;
    if (grade == "B")  return 7.0;
    if (grade == "C")  return 6.0;
    if (grade == "D")  return 5.0;
    if (grade == "F")  return 0.0;

    return -1.0;
}

int main() {
    int numberOfCourses;

    cout << "========================================\n";
    cout << "          CGPA CALCULATOR\n";
    cout << "========================================\n\n";

    cout << "Enter number of courses: ";
    cin >> numberOfCourses;

    if (numberOfCourses <= 0) {
        cout << "\nInvalid number of courses.\n";
        return 0;
    }

    vector<Course> courses;

    double totalCredits = 0;
    double totalGradePoints = 0;

    for (int i = 0; i < numberOfCourses; i++) {

        Course course;

        cout << "\nCourse " << i + 1 << "\n";

        cout << "Enter course name: ";
        cin >> course.name;

        cout << "Enter grade (A+/A/B+/B/C/D/F): ";
        cin >> course.grade;

        course.gradePoint = getGradePoint(course.grade);

        if (course.gradePoint == -1) {
            cout << "Invalid grade entered. Please restart the program.\n";
            return 0;
        }

        cout << "Enter credit hours: ";
        cin >> course.credits;

        if (course.credits <= 0) {
            cout << "Invalid credit hours. Please restart the program.\n";
            return 0;
        }

        courses.push_back(course);

        totalCredits += course.credits;
        totalGradePoints += course.gradePoint * course.credits;
    }

    double gpa = totalGradePoints / totalCredits;

    cout << "\n\n========================================\n";
    cout << "             RESULT\n";
    cout << "========================================\n";

    cout << left
         << setw(20) << "Course"
         << setw(10) << "Grade"
         << setw(15) << "Grade Point"
         << setw(10) << "Credits" << "\n";

    cout << "----------------------------------------\n";

    for (const Course &course : courses) {
        cout << left
             << setw(20) << course.name
             << setw(10) << course.grade
             << setw(15) << fixed << setprecision(1) << course.gradePoint
             << setw(10) << course.credits << "\n";
    }

    cout << "----------------------------------------\n";

    cout << fixed << setprecision(2);
    cout << "Total Credits      : " << totalCredits << "\n";
    cout << "Total Grade Points : " << totalGradePoints << "\n";
    cout << "GPA                : " << gpa << "\n";

    // For a single-semester calculator,
    // the calculated GPA represents the current CGPA.
    cout << "CGPA               : " << gpa << "\n";

    cout << "========================================\n";
    cout << "       Thank you for using the\n";
    cout << "          CGPA Calculator!\n";
    cout << "========================================\n";

    return 0;
}