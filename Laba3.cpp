#include <iostream>
#include "Product.h"

int main() {
    setlocale(LC_ALL, "ru");
    double price;
    int quantity;

    // Ввод данных о товаре
    std::cout << "Введите цену товара: ";
    std::cin >> price;
    std::cout << "Введите количество единиц товара: ";
    std::cin >> quantity;

    // Создание объекта товара
    Product product(price, quantity);

    // Вывод информации о товаре и общей стоимости
    std::cout << product.getInfoString() << std::endl;
    std::cout << "Общая стоимость товара: " << product.getTotalCost() << std::endl;

    return 0;
}
