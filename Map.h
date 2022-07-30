#include "settings.h"
#include "Player.h"
#include "Location.h"


class Map
{
private:
	Player player;
	Location location;

public:
	Map();

	void Update();
	void Draw();
};
