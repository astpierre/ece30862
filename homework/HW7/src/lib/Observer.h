#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
public:
   Observer( );
   virtual ~Observer( );
   virtual void notify(double, double)=0;
};

#endif /* OBSERVER_H */
