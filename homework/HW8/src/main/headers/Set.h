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


    void printSet( );
    unsigned int getNumSlots( );

private:
    unsigned int * slots;
    unsigned int numSlots;
};

#endif /* SET_H */
