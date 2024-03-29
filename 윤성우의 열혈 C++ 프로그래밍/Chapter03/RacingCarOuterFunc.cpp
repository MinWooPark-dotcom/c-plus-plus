#include <iostream>
using namespace std;

namespace CAR_CONST
{
    enum
    {
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}

struct Car
{
    char gamerID[CAR_CONST::ID_LEN];
    int fuelGauge;
    int curSpeed;

    void ShowCarState(); // 상태 정보 출력
    void Accel(); // 액셀, 속도 증가
    void Break(); // 브레이크, 속도 감소
};

void Car::ShowCarState()
{
    cout << "Gamer ID: " << gamerID << endl;
    cout << "Fuel gauge: " << fuelGauge << "%" << endl;
    cout << "Current speed: " << curSpeed << "km/s" << endl;
}

void Car::Accel()
{
    if (fuelGauge <= 0)
        return;
    else
        fuelGauge -= CAR_CONST::FUEL_STEP;
    
    if ((curSpeed+CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
    {
        curSpeed = CAR_CONST::MAX_SPD;
        return;
    }

    curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
    if (curSpeed<CAR_CONST::BRK_STEP)
    {
        curSpeed = 0;
        return;
    }

    curSpeed -= CAR_CONST::BRK_STEP;
}

int main(void)
{
    Car run99 = {"run99", 100, 0};
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
    return 0;
}

/*
Gamer ID: run99
Fuel gauge: 98%
Current speed: 10km/s
Gamer ID: run99
Fuel gauge: 98%
Current speed: 0km/s
*/