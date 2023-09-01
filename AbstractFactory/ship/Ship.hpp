//
// Created by AxLiupore on 2023/9/1.
//

#ifndef ABSTRACTFACTORY__SHIP_HPP_
#define ABSTRACTFACTORY__SHIP_HPP_

#include "../body/ShipBody.hpp"
#include "../engine/Engine.hpp"
#include "../weapon/Weapon.hpp"

class Ship
{
 public:
	Ship(ShipBody* body, Engine* engine, Weapon* weapon) : m_body(body), m_engine(engine), m_weapon(weapon)
	{
	}

	~Ship()
	{
		delete m_body;
		delete m_engine;
		delete m_weapon;
	}

	std::string getProperty()
	{
		std::string info = m_body->getBody() + m_engine->getEngine() + m_weapon->getWeapon();
		return info;
	}

 private:
	ShipBody* m_body;
	Engine* m_engine;
	Weapon* m_weapon;
};

#endif //ABSTRACTFACTORY__SHIP_HPP_
