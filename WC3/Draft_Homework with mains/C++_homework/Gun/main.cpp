#include "Gun.h"

int main() {
    Gun gun = Gun("Beretta", 10 );
    
    std::cout << gun << std::endl;
    
    std::cout << "Attempting to shoot" << std::endl;
    try { 
        gun.shoot();
    } catch ( NotReady obj ) {
        std::cout << "Gun is not ready" << std::endl;
    } catch ( OutOfRounds obj ) {
        std::cout << "Out of Rounds" << std::endl ;
    }
    std::cout << gun << std::endl << std::endl;

    std::cout << "Attempting to shoot" << std::endl;
    gun.prepare();
    try { 
        gun.shoot();
    } catch ( NotReady obj ) {
        std::cout << "Gun is not ready" << std::endl;
    } catch ( OutOfRounds obj ) {
        std::cout << "Out of Rounds" << std::endl;
    }
    std::cout << gun << std::endl << std::endl;
    
    std::cout << "Attempting to shoot" << std::endl;
    gun.reload();
    gun.prepare();
    try { 
        gun.shoot();
    } catch ( NotReady obj ) {
        std::cout << "Gun is not ready" << std::endl;
    } catch ( OutOfRounds obj ) {
        std::cout << "Out of Rounds" << std::endl;
    }
    std::cout << gun << std::endl << std::endl;
    return 0;
}