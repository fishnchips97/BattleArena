// Erik Fisher
// CS 11 section 5569
// 3/27/2016
// Dave Harden
// a8_1 and a8_2

#include <iostream>
#include <ctime>
#include <cstdlib>

#include "creature.h"
#include "human.h"
#include "demon.h"
#include "elf.h"
#include "cyberdemon.h"
#include "balrog.h"
using namespace cs_creature;
using namespace std;

void battleArena(creature &creature1, creature& creature2);

int main() {
    srand((time(0)));
    
    elf e1(50,50);
    balrog b1(50,50);
    battleArena(e1, b1);
    
    balrog b2(15,50);
    cyberdemon c1(15,50);
    battleArena(b2, c1);
    
    
    cyberdemon c2(20, 15);
    human h1(20, 15);
    battleArena(c2, h1);
    
    human h2(20, 10);
    human h3(10, 20);
    battleArena(h2, h3);
    
    return 0;
    
}

void battleArena(creature &creature1, creature& creature2) {
    
    cout << "*Battle music plays*" << endl;
    cout << "(1) " << creature1.getSpecies() << " | Strength: " << creature1.getStrength() <<
    " hp: " << creature1.getHitpoints() << endl;
    cout << "(2) " << creature2.getSpecies() << " | Strength: " << creature2.getStrength() <<
    " hp: " << creature2.getHitpoints() << endl << endl;
    
    do {
        creature2.setHitpoints( creature2.getHitpoints() - creature1.getDamage() );
        creature1.setHitpoints( creature1.getHitpoints() - creature2.getDamage() );
        
    } while (creature1.getHitpoints() > 0 && creature2.getHitpoints() > 0);
    
    if (creature1.getHitpoints() <= 0 && creature2.getHitpoints() <= 0) {
        cout << endl << "The battle ends in a tie!";
    } else if (creature1.getHitpoints() > 0) {
        cout << endl << "The " << creature1.getSpecies() << " (1) is the victor!";
    } else {
        cout << endl << "The " << creature2.getSpecies() << " (2) is the victor!";
    }
    
    cout << endl << endl;
}


/* Example Output 


 *Battle music plays*
 (1) elf | Strength: 50 hp: 50
 (2) balrog | Strength: 50 hp: 50
 
 The elf attacks for 21 points!
 Magical attack inflicts 21 additional damage points!
 The balrog attacks for 23 points!
 Balrog speed attack inflicts 2 additional damage points!
 The elf attacks for 2 points!
 The balrog attacks for 2 points!
 Balrog speed attack inflicts 46 additional damage points!
 
 The balrog (2) is the victor!
 
 *Battle music plays*
 (1) balrog | Strength: 15 hp: 50
 (2) cyberdemon | Strength: 15 hp: 50
 
 The balrog attacks for 9 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 15 additional damage points!
 The cyberdemon attacks for 14 points!
 
 The balrog (1) is the victor!
 
 *Battle music plays*
 (1) cyberdemon | Strength: 20 hp: 15
 (2) human | Strength: 20 hp: 15
 
 The cyberdemon attacks for 11 points!
 The human attacks for 14 points!
 The cyberdemon attacks for 13 points!
 Demonic attack inflicts 50 additional damage points!
 The human attacks for 7 points!
 
 The battle ends in a tie!
 
 *Battle music plays*
 (1) human | Strength: 20 hp: 10
 (2) human | Strength: 10 hp: 20
 
 The human attacks for 18 points!
 The human attacks for 6 points!
 The human attacks for 11 points!
 The human attacks for 10 points!
 
 The battle ends in a tie!
 
 Program ended with exit code: 0
*/