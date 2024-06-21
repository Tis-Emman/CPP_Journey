#include <iostream>
#include <string>
#include <vector>






class Student{

 public:
 std::string name;
 int age;
 double GWA;

 Student(std::string name, int age, double GWA){
    this->name = name;
    this->age = age;
    this->GWA = GWA;

 };



};


int main(){

    

    Student student("Ronald", 17, 92.7);
        std::cout << student.name << '\n' << student.GWA << '\n'  << student.age << '\n' ;



    return 0;
}