#include <iostream>
#include "syanten.h"
#include "mahjong.h"

using Pair = std::pair<int, int>;

int main() {

    Syanten runner;
    std::cout << "��ʼ����ϣ�" << std::endl;

    Mahjong cur;
    std::string str;

    while (std::cout << "input: " && std::cin >> str) {
        cur = read(str);

        if (cur.errInfo != "") {
            std::cout << cur.errInfo << std::endl;
            continue;
        }

        Pair result = runner(cur.Hand);
        std::cout << "һ����������: " << result.first << std::endl;
        std::cout << "��׼��������: " << result.second << std::endl;
        std::cout << std::endl;
    }

    return 0;
}