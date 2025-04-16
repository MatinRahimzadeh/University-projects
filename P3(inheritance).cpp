/* This C++ program contain three classes "Person" and "Teacher" and "Student" which two
of them (Student and Teaccher) inherit from the "Person class and in the derived class we 
add two variable with the names "salary" and  "score_averageverage" which return us these
values in the end. */



#include <iostream>
using namespace std;

class Person {       /// Base class
    protected:       ///avoid access from out of the class(except the in the derived class)
        string name;
        int age;
    
             };

class Teacher :public Person{       /// Derived class
    public:
        int salary;
        int getsalary () {
            return salary;
                         }
                             };

class Student: public Person{      /// Derived class
    public:
        int score_average;
        int getAverage(){
            return score_average;
                        }  
                             };


int main (){
   Teacher jack;
   Student Alex;
   jack.salary = 1200;
   Alex.score_average = 18;
   cout<<"Teacher salary is "<<jack.salary<<"\n";
   cout<<"student score average is "<<Alex.score_average<<"\n";
           }