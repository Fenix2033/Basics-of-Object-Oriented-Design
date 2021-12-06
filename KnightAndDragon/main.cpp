#include <iostream>
#include "Knight.h"
#include "Potion.h"
#include "Armor.h"
#include "Weapon.h"
#include "Dragon.h"

int main() {
    Knight* artur = new Knight(100, 5, 5);
    Weapon* frost = new Weapon("Frost", 10);
    Armor* iron = new Armor("Iron", 25, 10);
    Potion* potion = new Potion(20);
    Dragon* red = new Dragon(15);

    artur->takeArmor(iron);
    artur->takeWeapon(frost);
    artur->takePotion(potion);
    artur->takePotion(potion);
    artur->takeDamage(red->getDamageAllHead());
    artur->takeDamage(red->getDamageAllHead());
    red->takeDamage(artur->getDamage(), 0);
    artur->drinkPotion();
    artur->printInfo();

    red->printInfo();


    delete artur;
    delete frost;
    delete iron;
    return 0;
}
