#include "Source.hpp"

Ent::Ent(int x, int y)
{
	Ent::x = x, Ent::y = y;
}

Ent::~Ent()
{

}

void Ent::Move(int d)
{
	switch (d)
	{
	case 1:
		Ent::x = Ent::x, Ent::y = Ent::y + 1;
		break;
	case 2:
		Ent::x = Ent::x - 1, Ent::y = Ent::y;
		break;
	case 3:
		Ent::x = Ent::x, Ent::y = Ent::y - 1;
		break;
	case 4:
		Ent::x = Ent::x + 1, Ent::y = Ent::y;
		break;
	}
}

void Ent::Draw(SDL_Renderer* aRenderer)
{
	SDL_Rect rect;
	rect.x = Ent::x - (Ent::w / 2);
	rect.y = Ent::y - (Ent::h / 2);
	rect.w = Ent::w;
	rect.h = Ent::h;
	SDL_SetRenderDrawColor(aRenderer, Colors::sGREEN.r, Colors::sGREEN.g, Colors::sGREEN.b, Colors::sGREEN.a );
	SDL_RenderFillRect(aRenderer, &rect);
}