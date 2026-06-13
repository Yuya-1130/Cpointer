
#include <iostream>


void func(int) {
	std::cout << "intが呼ばれました" << std::endl;
	
}
void func(char*a) {
		std::cout << "char*が呼ばれました" << std::endl;
		if(a==nullptr){
			std::cout << "引数はnullptrです" << std::endl;
		}
}
int main()
{
	//プログラムの広義では0とNULLは別物だが、C++ではNULLは0に定義されている
	//そのためfunc(NULL)を呼ぶとfunc(int)が呼ばれる
	func(nullptr);
		return 0;
}

