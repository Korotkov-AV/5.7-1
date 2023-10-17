// 5.7-1.cpp 

#include <iostream>
#include <vector>
#include <algorithm>



int main() {
	std::cout << "This program deletes all repetitive elements and sorts vector\n\n";

	std::vector<int> my_vector{ 1, 1, 2, 3, 4, 5, 0, -9, 1, 43, 4 };
	std::vector<int>::iterator i = my_vector.begin();

	while (i != my_vector.end())std::cout << *i++ << " ";

	i = my_vector.begin();
	std::vector<int>::iterator j = i + 1;

	while (i != my_vector.end()) {
		while (j != my_vector.end()) {

			if (i != j && *i == *j) my_vector.erase(j--);//РІРѕР·РјРѕР¶РЅРѕ СЃС‚РёСЂР°РµС‚ РїРѕРІС‚РѕСЂРµРЅРёСЏ Рё Р·Р°С…РѕРґРёС‚ РІ РЅРµСЃСѓС‰РµСЃС‚РІСѓСЋС‰РёР№ РІРµРєС‚РѕСЂ 
			j++;
		}
		i++;
		j = i;
	}

	i = my_vector.begin();

	std::sort(i, end(my_vector));

	while (i != my_vector.end())std::cout << std::endl << *i++ << " ";
}