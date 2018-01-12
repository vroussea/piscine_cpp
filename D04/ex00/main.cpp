#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Nerd.hpp"

int main()
{
    Sorcerer    robert("Robert", "the Magnificent");
    Victim      jim("Jimmy");
    Peon        joe("Joe");
    Victim      *alphonse = new Peon("Alphonse");
    Nerd        jack("Jack");
    Victim      *jack2 = new Nerd(jack);
    std::cout << robert << jim << joe << *alphonse << jack << *jack2;
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(*alphonse);
    robert.polymorph(jack);
    robert.polymorph(*jack2);
    delete alphonse;
    delete jack2;
    return 0;
}