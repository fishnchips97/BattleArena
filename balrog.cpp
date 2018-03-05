//
//  balrog.cpp
//  Assignment 8.1 & 8.2
//


#include "balrog.h"
#include "creature.h"
#include "demon.h"


namespace cs_creature {
    
    
    balrog::balrog() {
        
    }
    
    
    
    
    balrog::balrog(int newStrength, int newHitpoints) :
    demon(newStrength, newHitpoints) {
        
    }
    
    
    
    
    
    std::string balrog::getSpecies() const{
        return "balrog";
    }
    
    
    
    
    
    
    int balrog::getDamage() const{
        int damage = 0, damage2 = 0, strength = 0;
        strength = getStrength();
        
        //std::cout << "The balrog ";
        damage = demon::getDamage();
        
        
        damage2 = (rand() % strength) + 1;
        std::cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << std::endl;
        damage += damage2;
        
        return damage;
    }
    
    
}