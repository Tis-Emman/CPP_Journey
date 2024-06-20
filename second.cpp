#include <iostream>


void desk(){
    std::string mon = "monitor";
    std::string speak = "speaker";
    bool status = true;
    int pi = 3.14;

    std::cout << mon << '\n' << speak << '\n' << status;
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




int main(){


  std::string wannaknows;
    std:: cout << "Do you want to know the desk setup?  Y/N" << '\n';
    std::cin >> wannaknows;
    

    if(wannaknows=="Y"){
        desk();
    }
    else if(wannaknows=="N"){
        doesnt_agree();

    }
    else{
        doesnt_recognize();
    }



   
}
