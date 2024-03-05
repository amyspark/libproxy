/* config-sysconfig.h
 *
 * Copyright 2022-2023 The Libproxy Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

#pragma once

#include <glib.h>
#include "px-manager-visibility.h"

G_BEGIN_DECLS

#define PX_CONFIG_TYPE_SYSCONFIG         (px_config_sysconfig_get_type ())

PXMANAGER_EXPORT
G_DECLARE_FINAL_TYPE (PxConfigSysConfig, px_config_sysconfig, PX, CONFIG_SYSCONFIG, GObject)

G_END_DECLS


