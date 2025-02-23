// input marks 
// find grade of specific roll

#include<stdio.h>

void grade(int marks); // checking grade 

int find_roll(int n,int *roll); // to find index of specific roll 


int main (){
        
        int n;
        printf("how many student : ");
        scanf("%d",&n);
        int roll[n];
        int marks[n];


        // to input roll and marks of all student 
        int i;
        for( i = 0; i < n;i++){

            printf("Enter student Roll no : ");
            scanf("%d",&roll[i]);
            printf("Enter marks of  Roll no %d : ",roll[i]);            
            scanf("%d",&marks[i]);

        }

    //    // to print all students grade 
    //     for(int i = 0; i < n;i++){

    //         printf("Roll = %d  Marks =  %d Grade = ", roll[i] , marks[i]);
    //         grade(marks[i]);
            

    //     }
        
        // to print grade of specific roll
        char c;
        printf("Do you want to know your grade ? Y/N : ");
        scanf(" %c",&c);

        if(c == 'Y' || c == 'y'){

            int x = find_roll(n,roll);

            printf("Roll = %d  Marks =  %d Grade = ", roll[x] , marks[x]);
            grade(marks[x]);
        }


return 0;
}

 // checking grade 
 
void grade(int marks){

    if( marks >= 80 && marks <= 100){

        printf("A+\n");
    }
    else if( marks >= 70 && marks <= 79){

        printf("A\n");
    }
    else if( marks >= 60 && marks <= 69){

        printf("A-\n");
    }
    else if( marks >= 50 && marks <= 59){

        printf("B\n");
    }
    else if( marks >= 40 && marks <= 49){

        printf("c\n");
    }
    else{

        printf("Fail\n");
    }
    
}

// to find index of specific roll 
int find_roll(int n,int *roll){

    int droll ;
    printf("What is your roll : ");
    scanf("%d",&droll);


    int x;

    for(x = 0; x < n;x++){

        if(droll == roll[x]){
            break;
        }

    }

    return x;
}
