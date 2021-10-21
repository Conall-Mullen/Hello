#include <iostream>
#include <random>

int main(){

    int myNum;
    int myGuess;

    myNum = std::rand() % 10 + 1;

    std::cout << "What number am I thinking of?\n";
    std::cin >> myGuess;
    if(myGuess != myNum){
        std::cout << "Incorrect\n";
        std::cout << "The correct answer is " << myNum << "\n";
    } else {
        std::cout << "Correct!\n";
    }
}