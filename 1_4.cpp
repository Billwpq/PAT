#include<stdio.h>

struct student_grade{
    char name[11];
    char id[11];
    int grade;
};

struct student_grade a[102];

int main(){
    int n=0,i=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%s %s %d",a[i].name,a[i].id,&a[i].grade);
        i++;
    }
    i--;
    int max=0,min=0;
    while(i>=0){
        if(a[max].grade<a[i].grade) max=i;
        if(a[min].grade>a[i].grade) min=i;
        i--;
    }
    printf("%s %s\n",a[max].name,a[max].id);
    printf("%s %s",a[min].name,a[min].id);
}