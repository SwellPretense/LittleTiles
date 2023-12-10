#ifndef ENT_HPP
#define ENT_HPP

class Ent
{
private:
    int x, y;

public:
    Ent(int x, int y);

    int getX() const;
    int getY() const;

    void setX(int x);
    void setY(int y);
    void setPosition(int x, int y);
};

#endif // ENT_HPP
