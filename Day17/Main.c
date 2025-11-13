#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    char reg[50];
    char section[20];

    int n;
    int salaries[10];
    int temp_copy[10];

    int i, j, choice;
    long total;
    int average;
    int highest, lowest;
    int above_count, below_count;

    printf("========= Employee Salary Analysis System =========\n\n");
    printf("Enter Student Name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) name[0] = '\0';
    if (name[0] != '\0' && name[strlen(name)-1] == '\n') name[strlen(name)-1] = '\0';

    printf("Enter Registration Number: ");
    if (scanf("%49s", reg) != 1) reg[0] = '\0';

    printf("Enter Section: ");
    if (scanf("%19s", section) != 1) section[0] = '\0';

    printf("\nEnter number of employees (max 10): ");
    while (scanf("%d", &n) != 1 || n < 1 || n > 10) {
        while (getchar() != '\n');
        printf("Invalid entry. Enter a number between 1 and 10: ");
    }

    printf("\nEnter salaries:\n");
    for (i = 0; i < n; ++i) {
        printf("%d: ", i + 1);
        while (scanf("%d", &salaries[i]) != 1) {
            while (getchar() != '\n');
            printf("Invalid. Enter integer salary for %d: ", i + 1);
        }
    }

    do {
        printf("\n========= Menu =========\n");
        printf("1. Display All Salaries\n");
        printf("2. Display Total and Average Salary\n");
        printf("3. Display Highest and Lowest Salary\n");
        printf("4. Count Employees Above and Below Average\n");
        printf("5. Display Sorted Salaries (Ascending)\n");
        printf("6. Exit\n");
        printf("========================\n");
        printf("Enter your choice: ");

        while (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            printf("Invalid. Enter menu choice (1-6): ");
        }

        switch (choice) {
            case 1:
                printf("\n-- All Salaries --\n");
                for (i = 0; i < n; ++i) {
                    printf("%d: %d\n", i + 1, salaries[i]);
                }
                printf("\nSubmitted by: %s | Reg No: %s | Section: %s\n",
                        name, reg, section);
                printf("Challenge Day 17 – Code2Grow Program\n");
                break;

            case 2:
                total = 0;
                for (i = 0; i < n; ++i) total += salaries[i];
                average = (int)(total / n); 
                printf("\nTotal Salary = %ld\n", total);
                printf("Average Salary = %d\n", average);
                printf("\nSubmitted by: %s | Reg No: %s | Section: %s\n",
                        name, reg, section);
                printf("Challenge Day 17 – Code2Grow Program\n");
                break;

            case 3:
                highest = salaries[0];
                lowest = salaries[0];
                for (i = 1; i < n; ++i) {
                    if (salaries[i] > highest) highest = salaries[i];
                    if (salaries[i] < lowest) lowest = salaries[i];
                }
                printf("\nHighest Salary = %d\n", highest);
                printf("Lowest Salary = %d\n", lowest);
                printf("\nSubmitted by: %s | Reg No: %s | Section: %s\n",
                        name, reg, section);
                printf("Challenge Day 17 – Code2Grow Program\n");
                break;

            case 4:
                total = 0;
                for (i = 0; i < n; ++i) total += salaries[i];
                average = (int)(total / n);
                above_count = 0;
                below_count = 0;
                for (i = 0; i < n; ++i) {
                    if (salaries[i] > average) above_count++;
                    else if (salaries[i] < average) below_count++;
                }
                printf("\nAverage Salary = %d\n", average);
                printf("Employees above average = %d\n", above_count);
                printf("Employees below average = %d\n", below_count);
                printf("\nSubmitted by: %s | Reg No: %s | Section: %s\n",
                        name, reg, section);
                printf("Challenge Day 17 – Code2Grow Program\n");
                break;

            case 5:
                for (i = 0; i < n; ++i) temp_copy[i] = salaries[i];

                for (i = 0; i < n - 1; ++i) {
                    for (j = 0; j < n - i - 1; ++j) {
                        if (temp_copy[j] > temp_copy[j + 1]) {
                            int t = temp_copy[j];
                            temp_copy[j] = temp_copy[j + 1];
                            temp_copy[j + 1] = t;
                        }
                    }
                }

                printf("\nSalaries (Sorted Ascending):\n");
                for (i = 0; i < n; ++i) printf("%d: %d\n", i + 1, temp_copy[i]);

                printf("\nSubmitted by: %s | Reg No: %s | Section: %s\n",
                        name, reg, section);
                printf("Challenge Day 17 – Code2Grow Program\n");
                break;

            case 6:
                printf("\nExiting program.\n");
                printf("\nSubmitted by: %s | Reg No: %s | Section: %s\n",
                        name, reg, section);
                printf("Challenge Day 17 – Code2Grow Program\n");
                break;

            default:
                printf("\nInvalid choice. Please choose 1-6.\n");
                break;
        }

    } while (choice != 6);

    return 0;
}
