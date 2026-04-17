#include <iostream>
#include <string>

class Character {
private: 
    std::string name;
    int health;
    int attackPower;

public:

    Character(std::string n, int h, int ap){
        name = n;
        health = h;
        attackPower = ap;
    }

    virtual void attack() = 0;


    std::string getName(){ return name; }
    int getHealth(){ return health; }
    int getAttackPower(){ return attackPower; }

    void setHealth(int h){
        if(h > 0){
            health = h;
        }
    }
    
    void setAttackPower(int ap){
        if(ap > 0){
            attackPower = ap;
        }
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

        Warrior(std::string n, int h, int ap, int sp) : Character(n,h,ap) {
                shieldPower = sp; 
            }

        void attack(){
             std::cout << "Promise swings his sword!" << std::endl;
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

        void attack(){
            std::cout << "E shoots an arrow!" << std::endl;
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

         void attack(){
            std::cout << "Cold casts a spell!" << std::endl;
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

        w1.setHealth(150);
        w1.setAttackPower(-999);

        // Test getter - read values
        std::cout << "Updated Health: " << w1.getHealth() << std::endl;
        std::cout << "Attack Power: " << w1.getAttackPower() << std::endl;

        w1.displayinfo();
        a1.displayinfo();
        m1.displayinfo();
        w1.attack();
        a1.attack();
        m1.attack();
    
    return 0;
} 