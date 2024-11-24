export module Car:Exhaust;

import <iostream>;

export class Exhaust {
public:
    Exhaust() {};

    void ReleaseGas() const {
        std::cout << "Releasing a gas..." << std::endl;
    }
};