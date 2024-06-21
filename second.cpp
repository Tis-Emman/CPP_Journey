#include <iostream>
#include <string>



class Living_Things: public Cat, public Person{


    void doings(){
        std::cout << "They eat, sleep, do some things, play, have fun with their lives";
    }

};

class Non_Living_Things: public Place, public Wind{


};

class Cat{

public:

std::string name;
int age;
std::string breed;
std::string crawl;


void wakeup(){
    std::cout << "The cat wakes up! \n";
    
}
void run(){
    std::cout << "The cat runs! \n";
}

void jump(){
    std::cout <<  "The cat jumps! \n";
}

void eats(){
    std::cout << "the cat eats! \n";
}

void meows(){
    std::cout << "The cat meows \n";

}

void sleep(){
    std::cout << "The cat sleeps.. \n";
}
};

class Person{
        public:

        std::string name;
        bool live = true;
        std::string status;
        std::string run;

    };

class Wind{
    public:
    double speed;
    std::string air_name = "Hanging Habagat";
    int velocity = 24;

    void blows(){
        std::cout<< "The wind blows through your ears";

    }

    void feels(){
        std::cout << "You feel the air across your body";
    }


};

class Place{

    public:
    std::string place1 = "Batangas";
    std::string Resort = "Shercon Batangas";
    double time_of_arrival = 9.00;


};

/*
void proceed(){
    std::cout << "Welcome again to Mcdonalds!" << '\n';
    std::string meals = "Mcjoy, Mcburger, Mcfries";
    std::string drinks = "Sundae, Mcfloat, Coke, Sprite";
    std::cout << "WE have " << meals << " and " << drinks;






}

void brake(){
    std::cout << "Exited";
}
*/

int main(){

Person person;

person.live = "The person is living", person;
person.run = "The person is running for the elective mayor candidate at Pampanga";


    
    Cat cat;
    
    cat.age = 21;
    cat.name = "Muningi";
    cat.breed = "Silver_Cat";



    
    std::cout << "Hello! This is a simple Object Oriented Cat Simulator by Emman \n";
    
    
    std::cout << "CHOICES are jump, wakeup, sleep, eat, meow\n";
    std::string what_to_do;
    std::cout << "What do you want to do with the cat? \n";
    std::cin >> what_to_do;

    if(what_to_do=="wakeup"){
        cat.wakeup();
        
    }
    else if(what_to_do=="jump"){
        cat.jump();
    } else if(what_to_do=="sleep"){
        cat.sleep();
    } else if(what_to_do=="eat"){
        cat.eats();
    } else if(what_to_do=="meow"){
        cat.meows();
    }
    else{
        std::cout << "Not recognized! ";
    }

    /*
    std::string company;
    std::string welcome;
    std::cout << "welcome to  Jubilee! " << "Do you want to proceed? Y/N" << '\n';
    std::cin >> company;

    if(company=="Y"){
        proceed();
        

    }

    else if(company != "Y" || company == "N"){
        brake();

}

    else{
        std::cout << "That is not an argument!"; 
    }
    return 0;

}


/*

void desk(int monitor); // Declare function with an int parameter
void doesnt_agree();
void doesnt_recognize();

    int monitor = 1;

    std::string wannaknows;
    std::cout << "Do you want to know the desk setup? Y/N" << '\n';
    std::cin >> wannaknows;
    
    if(wannaknows == "Y"){
        desk(monitor); // Use the existing desk function
    }
    else if(wannaknows == "N"){
        doesnt_agree();
    }
    else{
        doesnt_recognize();
    }
    

void desk(int monitor){ // Define the function that takes an int argument
    std::string mon = "monitor";
    std::string speak = "speaker";
    bool status = true;
    double pi = 3.14; // Corrected the type to double for pi
    std::cout << "quantity of monitor: " << monitor << '\n';
    std::cout << mon << '\n' << speak << '\n' << status << '\n';
}

void doesnt_agree(){
    std::string doesnt_agree1;
    std::cout << "Alright but why? ";
    std::cin >> doesnt_agree1;
    std::cout << "if " << doesnt_agree1   << " is your reason, then its accepted! ";


}

void doesnt_recognize(){
    std::cout << "That is not a argument, you stupidista!";




}
*/
return 0;
}


