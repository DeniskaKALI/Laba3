#include "Product.h"
#include <sstream>
#include <iomanip>

// ����������� ��� ������������� �������
Product::Product(double _price, int _quantity) : price(_price), quantity(_quantity) {}

// ������� ��� ������������ ������ � ����������� �� �������
std::string Product::getInfoString() const {
    std::ostringstream oss;
    oss << "���� ������: " << std::fixed << price << ", ����������: " << quantity;
    return oss.str();
}

// ������� ��� ���������� ����� ��������� ������
double Product::getTotalCost() const {
    return price * quantity;
}
