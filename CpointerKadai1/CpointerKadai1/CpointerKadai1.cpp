
#include <iostream>
#include <memory>

class MyClass final
{
	public: 
	MyClass() {
			std::cout << "生成" << std::endl; 
	}

	public: 
	~MyClass() {
		std::cout << "破棄" << std::endl; 
	}

    
};
int main()
{
	{
	std::unique_ptr<MyClass> a = std::make_unique<MyClass>();
	
	}
	return 0;
}

