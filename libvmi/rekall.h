/* The LibVMI Library is an introspection library that simplifies access to
 * memory in a target virtual machine or in a file containing a dump of
 * a system's physical memory.  LibVMI is based on the XenAccess Library.
 *
 * This file is part of LibVMI.
 *
 * LibVMI is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * LibVMI is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with LibVMI.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBVMI_REKALL_H
#define LIBVMI_REKALL_H

#include "private.h"

#ifdef REKALL_PROFILES

status_t
rekall_profile_symbol_to_rva(
    json_object *rekall_profile_json,
    const char *symbol,
    const char *subsymbol,
    addr_t *rva);

status_t
rekall_profile_symbol_to_size(
    json_object *rekall_profile_json,
    const char *symbol,
    size_t * size);

#else

#define rekall_profile_symbol_to_rva(...) VMI_FAILURE
#define rekall_profile_symbol_to_size(...) VMI_FAILURE

#endif

#endif /* LIBVMI_REKALL_H */
