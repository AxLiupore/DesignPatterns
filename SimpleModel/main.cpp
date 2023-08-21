#include <iostream>
#include <thread>
#include "task_queue.hpp"

int main()
{
	// 得到一个单例对象
	TaskQueue* task = TaskQueue::getInstance();

	std::thread t1([=]()
	{
	  for (int i = 1; i <= 13; ++i)
	  {
		  task->pushTask(i);
		  std::cout << "push num is " << i << " and this thread id is " << std::this_thread::get_id() << std::endl;
		  std::this_thread::sleep_for(std::chrono::milliseconds(350));
	  }
	});

	std::thread t2([=]()
	{
	  std::this_thread::sleep_for(std::chrono::milliseconds(100));
	  while (!task->isEmpty())
	  {
		  int num = task->takeTask();
		  std::cout << "task num is " << num << " and this thread id is " << std::this_thread::get_id() << std::endl;
		  task->popTask();
		  std::this_thread::sleep_for(std::chrono::milliseconds(500));
	  }
	});

	t1.join();
	t2.join();
	return 0;
}