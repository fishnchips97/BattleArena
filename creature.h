// creature.h
//


#ifndef creature_h
#define creature_h

#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>

namespace cs_creature {
    
    class creature {
    private:
        //int type;
        int strength;
        int hitpoints;
    public:
        creature();
        creature(int newStrength, int newHitpoints);
        virtual int getDamage() const;
        virtual std::string getSpecies() const = 0;    
        
        int getStrength() const;
        int getHitpoints() const;
        void setStrength(int streng);
        void setHitpoints(int hp);
        
        
    };
    
}

#endif /* creature_h */
