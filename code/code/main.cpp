#include <iostream>
#include "account.h"
using namespace std;

int main() {
    Npc npc1("John", 100, 50);
    Npc npc2("Alice", 120, 75);

    npc1.talk("Hello!");
    npc2.talk("Hi there!");

    npc1.showStatus();
    npc2.showStatus();

    npc1.takeDamage(30);
    npc1.showStatus();

    return 0;
}
