
#include "../../Engine/object/Scene.h"
#include "Engine/component/CameraComponent.h"
#include "Engine/object/GameObject.h"

USING_JYE_CC


int main()
{
    Main::Initialize();

	Scene* s = new Scene("NewScene");
    s->CreateObject("a");
    GameObject* partGO = s->CreateObject("c");

    Main::Terminate();

	return 0;
}