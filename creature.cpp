// creature.cpp
//

#include "creature.h"


namespace cs_creature {
    
    
    
    
    
    creature::creature() {
        strength = 10;
        hitpoints = 10;
    } 
    
    
    
    
    creature::creature(int newStrength, int newHitpoints)
    {
        strength = newStrength;
        hitpoints = newHitpoints;
    }
    
    
    
    
    
    int creature::getDamage() const{
        
        int damage = 0;
        damage = (rand() % strength) + 1;
        
        std::cout << "The " << getSpecies() << " attacks for " << damage << " points!" << std::endl;
        return damage;
    }
    
    
    
    
    
    int creature::getStrength() const {
        return strength;
    }
    
    
    
    
    
    int creature::getHitpoints() const {
        return hitpoints;
    }
    
    
    
    
    
    void creature::setStrength(int streng) {
        strength = streng;
    }
    
    
    
    
    
    void creature::setHitpoints(int hp) {
        hitpoints = hp;
    }
    
    
}