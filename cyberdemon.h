//
//  cyberdemon.h
//  Assignment 8.1 & 8.2
//

#ifndef cyberdemon_h
#define cyberdemon_h

#include "creature.h"
#include "demon.h"
#include <string>

namespace cs_creature {
    
    class cyberdemon : public demon {
    public:
        cyberdemon();
        cyberdemon(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        
    };
}

#endif /* cyberdemon_h */
