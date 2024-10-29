#include <SFML/Graphics.hpp>

int main() {
	
	// Создаем окно (500,500)
	sf::RenderWindow window(sf::VideoMode(500, 500), "Window");

	// Размеры ячеек
	int cellSize = 50;
	const int gridSize = 10;

	// Массив для хранения ячеек
	sf::RectangleShape cells[gridSize][gridSize];

	while (window.isOpen()) 
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color::White);

		for (int i = 0; i < gridSize; ++i)
		{
			for (int j = 0; j < gridSize; ++j)
			{
				cells[i][j].setSize(sf::Vector2f(cellSize - 2, cellSize - 2)); // Размер ячейки
				cells[i][j].setPosition(i * cellSize, j * cellSize);           // Позиция ячейки
				cells[i][j].setFillColor(sf::Color::White);                    // Цвет заливки ячеек
				cells[i][j].setOutlineColor(sf::Color::Black);                 // Цвет границы
				cells[i][j].setOutlineThickness(1);                            // Толщина границы
				
				if ((i < j) && ((i + j) % 2 != 0))
				{
					cells[i][j].setFillColor(sf::Color::Green);
				}

				window.draw(cells[i][j]);
			}
		}

		window.display();

	}
	return 0;
}