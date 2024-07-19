#pragma once

#include "Core/Object.h"
#include "../private/Define.h"

NS_JYE_BEGIN

class ENGINE_API Animatable : public Object
{
    DECLARE_RTTI
    DECLARE_INITIAL
public:
    Animatable(Object* pHost);
    virtual ~Animatable();

    FORCEINLINE uint64 GetStaticID() const { return m_id; }

    void Awake();
    void Start();
    void Update(float dt);
    void LateUpdate(float dt);
    void Destroy();

protected:
    virtual void _OnAwake() {};
    virtual void _OnStart() {};
    virtual void _OnUpdate(float dt) {};
    virtual void _OnLateUpdate(float dt) {};
    virtual void _OnDestroy() {};
    virtual void _OnActiveChanged() {}

    uint64 m_id;
    bool m_isActive;
    bool m_isStarted;
    bool m_isAwaked;
};
TYPE_MARCO(Animatable);

NS_JYE_END