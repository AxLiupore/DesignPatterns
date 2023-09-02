//
// Created by AxLiupore on 2023/9/2.
//

#ifndef BUILDERMODEL_BUILDER_SHIPBUILDER_HPP_
#define BUILDERMODEL_BUILDER_SHIPBUILDER_HPP_

class ShipBuilder
{
 public:
	// 重置
	virtual void reset() = 0;
	// 修建身体
	virtual void buildBody() = 0;
	virtual void buildWeapon() = 0;
	virtual void buildEngine() = 0;
	virtual void buildInterior() = 0;
	virtual ~ShipBuilder()
	{
	}

 private:
};

#endif //BUILDERMODEL_BUILDER_SHIPBUILDER_HPP_
