#ifndef BASE_H
#define BASE_H
#include <iostream>
#include <string>
using namespace std;

class Base {
private:
   int privB;
protected:
   int protB;
public:
   int publicB;
   Base( );
   virtual ~Base( );
   void print( );
   int getPrivB();
   int getPublicB();
   int getProtB();
};

#endif /* BASE_H */
