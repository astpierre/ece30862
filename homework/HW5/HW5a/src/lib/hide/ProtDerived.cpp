#include "ProtDerived.h"

ProtDerived::ProtDerived( ) { }
ProtDerived::~ProtDerived( ){ }
void ProtDerived::print( ) {
   cout << "ProtDerived" << endl;
   cout << "privB: " << Base::getPrivB() << endl; 
   cout << ", protB: " << protB;
   cout << ", publicB: " << publicB;
   cout << endl << endl;
}
