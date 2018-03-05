//
//  human.cpp
//  Assignment 8.1 & 8.2
//


#include "human.h"
#include "creature.h"

namespace cs_creature {
    
    
    
    human::human() {
        
    }
    
    
    
    
    human::human(int newStrength, int newHitpoints) :
    creature(newStrength, newHitpoints){
        
    }
    
    
    
    
    std::string human::getSpecies() const{
        return "human";
    }
    
    
    
    
    
    
    
    
}