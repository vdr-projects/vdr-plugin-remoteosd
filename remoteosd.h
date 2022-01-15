/*
 * remotetimers.h: Public interface of the plugin's services
 *
 * Copyright (C) 2013 Frank Schmirler <vdr@schmirler.de>
 *
 * This file is part of VDR Plugin remoteosd.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 * Or, point your browser to http://www.gnu.org/licenses/old-licenses/gpl-2.0.html
 */

#ifndef _REMOTEOSD_SERVICE__H
#define _REMOTEOSD_SERVICE__H

#include <vdr/osdbase.h>

/*
 * RemoteOsd::Menu-v1.0
 * Open the menu of VDR at serverIp and serverPort, sending the specified key.
 * If key is NULL, key "MENU" is used.
 */
struct RemoteOsd_Menu_v1_0 {
//in
	const char	*serverIp;
	unsigned short	serverPort;
	const char	*key;
//out
	cOsdMenu	*menu;  
};

#endif //_REMOTEOSD_SERVICE__H
