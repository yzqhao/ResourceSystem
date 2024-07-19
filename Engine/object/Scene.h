#pragma once

#include "GameObject.h"

NS_JYE_BEGIN

class CameraComponent;

class ENGINE_API Scene : public Object
{
    DECLARE_RTTI
	DECLARE_INITIAL
private:
    using SceneObjectsMap = std::unordered_map<uint64, GameObject*>;
    using CameraComponentMap = std::unordered_map<uint64, CameraComponent*>;
public:
    Scene(Object* pHost);
    Scene(const std::string& name);
    virtual ~Scene();

    GameObject* CreateObject(const std::string& objName);
    void DeleteGObject(GameObject * node);

protected:
    std::string m_name;
    GameObject* m_rootObject;
    uint64 m_StaticID;

    SceneObjectsMap m_gobjects;
};
TYPE_MARCO(Scene);


NS_JYE_END