#include "Pen.h"
#include "Paper.h"

int main() {
    Pen pen = Pen(10);
    Paper paper = Paper(10);

    pen.refill();
    std::cout << "Pen current capacity = " << pen.getInkAmount() << "/" << pen.getInkCapacity() << std::endl << std::endl;

    try {
        pen.write(paper, "Testing out of ink.");
        paper.show();
        std::cout << "Paper current capacity = " << paper.getSymbols() << "/" << paper.getMaxSymbols() << std::endl  << std::endl;
        paper.show();
    } catch ( OutOfInk obj ) {
        std::cout << "OutOfInk" << std::endl;
    } catch ( OutOfSpace obj ) {
        std::cout << "OutOfSpace" << std::endl;
    }
    
    paper.show();

    // try {
    //     pen.write(paper, "First.");
    //     paper.show();
    //     // std::cout << "Paper current capacity = " << paper.getSymbols() << "/" << paper.getMaxSymbols() << std::endl  << std::endl;
    //     paper.show();
    // } catch ( OutOfInk obj ) {
    //     std::cout << "OutOfInk" << std::endl;
    // } catch ( OutOfSpace obj ) {
    //     std::cout << "OutOfSpace" << std::endl;
    // }

    // try {
    //     pen.write(paper, "Second.");
    //     paper.show();
    //     // std::cout << "Second." << paper.getSymbols() << "/" << paper.getMaxSymbols() << std::endl  << std::endl;
    //     paper.show();
    // } catch ( OutOfInk obj ) {
    //     std::cout << "OutOfInk" << std::endl;
    // } catch ( OutOfSpace obj ) {
    //     std::cout << "OutOfSpace" << std::endl;
    // }

    // std::cout << "Pen current capacity = " << pen.getInkAmount() << "/" << pen.getInkCapacity() << std::endl;
    // std::cout << "Third." << paper.getSymbols() << "/" << paper.getMaxSymbols() << std::endl  << std::endl;
    // paper.show();




    return 0;
}