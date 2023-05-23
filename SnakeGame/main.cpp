#include <SFML/Graphics.hpp>
#include <time.h> //time()
#include <stdlib.h> //srand(), rand()

using namespace sf;

int main() {
	srand(time(NULL));
	RenderWindow window(VideoMode(630, 480), "SnakeGame"); //창만들기
	//1초 동안 처리하는 횟수를 60으로 제한
	//Frame Per Second를 60으로 조절
	window.setFramerateLimit(60);

	RectangleShape snake;
	snake.setFillColor(Color::White);
	snake.setPosition(100, 300);
	snake.setSize(Vector2f(50,50));

	RectangleShape apple;
	apple.setFillColor(Color::Red);
	//640-50 인 이유는 사과가 화면 밖에 벗어나지 못하게 하기 위함
	apple.setPosition(rand()%(640-50), rand()%(480-50));
	apple.setSize(Vector2f(50, 50));

	
	while (window.isOpen()) {
		Event e;
		while (window.pollEvent(e))
		{
			//윈도우의 x를 눌렀을 때 창이 닫아지도록 
			if (e.type == Event::Closed)
				window.close();
		}

		if (Keyboard::isKeyPressed(Keyboard::Right))
			snake.move(5, 0);
		if (Keyboard::isKeyPressed(Keyboard::Left))
			snake.move(-5, 0);
		if (Keyboard::isKeyPressed(Keyboard::Up))
			snake.move(0, -5);
		if (Keyboard::isKeyPressed(Keyboard::Down))
			snake.move(0, 5);

		//뱀이 사과를 먹었을 때, 
		if (snake.getGlobalBounds().intersects(apple.getGlobalBounds())) {
			apple.setPosition(rand() % (640 - 50), rand() % (480 - 50));
		}

		window.clear();

		window.draw(snake);
		window.draw(apple);  //draw늦게할수록 더 위에 있다. 

		window.display();
	}

	return 0;
}