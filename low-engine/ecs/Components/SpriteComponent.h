#pragma once
#include "ecs/Component.h"

namespace LowEngine::ECS {
    class SpriteComponent : public Component {
    public:
        SpriteComponent() = default;
        explicit SpriteComponent(uint32_t ownerEntityId);
        virtual ~SpriteComponent() = default;

        void InitAsDefault() override;
        void Activate(uint32_t ownerEntityId) override;
        void Update() override;
    };
}
