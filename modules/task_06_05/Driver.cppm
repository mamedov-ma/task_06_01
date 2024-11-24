export module Car:Driver;

import <iostream>;

export class Driver {
public:
    Driver() {};

    void Chill() const {
        std::cout << "Driver is chilling..." << std::endl;
    }
};