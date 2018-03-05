//
//  elf.h
//  Assignment 8.1 & 8.2
//


#ifndef elf_h
#define elf_h

#include "creature.h"
#include <string>

namespace cs_creature {
    
    class elf : public creature {
    public:
        elf();
        elf(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;
    };
}

#endif /* elf_h */
