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

		if (!cur.set(str)) {
			cur.printErrInfo();
			continue;
		}

		Pair result = runner(cur);
		std::cout << "һ����������: " << result.first << std::endl;
		std::cout << "��׼��������: " << result.second << std::endl;
		std::cout << std::endl;
	}

	return 0;
}