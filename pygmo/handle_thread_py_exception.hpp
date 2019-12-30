// Copyright 2019 PaGMO development team
//
// This file is part of the pygmo library.
//
// This Source Code Form is subject to the terms of the Mozilla
// Public License v. 2.0. If a copy of the MPL was not distributed
// with this file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef PYGMO_HANDLE_THREAD_PY_EXCEPTION_HPP
#define PYGMO_HANDLE_THREAD_PY_EXCEPTION_HPP

#include <string>

namespace pygmo
{

[[noreturn]] void handle_thread_py_exception(const std::string &);

} // namespace pygmo

#endif
