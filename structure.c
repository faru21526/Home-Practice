#include<stdio.h>
#include<string.h>

struct student{
    int id;
    float cgpa;
    char name[20];
};

int main (){
    struct student s1;
    s1.id =241014080;
    s1.cgpa =3.87;
    strcpy(s1.name,"Jim");


    printf("Student name:%s\n",s1.name);
    printf("ID:%d\n",s1.id);
    printf("Cgpa:%f\n",s1.cgpa);


    struct student s2;
    s2.id=241014001;
    s2.cgpa=3.77;
    strcpy(s2.name,"Joty");

    printf("Student name:%s\n",s2.name);
    printf("ID:%d\n",s2.id);
    printf("Cgpa:%f\n",s2.cgpa);

    struct student s3;
    s3.id=233014166;
    s3.cgpa=3.98;
    strcpy(s3.name,"Fatema");

    printf("Student name:%s\n",s3.name);
    printf("ID:%d\n",s3.id);
    printf("Cgpa:%f\n",s3.cgpa);

    struct student s4;
    s4.id=242014040;
    s4.cgpa=3.88;
    strcpy(s4.name,"Ankon");

    printf("Student name:%s\n",s4.name);
    printf("ID:%d\n",s4.id);
    printf("Cgpa:%f\n",s4.cgpa);

     struct student s5;
    s5.id=241014020;
    s5.cgpa=3.98;
    strcpy(s5.name,"Zian");

    printf("Student name:%s\n",s5.name);
    printf("ID:%d\n",s5.id);
    printf("Cgpa:%f\n",s5.cgpa);

     struct student s6;
    s6.id=241014078;
    s6.cgpa=3.98;
    strcpy(s6.name,"Jahid");

    printf("Student name:%s\n",s6.name);
    printf("ID:%d\n",s6.id);
    printf("Cgpa:%f\n",s6.cgpa);

     struct student s7;
    s7.id=241014115;
    s7.cgpa=3.82;
    strcpy(s7.name,"Zinia");

    printf("Student name:%s\n",s7.name);
    printf("ID:%d\n",s7.id);
    printf("Cgpa:%f\n",s7.cgpa);

    struct student s8={241014070,3.76,"eush"};
    printf("Student name:%s\n",s8.name);
    printf("ID:%d\n",s8.id);
    printf("Cgpa:%f\n",s8.cgpa);











return 0;
}
