//
// Created by AxLiupore on 2023/8/11.
//

#ifndef SIMPLE_INTEREST_MODEL__LAZY_MODE_HPP_
#define SIMPLE_INTEREST_MODEL__LAZY_MODE_HPP_

#include <atomic>

class Lazy
{
 public:
	Lazy(const Lazy&) = delete;
	Lazy& operator=(const Lazy&) = default;

	static Lazy* getInstance()
	{
		static Lazy task;
		return &task;
	}

 private:
	Lazy() = default;
	~Lazy() = default;

	static Lazy* m_lazy;
};

#endif //SIMPLE_INTEREST_MODEL__LAZY_MODE_HPP_
