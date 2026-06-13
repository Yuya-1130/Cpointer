
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

    public:
	std::unique_ptr<MyClass> ptr_ = {};
	int value_ = 0;

};
int main()
{
	{
	std::unique_ptr<MyClass> a = std::make_unique<MyClass>();
	
	}
	return 0;
}

