export module Group;

import <iostream>;

export
{
    void GroupFunction1() {
        std::cout << "Hello from group function 1!" << std::endl;
    }

    void GroupFunction2() {
        std::cout << "Hello from group function 2!" << std::endl;
    }

    void GroupFunction3() {
        std::cout << "Hello from group function 3!" << std::endl;
    }

    class GroupClass1 {
    public:
        GroupClass1() {
            std::cout << "Hello from group class 1!" << std::endl;
        }

        ~GroupClass1() {
            std::cout << "Bye from group class 1!" << std::endl;
        }
    };


    class GroupClass2 {
    public:
        GroupClass2() {
            std::cout << "Hello from group class 2!" << std::endl;
        }

        ~GroupClass2() {
            std::cout << "Bye from group class 2!" << std::endl;
        }
    };
}
