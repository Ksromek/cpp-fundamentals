#include <iostream>

constexpr size_t tab_size = 100;

int main() {
	int tab[tab_size];

	for (size_t i = 1; i < tab_size; i++) {
    if(i==1)
    tab[i] =i;
    else
    tab[i]=tab[i-1]+2;
	}

	for (size_t i = 1; i < tab_size; i++) {
		std::cout << tab[i] << "\n";
	}

	return 0;
}
