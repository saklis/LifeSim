#pragma once

#include <cstdint>

namespace LowEngine::ECS {
    class Component {
    protected:
        ~Component() = default;

    public:
        /// <summary>
        /// Entity that owns this component
        /// </summary>
        uint32_t OwnerId = 0;
        bool Active = false;

        Component() = default;

        virtual void InitAsDefault() = 0;
        virtual void Activate(uint32_t ownerId) = 0;
        virtual void Update() = 0;
    };
}
