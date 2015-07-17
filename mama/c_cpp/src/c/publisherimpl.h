/* $Id$
 *
 * OpenMAMA: The open middleware agnostic messaging API
 * Copyright (C) 2011 NYSE Technologies, Inc.
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */

#ifndef MamaPublisherImplH__
#define MamaPublisherImplH__

#include "bridge.h"

#if defined(__cplusplus)
extern "C" {
#endif

extern mama_status
mamaPublisher_createByIndex (mamaPublisher*    result,
                             mamaTransport     tport,
                             int               tportIndex,
                             const char*       symbol,
                             const char*       source,
                             const char*       root);

extern mama_status
mamaPublisher_sendFromInboxByIndex (mamaPublisher publisher,
                                    int           tportIndex,
                                    mamaInbox     inbox,
                                    mamaMsg       msg);

mama_status mamaPublisherImpl_clearTransport (mamaPublisher publisher);

extern mamaTransport
mamaPublisherImpl_getTransportImpl (mamaPublisher publisher);

#if defined(__cplusplus)
}
#endif

#endif /* MamaPublishermplH__ */
