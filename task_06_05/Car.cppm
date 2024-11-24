export module Car;
export import :Wheel;
export import :Exhaust;
export import :Engine;
export import :Driver;

export class Car {
public:
    Car() {};

    void Run() const {
        for (int i = 0; i < 4; ++i) {
            mWheels[i].Roll();
        }

        mExhaust.ReleaseGas();

        mEngine.MakeNoise();

        mDriver.Chill();
    }

private:
    Wheel mWheels[4];
    Exhaust mExhaust;
    Engine mEngine;
    Driver mDriver;
};