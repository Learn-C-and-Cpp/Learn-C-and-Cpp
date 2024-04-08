// struct: accessibility in class is public by default
// classes: accessibility in class is private by default


#include <iostream>

class Player
{
public:
	int x, y;
	int speed;

	void move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
		
	}
};

struct StructPlayer
{
//public:
	int x, y;
	int speed;

	void move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
		
	}
};


int main()
{
	Player player_a;
	Player player_b;

	player_a.move( 5, 1);
	player_b.move(1, -1);

	std::cin.get();
	return 0;
}
