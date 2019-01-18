// Notes from lecture 05
// Topics: virtual functions, objects as pointers/refferences

DOB *dp = new DOB(3,4,2020);    // Pointer on stack, pointing to heap
DOB dv(1,2,2020);               // Sitting on stack

// Polymorphism: the ability of an object to act like two types of objects
//      1. being referred to an object of one type
//      2. acting like the type of object it actually is

// Slide #44, the array p of object pointers
for(int i=0; i<4; i++){
    area += p[i]->getArea();
    std::std::cout << "area of poly's= "<<area<< '\n';
}

area += p[i]->getArea();
// When calling virtual function through an object or a pointer,
// it calls the method that is visible

// What function is called when functions are not private and not static?
// Polymorphism: pointer-->base obj-->go to the VFT and call whatever matches there
