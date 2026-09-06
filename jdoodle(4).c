#include<stdio.h>

int main() {
    char  studname[10];
    float studid,complabs,total_labs,quiz,assignment,project;
    printf("Enter your  name: ");
    scanf("%s",&studname);
    printf("\nEnter your  student id: ");
    scanf("%f",&studid);
    printf("\nEnter Number of labs completed: ");
    scanf("%f",&complabs);
    printf("\nEnter total number of labs: ");
    scanf("%f",&total_labs);
    printf("\nEnter your Quiz marks: ");
    scanf("%f",&quiz);
    printf("\nEnter your assignment marks: ");
    scanf("%f",&assignment);
    printf("\nEnter your project marks: ");
    scanf("%f",&project);
    float Lab_completion_perc=complabs/total_labs*100.0;
    float total_score=quiz+assignment+project;
    printf("\nYour name is %s",studname);
    printf("\nYour student id is %.0f",studid);
    printf("\nYour Your lab completion percentage is %.2f",Lab_completion_perc);
    printf("\nYour total academic score is %.0f",total_score);
    
    
    
    
    
    
}