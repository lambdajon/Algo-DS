#include <iostream>

class ParkingSystem
{
private:
  int maxBigSlots;
  int maxMediumSlots;
  int maxSmallSlots;

  int bigSlots = 0;
  int mediumSlots = 0;
  int smallSlots = 0;

public:
  ParkingSystem(int big, int medium, int small)
  {
    this->maxBigSlots = big;
    this->maxMediumSlots = medium;
    this->maxSmallSlots = small;
  }

  bool addCar(int carType)
  {
    switch (carType)
    {
    case 1:
      if (this->maxBigSlots >= (this->bigSlots + 1))
      {
        this->bigSlots++;
        return true;
      }
      break;
    case 2:
      if (this->maxMediumSlots >= (this->mediumSlots + 1))
      {
        this->mediumSlots++;
        return true;
      }
      break;
    case 3:
      if (this->maxSmallSlots >= (this->smallSlots + 1))
      {
        this->smallSlots++;
        return true;
      }
      break;
    default:
      return false;
      break;
      
    }
    return false;
  }
};

int main()
{
  ParkingSystem *parkingSystem = new ParkingSystem(1, 1, 0);
  parkingSystem->addCar(1); // return true because there is 1 available slot for a big car
  parkingSystem->addCar(2); // return true because there is 1 available slot for a medium car
  parkingSystem->addCar(3); // return false because there is no available slot for a small car
  parkingSystem->addCar(1);

  return 0;
}