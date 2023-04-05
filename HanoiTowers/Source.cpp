#include <iostream>


int HanoiTowers(int n)
{
	if (n == 1) return 1;
	return HanoiTowers(n - 1) * 2 + 1;
}

int main()
{
	int n = 0;
	std::cin >> n;
	std::cout << HanoiTowers(n);
	return 0;
}