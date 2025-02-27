#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void storeGrade(int n, int arr[2][n], char grades[]) {
    for (int i = 0; i < n; i++) {
        int marks = arr[1][i];
        grades[i] = (marks >= 80) ? 'A' : (marks >= 60) ? 'B' : (marks >= 40) ? 'C' : 'F';
    }
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    char grades[n];
    int arr[2][n]; 

    for (int i = 0; i < n; i++) { 
        printf("Enter the Roll and Marks of student %d: ", i + 1);
        scanf("%d%d", &arr[0][i], &arr[1][i]);
    }

    storeGrade(n, arr, grades);

    printf("Do you want to see the grades of the students? (y/n): ");
    char ch;
    scanf(" %c", &ch);

    if (tolower(ch) == 'y') {
        while (1) {
            char roll[5];
            printf("Enter the Roll of the student to see the grade (type 'exit' to quit): ");
            scanf("%s", roll);

            if (strcasecmp(roll, "exit") == 0) { 
                break;
            }

            int rollnum = atoi(roll);
            int found = 0;
            for (int i = 0; i < n && !found; i++) {
                if (arr[0][i] == rollnum) {
                    printf("The grade of the student roll:%d is: %c\n", rollnum, grades[i]);
                    found = 1;
                }
            }

            if (!found) {
                printf("Student with roll number %d not found.\n", rollnum);
            }
        }
    }

    return 0;
}