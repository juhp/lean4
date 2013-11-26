/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include <lua.hpp>
#include "library/tactic/proof_builder.h"
namespace lean {
UDATA_DEFS_CORE(proof_map)
UDATA_DEFS(assignment)
UDATA_DEFS(proof_builder)
void open_proof_builder(lua_State * L);
}
