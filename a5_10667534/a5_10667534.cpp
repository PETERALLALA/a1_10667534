#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct Student{
 string idNumber;
    string name;
    int age;
    int score;
    string gender;
    string grade;

};

int main()
{
Student student1;

cout<<"Please enter your ID number, Name , Age , Gender(M/F), and score respectively."<<endl;
cin>>student1.idNumber;
cin>>student1.name;
cin>>student1.age;
cin>>student1.gender;
cin>>student1.score;

Student student2;
cout<<"Please enter your ID number, Name , Age , Gender(M/F), and score respectively."<<endl;
cin>>student2.idNumber;
cin>>student2.name;
cin>>student2.age;
cin>>student2.gender;
cin>>student2.score;

Student student3;
 cout<<"Please enter your ID number, Name , Age , Gender(M/F), and score respectively."<<endl;
cin>>student3.idNumber;
cin>>student3.name;
cin>>student3.age;
cin>>student3.gender;
cin>>student3.score;

Student student4;
cout<<"Please enter your ID number, Name , Age , Gender(M/F), and score respectively."<<endl;
cin>>student4.idNumber;
cin>>student4.name;
cin>>student4.age;
cin>>student4.gender;
cin>>student4.score;

Student student5;
cout<<"Please enter your ID number, Name , Age , Gender(M/F), and score respectively."<<endl;
cin>>student5.idNumber;
cin>>student5.name;
cin>>student5.age;
cin>>student5.gender;
cin>>student5.score;
//GRADING FOR STUDENT1
 if(student1.score<=100 && student1.score>=80){

   s1.grade="A";
}
if(student1.score<=79 && student1.score>=70){

    s1.grade="B";
}
if(student1.score<=69 && student1.score>=60){

    s1.grade="C";
}
if(student1.score<=59 && student1.score>=50){

    s1.grade="D";
}
if(student1.score<=49 && student1.score>=40){

    s1.grade="E";
}
else{

    student1.grade="F";
}
//GRADING FOR STUDENT2
 if(student2.score<=100 && student2.score>=80){

   s1.grade="A";
}
if(student2.score<=79 && student2.score>=70){

    s2.grade="B";
}
if(student2.score<=69 && student2.score>=60){

    s2.grade="C";
}
if(student2.score<=59 && student2.score>=50){

    s2.grade="D";
}
if(student2.score<=49 && student2.score>=40){

    student2.grade="E";
}
else{

    student2.grade="F";
}
//GRADING FOR STUDENT 3
 if(student3.score<=100 && student3.score>=80){

   s3.grade="A";
}
if(student3.score<=79 && student3.score>=70){

    student3.grade="B";
}
if(student3.score<=69 && student3.score>=60){

    student3.grade="C";
}
if(student3.score<=59 && student3.score>=50){

    student3.grade="D";
}
if(student3.score<=49 && student3.score>=40){

    student3.grade="E";
}
else{

    student3.grade="F";
}
//GRADING FOR STUDENT 4
 if(s4.score<=100 && s4.score>=80){

   s4.grade="A";
}
if(s4.score<=79 && s4.score>=70){

    s4.grade="B";
}
if(s4.score<=69 && s4.score>=60){

    s4.grade="C";
}
if(s4.score<=59 && s4.score>=50){

    s4.grade="D";
}
if(s1.score<=49 && s1.score>=40){

    s4.grade="E";
}
else{

    s4.grade="F";
}
//GRADING FOR STUDENT 5
 if(student5.score<=100 && student5.score>=80){

   student5.grade="A";
}
if(student5.score<=79 && student5.score>=70){

    student5.grade="B";
}
if(student5.score<=69 && student5.score>=60){

    student5.grade="C";
}
if(student5.score<=59 && student5.score>=50){

    student5.grade="D";
}
if(student5.score<=49 && student5.score>=40){

    student5.grade="E";
}
else{

    student5.grade="F";
}




ofstream writer;
writer.open("report.txt");
writer<<"IDNUMBER"<<"          "<<"NAME"<<"          "<<"AGE" <<"          "<<"GENDER "<<"          "<<"SCORE "<<"          "<<"GRADE"<<endl;
writer<<"***************************************************************************************************************************************"<<endl;
writer<<student1.idNumber<<"          "<<student1.name<<"          "<<student1.age<<"          "<<student1.gender<<"          "<<student1.score<<"               "<<student1.grade<<endl;
writer<<student2.idNumber<<"          "<<student2.name<<"          "<<student2.age<<"          "<<student2.gender<<"          "<<student2.score<<"               "<<student2.grade<<endl;
writer<<student3.idNumber<<"          "<<student3.name<<"          "<<student3.age<<"          "<<student3.gender<<"          "<<student3.score<<"               "<<student3.grade<<endl;
writer<<student4.idNumber<<"          "<<student4.name<<"          "<<student4.age<<"          "<<student4.gender<<"          "<<student4.score<<"               "<<student4.grade<<endl;
writer<<student5.idNumber<<"          "<<student5.name<<"          "<<student5.age<<"          "<<student5.gender<<"          "<<student5.score<<"               "<<student5.grade<<endl;
writer<<"***************************************************************************************************************************************"<<endl;
writer<<"Average Age:"<<(s1.age+s2.age+s3.age+s4.age+s5.age)/5<<endl;
writer<<"Average Score:"<<(s1.score+s2.score+s3.score+s4.score+s5.score)/5;
writer.close();
return 0;
}

