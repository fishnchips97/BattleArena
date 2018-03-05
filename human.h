//
//  human.h
//  Assignment 8.1 & 8.2
//

#ifndef human_h
#define human_h

#include "creature.h"
#include <string>

namespace cs_creature {
    
    class human : public creature {
    public:
        human();
        human(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        
    };
}

#endif /* human_h */
