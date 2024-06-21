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

class Construction_Worker{

    public:

    std::string name;
    int age;
    std::string place;
    std::string company;

    Construction_Worker(std::string name, int age, std::string place, std::string company){ //FUNCTION WITH PARAMETER
    this->name = name;
    this->age = age;
    this->company = company;
    this->place = place;


    };
};




int main(){

    Construction_Worker worker("PETER", 18, "Baliuag construction market", "EMEREN"); //This calls the function and ssign its arguments to call the paramete
        std::cout << worker.name  << '\n' << worker.age << '\n' << worker.company << '\n' << worker.place << '\n' << '\n'; //To print 
        
    

    Student student("STEVE", 17, 92.7);
        std::cout << student.name << '\n' << student.GWA << '\n'  << student.age << '\n' ;



    return 0;
}
