#pragma once

#include "Animatable.h"

NS_JYE_BEGIN

class GameObject;

class ENGINE_API Component : public Animatable
{
    DECLARE_RTTI
	DECLARE_INITIAL
public:
    Component(Object* go);
    virtual ~Component();

    GameObject* GetParentObject() { return (GameObject*)_GetOwner(); }
    const GameObject* GetParentObject() const { return (GameObject*)_GetOwner(); }

protected:
};
TYPE_MARCO(Component);

/*
template<>
inline Json Serializer::writeObjectPointer(const Component* instance)
{
    return instance->serializerComponentPoint();
}
*/
NS_JYE_END