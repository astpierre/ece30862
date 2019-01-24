#include "dPublic.h"

dPublic::dPublic( ) { }
dPublic::~dPublic( ){ }
void print( ) {
   cout << "dPublic" << endl;
   cout << "privB: " << dPublic::getPrivB() << endl;
   cout << ", protB: " << protB;
   cout << ", publicB: " << publicB;
   cout << endl << endl;
}
