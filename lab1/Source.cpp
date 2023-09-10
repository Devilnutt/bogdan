#include <iostream>

int main() {
	double a, b, c, Answer1, Answer2, D;
	std::cout << "A:" && std::cin >> a && std::cout << "B:" && std::cin >> b && std::cout << "C:" && std::cin >> c;
	D = pow(b, 2) - 4 * a * c;
	Answer1 = (-1 * b + sqrt(D)) / (2 * a);
	Answer2 = (-1 * b - sqrt(D)) / (2 * a);
	if (D > 0) {
		std::cout << "Answer: " << Answer1 << ";" << Answer2;
	}
	else if (D < 0) {
		std::cout << "No answers in R";
	}
	else if (D == 0) {
		std::cout << "Answer: " << Answer1;
	}
	return 0;
}