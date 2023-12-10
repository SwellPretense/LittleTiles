#include "Source.hpp"

Ent::Ent(int x, int y) : x(x), y(y) {}

int Ent::getX() const { return x; }
int Ent::getY() const { return y; }

void Ent::setX(int x) { this->x = x; }
void Ent::setY(int y) { this->y = y; }
void Ent::setPosition(int x, int y) { this->x = x; this->y = y; }
