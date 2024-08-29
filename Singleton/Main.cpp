#include <iostream>
#include <thread>
#include <mutex>

using namespace std;



class Singleton
{
private:
	static Singleton* instance;
	static mutex mtx;

	Singleton() {}

	int data = 0;

public:
	static Singleton* getInstance()
	{
		if (instance == nullptr)
		{
			mtx.lock();
			if (instance == nullptr)
			{
				cout << "creation singleton...\n";
				instance = new Singleton;
			}
			mtx.unlock();
		}
		return instance;
	}

	void setData(int d)
	{
		mtx.lock();
		data = d;
		mtx.unlock();
	}
	int getData() { return data; }
};

Singleton* Singleton::instance = nullptr;
mutex Singleton::mtx;


void testSingleton(int data)
{
	Singleton::getInstance()->setData(data);
	cout << this_thread::get_id() << ": " << Singleton::getInstance()->getData() << " ";
}

int main()
{

	thread t1(testSingleton, 100);
	thread t2(testSingleton, 999);

	t1.join();
	t2.join();


	return 0;
}
