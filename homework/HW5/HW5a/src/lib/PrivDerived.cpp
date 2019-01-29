#include "PrivDerived.h"

PrivDerived::PrivDerived( ) { }
PrivDerived::~PrivDerived( ){ }

void printPrivDerived( ) {
   cout << "PrivDerived" << endl;
   cout << "privB: " << getPrivBPrivDerived() << endl;
   cout << ", protB: " << getProtBPrivDerived() << endl;
   cout << ", publicB: " << getPublicBPrivDerived() << endl;
   cout << endl << endl;
}

int getPrivBPrivDerived() {
    return Base::getPrivB();
}

int getPublicBPrivDerived() {
    return Base::getPublicB();
}

int getProtBPrivDerived() {
    return Base::getProtB();
}
