#include <iostream>
#include <time.h>

int main() {
    std::srand(time(NULL));
    
    for (int i = 1; i <= 100; i++) {
        std::cout << "Random " << i << " : " << std::rand()%100+1 << std::endl;
    }
}
