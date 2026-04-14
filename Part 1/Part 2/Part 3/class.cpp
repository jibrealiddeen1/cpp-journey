#include <iostream>
#include <string>

class Character {
    public: 
    std::string name;
    int health;
    int attackPower;

    Character(std::string n, int h, int ap){
    name = n;
    health = h;
    attackPower = ap;
    }

    void displayinfo(){
    std::cout << "===== " << name << " =====" << std::endl;
    std::cout << "Health: " << health << std::endl;
    std::cout << "Attack Power: " << attackPower << std::endl; 
    }

};  

class Warrior : public Character {
    public:
        int shieldPower;

        Warrior(std::string n, int h, int ap, int sp)
            : Character(n,h,ap) {
                shieldPower = sp; 
            }

        void displayinfo(){
            Character::displayinfo();
            std::cout << "Shield Power: " << shieldPower << std::endl;
            std::cout << "\n";
        }
};


class Archer : public Character {
    public:
        int arrowDamage;

        Archer(std::string n, int h, int ap, int ard)
        : Character(n,h,ap) {
            arrowDamage = ard; 
        }

         void displayinfo(){
            Character::displayinfo();
            std::cout << "Arrow Damage: " << arrowDamage << std::endl;
            std::cout << "\n";
         }
}; 


class Mage : public Character {
    public:
        int magicPower;

        Mage(std::string n, int h, int ap, int mp)
        : Character(n,h,ap) {
            magicPower = mp;
        }

         void displayinfo(){
            Character::displayinfo();
            std::cout << "Magic power: " << magicPower << std::endl;
            std::cout << "\n";
         }
}; 

int main(){
    Warrior w1("Promise", 100, 75, 100);
    Archer a1("E", 200, 500, 250);
    Mage m1("Cold", 500, 650, 250);

    w1.displayinfo();
    a1.displayinfo();
    m1.displayinfo();
    
    return 0;
} 