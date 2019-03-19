#include "Set.h"
#include <iostream>
#include <string>

Set::Set( unsigned int maxSize ) {
    numSlots = maxSize/32 + 1;
    slots = new unsigned int [numSlots];
    for(int i=0; i<numSlots; i++) {
        slots[i] &= 0x00000000;
    }
}

Set::~Set( ) {  }

void Set::add( unsigned int newMember ) {
    unsigned int newSlot = 0;
    newSlot = newMember / 32;
    unsigned int position = newMember % 31;
    slots[newSlot] |= (1<<(position));
}

Set Set::operator+( const unsigned int newMember ) {
    unsigned int setSize = getNumSlots();
    Set newSet = Set(setSize * 32);

    for(int i=0; i<numSlots; i++) {
        for(unsigned int j=0; j<32; j++) {
            if(slots[i] & (1<<j)) {
                newSet.add(j);
            }
        }
    }
    newSet.add(newMember);
    return newSet;
}

void Set::remove( unsigned int oldMember ) {
    unsigned int oldSlot = 0;
    oldSlot = oldMember / 32;
    unsigned int position = oldMember % 31;
    slots[oldSlot] &= (~(1<<(position)));
}

Set Set::operator-( const unsigned int oldMember ) {
    unsigned int setSize = getNumSlots();
    Set newSet = Set(setSize * 32);

    for(int i=0; i<numSlots; i++) {
        for(unsigned int j=0; j<32; j++) {
            if(slots[i] & (1<<j)) {
                //if((j+32*(i+1)) != oldMember)
                newSet.add(j);
            }
        }
    }
    newSet.remove(oldMember);
    return newSet;
}

void Set::printSet( ) {
    for(int i=0; i<numSlots; i++) {
        for(unsigned int j=0; j<32; j++) {
            if(slots[i] & (1<<j)) {
                std::cout << j << " ";
            }
        }
    }
    std::cout << " " << std::endl;
}

unsigned int Set::getNumSlots( ) {
    return numSlots;
}
