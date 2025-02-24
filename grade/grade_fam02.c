#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void storeGrade(int n, int arr[2][n], char grades[]); // Function to store grades of students

int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    char grades[n];
    int arr[2][n]; // 0th row for roll and 1st row for marks

    for(int i=0; i<n; i++){  // Taking input of roll and marks of students
        printf("Enter the Roll and Marks of student %d: ", i+1);
        scanf("%d%d", &arr[0][i], &arr[1][i]);
    }

    storeGrade(n, arr, grades);

    printf("Do you want to see the grades of the students? (y/n): ");
    char ch;
    scanf(" %c", &ch);

    if(tolower(ch)=='y'){

        for(int i=0; ; i++){
            char roll[5];
            printf("Enter the Roll of the student to see the grade: ");
            scanf("%s", roll);

            if(tolower(roll[0]) == 'e' && tolower(roll[1]) == 'x' && tolower(roll[2]) == 'i' && tolower(roll[3]) == 't'){  // Exit condition
                return 0;
            }

            int rollnum = atoi(roll);
            for(int i=0; i<n; i++){  // Printing the grade of the student
                if(arr[0][i] == rollnum){
                    printf("The grade of the student roll:%d is: %c\n", rollnum, grades[i]);
                    break;  // Break the loop if the student is found
                }
            }
        }
    }
    return 0;
}

void storeGrade(int n, int arr[][n], char grades[]){
    for(int i=0; i<n; i++){  // Assigning grades to the students
        if(arr[1][i] >= 80){
            grades[i] = 'A';
        }else if(arr[1][i] >= 60){
            grades[i] = 'B';
    
        }else if(arr[1][i] >= 40){
            grades[i] = 'C';
    
        }else{
            grades[i] = 'F';
    
        }
    }

}
