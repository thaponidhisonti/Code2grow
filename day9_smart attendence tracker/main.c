#include <stdio.h>

int main() {
    int totalStudents, studentNumber = 1;
    int eligibleCount = 0, notEligibleCount = 0;
    float totalAttendance = 0.0;

    printf("Enter total number of students: ");
    scanf("%d", &totalStudents);

    while (studentNumber <= totalStudents) {
        int presentDays;
        float percentage;

        printf("Enter attendance for student %d (out of 30): ", studentNumber);
        scanf("%d", &presentDays);

        percentage = (presentDays / 30.0) * 100;
        totalAttendance += percentage;

        printf("Student %d: %.2f%% - ", studentNumber, percentage);
        if (percentage >= 75.0) {
            printf("Eligible\n");
            eligibleCount++;
        } else {
            printf("Not Eligible\n");
            notEligibleCount++;
        }

        studentNumber++;
    }

    float averageAttendance = totalAttendance / totalStudents;

    printf("\nClass Summary:\n");
    printf("Total Students: %d\n", totalStudents);
    printf("Eligible Students: %d\n", eligibleCount);
    printf("Not Eligible: %d\n", notEligibleCount);
    printf("Average Attendance: %.2f%%\n", averageAttendance);

    return 0;
}