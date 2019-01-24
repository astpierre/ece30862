#include "PrivDerived.h"

PrivDerived::PrivDerived( ) { }
PrivDerived::~PrivDerived( ){ }

void print( ) {
   cout << "PrivDerived" << endl;
   cout << "privB: " << Base::getPrivB() << endl;
   cout << ", protB: " << Base::getProtB() << endl;
   cout << ", publicB: " << Base::getPublicB() << endl; 
   cout << endl << endl;
}
