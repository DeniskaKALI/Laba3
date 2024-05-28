    #ifndef PRODUCT_H
    #define PRODUCT_H

    #include <string>

    // Класс для товара
    class Product {
    private:
        double price;       // Цена товара
        int quantity;       // Количество единиц товара

    public:
        // Конструктор для инициализации объекта
        Product(double _price, int _quantity);

        // Функция для формирования строки с информацией об объекте
        std::string getInfoString() const;

        // Функция для вычисления общей стоимости товара
        double getTotalCost() const;
    };

    #endif // PRODUCT_H
