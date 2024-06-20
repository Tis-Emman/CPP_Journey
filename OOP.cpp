#include <iostream>

class Dog{
    public:
        std::string name;
        std::string breed;
        int dog_age;

        void wakeup(){
            std::cout << "The dog wakes up! " << '\n';
        }

        void jump(){
            std::cout << "The dog jumps! " << '\n';;
        }

        void eat(){
            std::cout << "The dog eats " << '\n';;
        }

        void sleep(){
            std::cout << "The sleep! " << '\n'; ;
        }
};

int main(){

    Dog dog;
    
    std::cout << "Hello! this is the dog simulator" << '\n' << '\n';

    dog.name = "NATOY";
    dog.breed = "Golden Retriever";
    dog.dog_age = 14;

    std::cout << dog.name << '\n';
    std::cout << dog.breed << '\n';
    std::cout << dog.dog_age << '\n';
    
    dog.wakeup();
    dog.jump();
    dog.eat();
    dog.sleep();

    


    


    return 0;
}