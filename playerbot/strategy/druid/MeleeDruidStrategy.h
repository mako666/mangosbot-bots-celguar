#pragma once

#include "../generic/MeleeCombatStrategy.h"
#include "GenericDruidStrategy.h"

namespace ai
{
    class MeleeDruidStrategy : public MeleeCombatStrategy
    {
    public:
        MeleeDruidStrategy(PlayerbotAI* ai);

    public:
        virtual void InitTriggers(std::list<TriggerNode*> &triggers);
        virtual string getName() { return "melee"; }
        virtual NextAction** getDefaultActions();
    };

}
