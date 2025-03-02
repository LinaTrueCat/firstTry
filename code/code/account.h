#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
using namespace std;

class Npc {
private:
    string name;
    int health;
    int xp;

public:
    Npc(string n, int h, int x);
    void talk(string textToSay);
    bool isAlive();
    void takeDamage(int damage);
    void showStatus();
};

#endif // ACCOUNT_H
