//
// Created by AxLiupore on 2023/8/11.
//

#ifndef SIMPLE_INTEREST_MODEL__TASK_QUEUE_HPP_
#define SIMPLE_INTEREST_MODEL__TASK_QUEUE_HPP_

#include <chrono>
#include <queue>
#include <mutex>

class TaskQueue
{
 public:
	TaskQueue& operator=(const TaskQueue&) = delete;
	TaskQueue(const TaskQueue&) = delete;

	// 获取单例对象
	static TaskQueue* getInstance()
	{
		return m_taskQueue;
	}

	// 添加任务
	void pushTask(int num)
	{
		std::lock_guard<std::mutex> lockGuard(m_mutex);
		m_queue.push(num);
	}

	// 判断是否为空
	bool isEmpty()
	{
		std::lock_guard<std::mutex> lockGuard(m_mutex);
		bool flag = m_queue.empty();
		return flag;
	}

	// 删除任务
	bool popTask()
	{
		std::lock_guard<std::mutex> lockGuard(m_mutex);
		if (m_queue.empty())
		{
			return false;
		}
		m_queue.pop();
		return true;
	}

	// 取出任务
	int takeTask()
	{
		std::lock_guard<std::mutex> lockGuard(m_mutex);
		if (m_queue.empty())
		{
			return -1;
		}
		int num = m_queue.front();
		return num;
	}

 private:
	TaskQueue() = default;
	~TaskQueue() = default;

	static TaskQueue* m_taskQueue;

	std::mutex m_mutex;
	std::queue<int> m_queue;
};
// 初始化单例对象
TaskQueue* TaskQueue::m_taskQueue = new TaskQueue();

#endif //SIMPLE_INTEREST_MODEL__TASK_QUEUE_HPP_
