//
// Created by DeLife on 20.11.2026.
//

#include <iostream>
#include <ostream>

// C++ не дает сделать не првильное выражение.

int main() {
    std::cout << "x=5: 0<x<10 = 1, правильно = " << (5 > 0 && 5 < 10 ) << std::endl;
    std::cout << "x=-5: 0<x<10 = 1, правильно = " << (-5 > 0 && -5 < 10 ) << std::endl;
    return 0;
}
