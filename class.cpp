#include <iostream>
//    class vs object
//    access modifier-> public,protected,private
class FridgeProduct {
    public:
        // MEMBERS
        // properties
        int volume = 100; // L
        int power = 10;  // Watt  
        // method
        void on(){
            std::cout << "The fridge is ON";
        }
        void off(){
            std::cout << "The fridge is OFF";
        }
};

int main(){
    FridgeProduct f1;
    FridgeProduct f2;
    FridgeProduct f3;
    std::string x = "Hello";
    f1.power++;
    std::cout << "\n 1 volume: " << f1.volume << "\n";
    std::cout << "\n 1 power: " << f1.power << "\n";
    std::cout << "\n 2 volume: " << f2.volume << "\n";
    std::cout << "\n 2 power: " << f2.power << "\n";
    std::cout << "\n 3 volume: " << f3.volume << "\n";
    std::cout << "\n 3 power: " << f3.power << "\n";

    return 0;
}