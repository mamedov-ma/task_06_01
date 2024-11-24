export module Single;

import <iostream>;

export void SingleFunction() {
    std::cout << "Hello from single function!" << std::endl;
}

export class SingleClass {
public:
    SingleClass() {
        std::cout << "Hello from single class!" << std::endl;
    }

    ~SingleClass() {
        std::cout << "Bye from single class!" << std::endl;
    }
};
