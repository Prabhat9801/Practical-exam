#include<stdio.h>
#include<string.h>
struct student {
    int roll;
    char name[50];
    float marks[5];

};
int main(){
struct student s;
float total=0;
float avg;
int i;
printf("The roll number = ");
scanf("%d",&s.roll);
printf("The Student name = ");
scanf("%s",&s.name);
printf("The stduent marks in 5 subjects  = ");
for(i=0;i<5;i++){
    scanf("%d",&s.marks[i]);
    total=total+s.marks[i];
    avg=(float) total/5;


}
printf("Student roll number = %d\n",s.roll);
printf("Student Name = %s\n",s.name);
printf("Student total marks = %f\n",total);
printf("Student avg marks = %f\n",avg);
return 0;
}