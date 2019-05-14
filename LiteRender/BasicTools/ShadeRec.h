#ifndef _SHADEREC_H_
#define _SHADEREC_H_

#include "Vector3D.h"
#include "Ray.h"
#include "RGBColor.h"

class World;
class Material;

class ShadeRec {
public:
	ShadeRec(const World &wr);
	ShadeRec(const ShadeRec &sr);
	~ShadeRec();

public:
	bool hit_an_object;
	Point3D hit_point;
	Point3D local_hit_point;
	Ray ray;
	RGBColor color;
	Vector3D normal; //�õ�ķ�����
	double t;
	World &w;
	Material*	material_ptr;
};

#endif /* ifndef _SHADEREC_H_ */