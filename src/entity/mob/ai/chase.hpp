#pragma once

#include "../ai.hpp"
#include "../../../map/path.hpp"
#include "wander.hpp"

class Chase : public AI {
public:
    typedef AI super;
    Chase(Mob* mob);

    void Update(double delta);
    void Debug() const;

private:
    Wander wander_;
};
