#pragma once

#include "BaseEntity.h"

class ClientEntityList {
public:
    BaseEntity* getClientEntity(int index)
    {
        return callVirtualFunction<BaseEntity*(__thiscall*)(void*, int)>(this, 3)(this, index);
    }
};
