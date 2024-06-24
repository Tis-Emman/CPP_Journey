#include <iostream>

class Bird {
public:
    std::string name;
    int Health;
    int Atk;

    void enter() {
        std::cout << "Welcome to the Arena! \n";
        std::cout << "You chose Bird " << name << "\n";
    }
};

class Beast {
public:
    std::string name;
    int Health;
    int Atk;

    void enter() {
        std::cout << "Welcome to the Arena! \n";
        std::cout << "You chose Beast " << name << "\n";
    }
};

class Plant {
public:
    std::string name;
    int Health;
    int Atk;

    void enter() {
        std::cout << "Welcome to the Arena! \n";
        std::cout << "You chose Plant " << name << "\n";
    }
};

class Choose {
    Bird bird;
    Beast beast;
    Plant plant;

public:
    Choose() {
        bird.name = "Bird";
        beast.name = "Beast";
        plant.name = "Plant";

        bird.Health = 390;
        beast.Health = 420;
        plant.Health = 500;

        bird.Atk = 90;
        beast.Atk = 70;
        plant.Atk = 45;
    }

    void choose() {
        std::cout << "Choose your character: \n";
        std::cout << "********************\n";
        std::cout << "1. Bird \n";
        std::cout << "2. Beast \n";
        std::cout << "3. Plant \n";

        int character;
        std::cin >> character;

        switch (character) {
            case 1: 
                bird.enter();
                break;
            case 2:
                beast.enter();
                break;
            case 3:
                plant.enter();
                break;
            default:
                std::cout << "Invalid choice! \n";
        }
    }
};

int main() {
    Choose choose;
    choose.choose();

    return 0;
}
