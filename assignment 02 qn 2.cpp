#include <iostream>

class Bus {
public:
    Bus(int capacity) {
        this->capacity = capacity;
    }

    int getCapacity() {
        return capacity;
    }

private:
    int capacity;
};

int main() {
    int capacity;
    std::cout << "Enter the capacity of the bus: ";
    std::cin >> capacity;

    Bus bus(capacity);

    std::cout << "The bus can carry " << bus.getCapacity() << " children." << std::endl;

    return 0;
}

