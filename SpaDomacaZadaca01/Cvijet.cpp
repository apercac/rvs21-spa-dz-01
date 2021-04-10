#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow* window) 
{
	this->window = window;
	genInnerCircle();
	genOuterCircle();
	genLine();
	genPetals();
	
}

void Cvijet::genInnerCircle()
{
	innerCircle.setRadius(20);
	innerCircle.setFillColor(sf::Color::Cyan);
	innerCircle.setPosition(120,120);

}

void Cvijet::genOuterCircle()
{
	outerCircle.setRadius(40);
	outerCircle.setFillColor(sf::Color::Blue);
	outerCircle.setPosition(100, 100);
}

void Cvijet::genLine()
{
	line.setSize(sf::Vector2f(300, 10));
	line.setPosition(130, 120);
	line.rotate(60);
	line.setFillColor(sf::Color::Magenta);
	line.setOutlineColor(sf::Color::Blue);
}

void Cvijet::genPetals()
{
	sf::CircleShape petal1(30);
	petal1.setFillColor(sf::Color::Blue);
	petal1.setPosition(110, 160);
	petals.push_back(petal1);

	sf::CircleShape petal2(30);
	petal2.setFillColor(sf::Color::Blue);
	petal2.setPosition(70, 120);
	petals.push_back(petal2);
	
	sf::CircleShape petal3(30);
	petal3.setFillColor(sf::Color::Blue);
	petal3.setPosition(100, 70);
	petals.push_back(petal3);
	
	sf::CircleShape petal4(30);
	petal4.setFillColor(sf::Color::Blue);
	petal4.setPosition(150, 90);
	petals.push_back(petal4);
	
	sf::CircleShape petal5(30);
	petal5.setFillColor(sf::Color::Blue);
	petal5.setPosition(155, 135);
	petals.push_back(petal5);
	


}

void Cvijet::draw()
{
	window->draw(line);
	window->draw(outerCircle);
	

	for (unsigned i = 0; i < petals.size(); i++)
	{
		window->draw(petals.at(i));
	}


	sf::Time time = frameClock.getElapsedTime();
	if (time.asSeconds()>=3)
	{
		innerCircle.setRadius(20);
		frameClock.restart();

	}
	else if (time.asSeconds()>=1)
	{
		innerCircle.setRadius(24);
	}

	window->draw(innerCircle);



	
}
