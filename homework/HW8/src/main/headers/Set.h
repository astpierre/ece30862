#ifndef SET_H
#define SET_H
#include <iostream>
#include <string>

class Set {
public:
    Set( unsigned int );
    virtual ~Set( );

    void add( unsigned int );
    Set operator+( const unsigned int );

    void remove( unsigned int );
    Set operator-( const unsigned int );

    Set operator&( const Set );

    void printSet( );
    unsigned int getNumSlots( );

    unsigned int * slots;
    unsigned int numSlots;
    unsigned int numElements;
};

#endif /* SET_H */
