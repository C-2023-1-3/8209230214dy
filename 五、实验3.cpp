#include <iostream>
class Cuboid {
private:
    double length;
    double width;
    double height;

public:
    void setDimensions() {
        std::cout << "请输入长方柱的长、宽、高：" << std::endl;
        std::cin >> length >> width >> height;
    }

    double calculateVolume() {
        return length * width * height;
    }

    void displayVolume() {
        std::cout << "长方柱的体积为：" << calculateVolume() << std::endl;
    }
};

int main() {
    Cuboid cuboids[3];

    for (int i = 0; i < 3; i++) {
        std::cout << "请输入第" << i + 1 << "个长方柱的信息：" << std::endl;
        cuboids[i].setDimensions();
    }

    for (int i = 0; i < 3; i++) {
        std::cout << "第" << i + 1 << "个长方柱的体积为：" << std::endl;
        cuboids[i].displayVolume();
    }

    return 0;
}

