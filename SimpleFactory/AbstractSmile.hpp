//
// Created by AxLiupore on 2023/8/24.
//

#ifndef FACTORYPATTERN__ABSTRACTSMILE_HPP_
#define FACTORYPATTERN__ABSTRACTSMILE_HPP_

class AbstractSmile
{
 public:
	virtual void tranform() = 0;
	virtual void ability() = 0;
	virtual ~AbstractSmile()
	{
	}
};

#endif //FACTORYPATTERN__ABSTRACTSMILE_HPP_
