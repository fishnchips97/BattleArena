//
//  cyberdemon.cpp
//  Assignment 8.1 & 8.2
//


#include "cyberdemon.h"
#include "creature.h"
#include "demon.h"

namespace cs_creature {
    
    
    
    cyberdemon::cyberdemon() {
        
    }
    
    
    
    
    cyberdemon::cyberdemon(int newStrength, int newHitpoints) :
    demon(newStrength, newHitpoints) {
        
    }
    
    
    
    std::string cyberdemon::getSpecies() const{
        return "cyberdemon";
    }
    
    
    
    
    
    
    
}