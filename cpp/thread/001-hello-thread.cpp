#include <iostream>
#include <thread>

int main()
{
	std::thread t
	(
		[]
		{
			std::cout << "Hello thread world!" << std::endl;
		}
	);
	t.join(); // joinしないとクラッシュする
}
