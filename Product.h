    #ifndef PRODUCT_H
    #define PRODUCT_H

    #include <string>

    // ����� ��� ������
    class Product {
    private:
        double price;       // ���� ������
        int quantity;       // ���������� ������ ������

    public:
        // ����������� ��� ������������� �������
        Product(double _price, int _quantity);

        // ������� ��� ������������ ������ � ����������� �� �������
        std::string getInfoString() const;

        // ������� ��� ���������� ����� ��������� ������
        double getTotalCost() const;
    };

    #endif // PRODUCT_H
