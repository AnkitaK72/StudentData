
#include <stdio.h>
 
struct student{
    char    name[30];
    int     roll;
    float   percent;
};

int main()
{
    struct student  std;        //structure variable
    struct student  *ptr;       //pointer to student structure
     
    ptr= &std;                  //assigning value of structure variable
     
    printf("Enter details of student: ");
    printf("\nName ?:");       
    scanf("%s",ptr->name);
    printf("Roll No ?:");       
    scanf("%d",&ptr->roll);
    printf("Percentage ?:");   
    scanf("%f",&ptr->percent);
     
    printf("\nEntered details: ");
    printf("\nName:%s \nRollNo: %d \nPercentage: %.02f\n",ptr->name,ptr->roll,ptr->percent);

    return 0;
}