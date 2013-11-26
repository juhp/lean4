/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include <lua.hpp>
#include "library/tactic/goal.h"
namespace lean {
UDATA_DEFS_CORE(hypotheses)
UDATA_DEFS(goal)
void open_goal(lua_State * L);
}
