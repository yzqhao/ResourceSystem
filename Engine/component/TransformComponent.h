#pragma once

#include "Component.h"

NS_JYE_BEGIN

class Scene;

class ENGINE_API TransformComponent : public Component
{
    DECLARE_RTTI
	DECLARE_INITIAL
public:
    TransformComponent(Object * pHost);
    virtual ~TransformComponent();

protected:

};

NS_JYE_END