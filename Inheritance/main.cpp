#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include <time.h>

using namespace sf;

class Entity {
public :
	//생성자
	//왠만하면 클래스를 매개변수로 할 때 99.99%는 주소값으로 넘기자
	//메모리 용량을 줄일 수 있다. call by value를 피하기 위해서
	Entity(int life, int speed, RectangleShape* sprite)
		: life_(life), speed_(speed), sprite_(sprite)
	{

	}

	//소멸자
	~Entity() {};

	void move(float x, float y) {
		sprite_->move(x,y);
	}
	
	void eat() {

	}

	//getter
	int get_life(void) { return life_; }
	int get_speed(void) { return speed_; }
	RectangleShape get_sprite(void) { return *sprite_; }

	//setter
	void set_life(int val) { life_ = val; }
	void set_speed(int val) { speed_ = val; }
	void set_sprite(RectangleShape* val) { sprite_ = val; }

private:
	int life_;	//목숨
	int speed_;	//속도
	RectangleShape* sprite_;	
};

class Player : public Entity{
public :
	Player(int life, int speed, RectangleShape* sprite, int score)
		: Entity(life, speed, sprite), score_(score)
	{}

private:
	int score_;
};

class Enemy : public Entity{
public :
	Enemy(int life, int speed, RectangleShape* sprite, int life_time)
		: Entity(life, speed, sprite), life_time_(life_time)
	{}

private:
	int life_time_;

};

int main() {
	srand((unsigned int)time(NULL));

	RenderWindow window(VideoMode(1000, 800), "Sangsok"); //창만들기
	window.setFramerateLimit(60);	//부드럽게 움직이기

	RectangleShape p;
	p.setFillColor(Color::White);
	p.setPosition(100, 300);
	p.setSize(Vector2f(50, 50));

	RectangleShape e1;
	e1.setFillColor(Color::Red);
	e1.setSize(Vector2f(40,40));
	e1.setPosition(rand()%800, rand()%600);

	Entity* player = new Entity(3, 5, &p);

	Entity* enemy1 = new Entity(1, 3, &e1);

	while (window.isOpen()) {
		Event e;
		while (window.pollEvent(e))
		{
			//윈도우의 x를 눌렀을 때 창이 닫아지도록 
			if (e.type == Event::Closed)
				window.close();
		}

		int p_speed = player->get_speed();
		if (Keyboard::isKeyPressed(Keyboard::Right))
			player->move(p_speed, 0);
		if (Keyboard::isKeyPressed(Keyboard::Left))
			player->move(-p_speed, 0);
		if (Keyboard::isKeyPressed(Keyboard::Up))
			player->move(0, -p_speed);
		if (Keyboard::isKeyPressed(Keyboard::Down))
			player->move(0, p_speed);

		window.clear();

		window.draw(enemy1->get_sprite());
		window.draw(player->get_sprite());

		window.display();
	}

	return 0;
}