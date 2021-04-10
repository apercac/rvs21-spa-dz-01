#pragma once

#include <vector>

#include <SFML/Graphics.hpp>



class Cvijet
{
public:
	Cvijet(sf::RenderWindow* window);
	void genInnerCircle();
	void genOuterCircle();
	void genLine();
	void genPetals();
	void draw();

private:
	sf::CircleShape innerCircle;
	sf::CircleShape outerCircle;
	sf::RectangleShape line;
	std::vector<sf::CircleShape> petals;
	sf::RenderWindow* window;
	sf::Clock frameClock;
	
};

