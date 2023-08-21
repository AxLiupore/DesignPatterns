//
// Created by AxLiupore on 2023/8/11.
//

#ifndef SIMPLE_INTEREST_MODEL__HUNGEY_MODE_HPP_
#define SIMPLE_INTEREST_MODEL__HUNGEY_MODE_HPP_

class Hungry
{
 public:
	Hungry(const Hungry&) = delete;
	Hungry& operator=(const Hungry&) = delete;

	static Hungry* getInstace()
	{
		return m_hungry;
	}

 private:
	Hungry() = default;
	~Hungry() = default;

	static Hungry* m_hungry;
};
Hungry* Hungry::m_hungry = new Hungry();

#endif //SIMPLE_INTEREST_MODEL__HUNGEY_MODE_HPP_
