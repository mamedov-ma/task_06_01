export module Car:Wheel;

import <iostream>;

export class Wheel {
public:
    Wheel() {};

    void Roll() const {
        std::cout << "Wheel is rolling..." << std::endl;
    }
};