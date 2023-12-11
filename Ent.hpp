#ifndef ENT_HPP
#define ENT_HPP

class Ent
{
private:
    int x, y;
    int w = 32, h = 32;

public:
    Ent(int x, int y);
    ~Ent();

    void Move(int d);
    void Draw(SDL_Renderer* aRenderer);
};

#endif // ENT_HPP
