
#include <iostream>

int main()
{
	//task 1

	setlocale(LC_ALL, "Rus");
	int a, b;
	std::cin >> a;
	std::cin >> b;
	std::cout << (((a + b) >= 10 && (a + b) <= 20) ? "true" : "false") << std::endl;


{
		//task 2

		const int c = 10, d = 7;
		std::cout << (((a == 10 && b == 10) || (a + b) == 10) ? "true" : "false") << std::endl;
	}

{
	//task 3
	std::cout << "Your numbers: ";
	for (int i = 1; i <= 50; i += 2) {
      std::cout << i;
	}
	std::cout << std::endl;


}

return 0;

}
