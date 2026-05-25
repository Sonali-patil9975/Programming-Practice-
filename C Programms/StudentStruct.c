/* Author: Sonali patil
   Date: 20-06-2024
   Description: this program student record management system using structure in c language.
   
*/
#include <stdio.h>
typedef struct {
    int RollNo;
    int Mark;
    long int Pin;
    long int PhoneNo;
    char Name[10];
    char perentsName[30];
    char schoolName[10];
    char Address[40];
} Student;

int main() {
    Student s1;
    Student *s = &s1;
    printf("please enter student details:\n");
    printf("RollNo:");
    scanf("%d", &s->RollNo);
    printf("Name:");
    scanf("%s", &s->Name);
  
    printf("Mark:");
    scanf("%d",&s->Mark);
    printf("PerentsName:");
    scanf("%s", &s->perentsName);
    printf("Address:");
    scanf("%s", &s->Address);
    printf("schoolName:");
    scanf("%s", &s->schoolName);
    printf("PhoneNo:");
    scanf("%ld", &s->PhoneNo);
    printf("Pin:");
    scanf("%ld", &s->Pin);
    
    printf("student details are:\n");
    printf("Name = %s\n", s->Name);
    printf("RollNo = %d\n",s->RollNo);
    printf("Mark = %d\n",s->Mark);
    printf("perentsName = %s\n",s->perentsName);
    printf("school = %s\n",s->schoolName);
    printf("Address = %s\n",s->Address);
    printf("Pin = %ld\n",s->Pin);    
    return 0;
  }