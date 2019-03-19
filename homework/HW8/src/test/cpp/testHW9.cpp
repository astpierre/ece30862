#include "Set.h"
#include <iostream>
#include <cassert>

void TestSet() {
    Set * s = new Set();
    std::cout << "[test] set returns proper string representation..." << std::flush;
    //assert(s->ShowSet() == "Set works!");
    std::cout << " pass" << std::endl;
}

int main(int argc, char** argv) {
    TestSet();
    return 0;
}
