#ifndef _SINGLE_SPHERE_H_
#define _SINGLE_SPHERE_H_

#include "Tracer.h"
//���������������ͬ�ĳ���������Ҫ��ͬ�ĸ��ټ�����̣������в�ͬ�汾��trace_rayʵ��
class SingleSphere : public Tracer 
{
public:
	SingleSphere();

	SingleSphere(World *_worldPtr);

	virtual ~SingleSphere(void);

	virtual RGBColor trace_ray(const Ray &ray) const;
};

#endif /* ifndef _SINGLE_SPHERE_H_ */
