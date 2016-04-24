#include "Shot.h"
#include <cmath>

namespace dxshoot {


Shot::Shot(Vector2 pos, float s, float a)
	: Character("bullet_test.png")
{
	position = pos;
	velocity = Vector2::polar(s, a);
}


Shot::~Shot()
{
	Character::~Character();
}

void Shot::update()
{
	position += velocity;
}

bool Shot::canDelete()
{
	return position.x > 480;
}

}