#include "src/lib/Base.h"
#include "src/lib/PrivDerived.h"
/*#include "src/lib/ProtDerived.h"
#include "src/lib/PublicDerived.h"
#include "src/lib/dPriv.h"
#include "src/lib/dProt.h"
#include "src/lib/dPublic.h"*/
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    Base* b = new Base( );
    PrivDerived* privd = new PrivDerived( );
    /*ProtDerived* protd = new ProtDerived( );
    PublicDerived* publicd = new PublicDerived( );
    dPriv* dpriv = new dPriv( );
    dProt* dprot = new dProt( );
    dPublic* dpublic = new dPublic( );*/

    cout << "b" << endl;
    cout << b->getPrivB() << endl;
    cout << b->getProtB() << endl;
    cout << b->publicB << endl;

    //cout << "privd" << endl;
    //cout << privd->getPrivB() << endl;
    //cout << privd->protB << endl;
    //cout << privd->publicB << endl;
/*
    cout << "protd" << endl;
    cout << protd->getPrivB() << endl;
    cout << protd->protB << endl;
    cout << protd->publicB << endl;

    cout << "publicd" << endl;
    cout << publicd->getPrivB() << endl;
    cout << publicd->protB << endl;
    cout << publicd->publicB << endl;

    cout << "dpriv" << endl;
    cout << dpriv->getPrivB() << endl;
    cout << dpriv->protB << endl;
    cout << dpriv->publicB << endl;

    cout << "dprot" << endl;
    cout << dprot->getPrivB() << endl;
    cout << dprot->protB << endl;
    cout << dprot->publicB << endl;

    cout << "dpublic" << endl;
    cout << dpublic->getPrivB() << endl;
    cout << dpublic->protB << endl;
    cout << dpublic->publicB << endl;
    */
    return 0;
}
