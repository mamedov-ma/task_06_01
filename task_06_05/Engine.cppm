export module Car:Engine;

import <iostream>;

export class Engine {
public:
    Engine() {};

    void MakeNoise() const {
        std::cout << "Whroom whroom whroom..." << std::endl;
    }
};