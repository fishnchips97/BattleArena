//
//  balrog.h
//  Assignment 8.1 & 8.2
//

#ifndef balrog_h
#define balrog_h

#include "creature.h"
#include "demon.h"
#include <string>

namespace cs_creature {
    
    class balrog : public demon {
    public:
        balrog();
        balrog(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;
    };
    
}

#endif /* balrog_h */
