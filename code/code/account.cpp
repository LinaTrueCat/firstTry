#include "account.h"

Npc::Npc(string n, int h, int x) : name(n), health(h), xp(x) {}

void Npc::talk(string textToSay) {
    cout << name << " says: " << textToSay << endl;
}

bool Npc::isAlive() {
    return health > 0;
}

void Npc::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

void Npc::showStatus() {
    cout << "NPC: " << name << " | Health: " << health << " | XP: " << xp << endl;
}
