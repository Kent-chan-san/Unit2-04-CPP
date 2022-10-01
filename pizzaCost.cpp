// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 09 - 30 - 22
// This program calculates the price of pizza

#include <iostream>

int main() {
    double pizzaSize;
    double orderSize;
    const double HST = 13 / 100;

    double ingredientsAndToppings = 1.50 * pizzaSize;
    double laborCost = 2.00 * orderSize;
    double rentalCost = 2.25 * orderSize;
    double totalPrice = 1.50 * pizzaSize + 2.00 * orderSize + 2.25 * orderSize;

    std::cout << "How big would you like your pizza? (cm) ";
    std::cin >> pizzaSize;
    std::cout << "How many pizzas would you like? ", std::cin >> orderSize;

    std::cout << "Ingredients and toppings = $" << 1.50 * pizzaSize << std::endl;
    std::cout << "Labor cost = $" << 2.00 * orderSize << std::endl;
    std::cout << "Rental cost = $" << 2.25 * orderSize << std::endl;

    std::cout << totalPrice + (13/100 * (totalPrice));
}
