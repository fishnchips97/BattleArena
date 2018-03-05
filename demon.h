//
//  demon.h
//  Assignment 8.1 & 8.2
//


#ifndef demon_h
#define demon_h

#include "creature.h"
#include <string>

namespace cs_creature {
    
    class demon : public creature {
    public:
        demon();
        demon(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;
        
    };
    
}

#endif /* demon_h */
