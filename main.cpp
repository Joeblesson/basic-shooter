#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML is cool!", sf::Style::Fullscreen);
    

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) window.close();
            if (event.key.code == sf::Keyboard::Escape) window.close(); 
            
        }
        //physics

        //render
        window.clear();
       // window.draw();
        window.display();
    }

    return 0;
}