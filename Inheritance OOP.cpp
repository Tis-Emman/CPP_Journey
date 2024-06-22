#include <iostream> 
using namespace std;

class Virus{
    public:

    std::string ssd = "sample";
    bool deadly = true;
    void spread(string B, string C){ //Parameter contains the variable
        std::cout <<"Spread fast";
        std::cout << C << B;
    }




};

class Bat : public Virus{
    public:

    void unique_behavior(){
    std::string behavior;
    string behavior = "Can contain the ";
    }
};

class Rabies : public Virus{
    public:

};

class Influenze : public Virus{

};

class Cholera : public Virus{

};

int main(){
    
Bat bat;
Rabies rabies;


std::cout << bat.deadly << '\n'; 
bat.spread("Lol", "AHHAHA"); //Argument contains what the variable has 


    return 0;
}