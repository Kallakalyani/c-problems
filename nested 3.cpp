#include <iostream>

int main()
{
    for (int i = 0; i < 4; i++)
	{
		for ( int i = 1; i < 4; i++)
			for ( int i = 2; i < 4; i++)
        std::cout << "1 ";
        std::cout << "2";
        std::cout << "3";
    }
    std::cout << std::endl;
    return 0;
}
