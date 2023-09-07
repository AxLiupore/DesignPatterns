//
// Created by axliu on 23-9-7.
//

#ifndef FACADEPATTERN_LIONCANNON_HPP
#define FACADEPATTERN_LIONCANNON_HPP

#include "../system/CokeSystem.hpp"
#include "../system/EnergySystem.hpp"
#include "../system/AimLockSystem.hpp"
#include "Cannon.hpp"
#include "WindCannon.hpp"

class LionCannon
{
public:
	explicit LionCannon()
	{
		m_coke = new CokeSystem;
		m_energy = new EnergySystem;
		m_aimlock = new AimLockSystem;
		m_cannon = new Cannon;
		m_windCannon = new WindCannon;
	}

	~LionCannon()
	{
		delete m_coke;
		delete m_energy;
		delete m_aimlock;
		delete m_cannon;
		delete m_windCannon;
	}

	void aimAndLock()
	{
		m_coke->imitCoke();
		m_energy->energyCovert();
		m_aimlock->aimLock();
	}

	void fire()
	{
		m_cannon->cannonFire();
		m_windCannon->windCannonFire();
	}

private:
	CokeSystem* m_coke = nullptr;
	EnergySystem* m_energy = nullptr;
	AimLockSystem* m_aimlock = nullptr;
	Cannon* m_cannon = nullptr;
	WindCannon* m_windCannon = nullptr;
};

#endif //FACADEPATTERN_LIONCANNON_HPP
