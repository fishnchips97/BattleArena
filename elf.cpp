//
//  elf.cpp
//  Assignment 8.1 & 8.2
//


#include "elf.h"
#include "creature.h"

namespace cs_creature {
    
    
    
    
    elf::elf() {
        
    }
    
    
    
    
    elf::elf(int newStrength, int newHitpoints) :
    creature(newStrength, newHitpoints){
        
    }
    

    std::string elf::getSpecies() const{
        return "elf";
    }
    
    
    
    
    
    
    int elf::getDamage() const{
        int damage = creature::getDamage();
        
        //std::cout << "The elf attacks for " << damage << " points!" << std::endl;
        
        if ((rand() % 2) == 0) {
            std::cout << "Magical attack inflicts " << damage << " additional damage points!" << std::endl;
            damage *= 2;
        }
        
        return damage;
    }
    
    
    
    
}