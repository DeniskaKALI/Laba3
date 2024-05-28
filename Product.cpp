#include "Product.h"
#include <sstream>
#include <iomanip>

// Конструктор для инициализации объекта
Product::Product(double _price, int _quantity) : price(_price), quantity(_quantity) {}

// Функция для формирования строки с информацией об объекте
std::string Product::getInfoString() const {
    std::ostringstream oss;
    oss << "Цена товара: " << std::fixed << price << ", Количество: " << quantity;
    return oss.str();
}

// Функция для вычисления общей стоимости товара
double Product::getTotalCost() const {
    return price * quantity;
}
