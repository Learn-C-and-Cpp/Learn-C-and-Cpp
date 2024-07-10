/**Ability for runtime polymorphism
 *
 */
#include <iostream>

class Instrument // abstract class
{
  public:
    virtual void makeSound() = 0; // pure virtual function
};

class Accordion : public Instrument
{
    void makeSound()
    {
        std::cout << "Accordion is playing... " << std::endl;
    }
};
class Piano : public Instrument
{
    void makeSound()
    {
        std::cout << "Piano is playing... " << std::endl;
    }
};
int main()
{
    Instrument *i1 = new Accordion();
   // i1->makeSound();
    Instrument *i2 = new Piano();
    //i2->makeSound();

    Instrument* instrument[2] = {i1, i2};
    for(int i = 0; i<2; i++)
    {
        instrument[i] ->makeSound();
    }

    return 0;
}