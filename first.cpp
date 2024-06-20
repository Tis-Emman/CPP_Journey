#include <iostream>

int main(){

    int x = 50;
    int y = 25;

    int add = x + y;
    int subtract = x - y;
    int multiply = x * y;
    int divide = x / y;

    std::string company = "EMEREN";
    std::string doing = "Refrigeration and Aircon Services";

    const float PI = 3.14;
    char grade = 'A';
    char currency = 'P';
    const float GRAVITY = -9.14;
    const std::string MEASUREMENT = " meters per second";


    bool employment_status = true;

    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    



    int price;
    int tax = 10;
    int total_tax = price;
    std::string favfood;
    std:: cout << "What is your favorite food? " << '\n';
    std::cin >> favfood;
    std::cout << "Your favorite food is " << favfood << '\n';
    std::cout << "If your favorite food is " << favfood << ", then what do you think is the desired price?" << '\n';
    std::cin >> price;
    std::cout << "The desired price is " << price << " without the tax, then it's " << price + tax;


    /*


    std::cout << "The gravity pulls an object for about " << GRAVITY << MEASUREMENT << '\n' ;
    std::cout << "The value of PI is " << PI << '\n';
    

    std::cout << "The first value is " << x << '\n';
    std::cout << "The second value is " << y << '\n' << '\n';


    std::cout << "When we add both values, it equals to: " << add << '\n';
    std::cout << "When we subtract both values, it equals to: " << subtract << '\n';
    std::cout << "When we mulitply both values, it equals to: " << multiply << '\n';
    std::cout << "When we divide both values, it equals to: " << divide << '\n' ;

    


    //std::cout << "When we multiply, the total value is " << multiply;

    return 0;
    */
}