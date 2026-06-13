
#include <iostream>
#include <memory>

class MyClass final
{
	public: 
	MyClass() {
        std::cout << "生成" << std::endl; 
	}

	~MyClass() {
		std::cout << "破棄" << std::endl; 
	}
public:
	std::weak_ptr<MyClass> ptr_ = {};
	//int value = 0;
    
};
int main()
{
	{
	std::shared_ptr<MyClass> a = std::make_shared<MyClass>();
	std::shared_ptr<MyClass> b = std::make_shared<MyClass>();
	 
	  a->ptr_ = b;
	  b->ptr_ = a;

	 // std::shared_ptr<MyClass> temp = a->ptr_.lock();

	 // temp->value = 1;
	 
	}
	return 0;
}

