/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "frontends/lean/cmd_table.h"
namespace lean {
void register_inductive_cmd(cmd_table & r);
void initialize_inductive_cmd();
void finalize_inductive_cmd();
}
