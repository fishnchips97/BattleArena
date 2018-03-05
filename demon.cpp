//
//  demon.cpp
//  Assignment 8.1 & 8.2
//


#include "demon.h"
#include "creature.h"

namespace cs_creature {
    
    
    
    demon::demon() {
        
    }
    
    
    
    
    demon::demon(int newStrength, int newHitpoints) :
    creature(newStrength, newHitpoints){
        
    }
    
    
    
    
    std::string demon::getSpecies() const {
        return "demon";
    }
    
    
    
    
    int demon::getDamage() const{
        int damage = 0;
        damage = creature::getDamage();
        
        //std::cout << "attacks for "<< damage << " points!";
        
        if (rand() % 4 == 0) {
            damage = damage + 50;
            std::cout << "Demonic attack inflicts 50 additional damage points!" << std::endl;
        }
        
        return damage;
        
        
        
    }
    
}