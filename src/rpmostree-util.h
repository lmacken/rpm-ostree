/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*-
 *
 * Copyright (C) 2014 Colin Walters <walters@verbum.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2 of the licence or (at
 * your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#pragma once

#include <gio/gio.h>

gboolean
_rpmostree_util_enumerate_directory_allow_noent (GFile               *dirpath,
						 const char          *queryargs,
						 GFileQueryInfoFlags  queryflags,
						 GFileEnumerator    **out_direnum,
						 GCancellable        *cancellable,
						 GError             **error);

gboolean
_rpmostree_file_load_contents_utf8_allow_noent (GFile          *path,
                                                char          **out_contents,
                                                GCancellable   *cancellable,
                                                GError        **error);

gboolean
_rpmostree_util_update_checksum_from_file (GChecksum    *checksum,
                                           GFile        *src,
                                           GCancellable *cancellable,
                                           GError      **error);
