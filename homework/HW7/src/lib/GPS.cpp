#include <iostream>
#include "GPS.h"

GPS::GPS(int s) : size(s), x(0.0), y(0.0), idx(0) {
   obs = new Observer*[size];
}

GPS::~GPS( ) {
   delete obs;
}

GPS::subscribe(Observer * o) {
    if(this->idx == this->size-1) {
        std::cout << "ERROR: GPS::subscribe, observer array full!" << std::endl;
        return;
    } else {
        this->obs[idx] = o;
    }
    return;
}

GPS::update(double xx, double yy) {
    this->x = xx;
    this->y = yy;
    this->notify();
}

GPS::notify() {
    for(int i=0; i<=idx; i++) {
        this->obs[i]->notify(this->x, this->y);
    }
}
