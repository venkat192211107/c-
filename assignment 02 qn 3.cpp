#include <iostream>

class PlasticSeller {
public:
    PlasticSeller() {
        costPricePerKg = 10;  // Cost price of 1 kg plastic in rupees
        sellingPricePerKg = 12;  // Selling price of 1 kg plastic in rupees
    }

    double calculateProfit() {
        double profit = sellingPricePerKg - costPricePerKg;
        return profit;
    }

private:
    double costPricePerKg;
    double sellingPricePerKg;
};

int main() {
    PlasticSeller kiran;

    double profit = kiran.calculateProfit();

    std::cout << "Kiran earned " << profit << " rupees when selling 1 kg of plastic." << std::endl;

    return 0;
}

