#ifndef MODEL_H
#define MODEL_H

#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

class Model {
    public:
        Model(sf::RenderWindow& w);
        void update(sf::RenderWindow& window, int mouse_x, int mouse_y);
        void draw();
        void handleKeyMovement(sf::Event &event)
        {
            switch(event.key.code){
                case sf::Keyboard::Escape:
                    window.close();
                    break;
            }
        }
        std::vector<sf::ConvexShape> staticShapes;
        sf::RenderWindow& window;
};

Model::Model(sf::RenderWindow& p_Window) : window(p_Window)
{
    
}

void Model::update(sf::RenderWindow &window, int mouse_x, int mouse_y){
    sf::Vector2f mouses = sf::Vector2f((float)mouse_x, (float)mouse_y);
 
}

void Model::draw(){
    
}

#endif // ! MODEL_H