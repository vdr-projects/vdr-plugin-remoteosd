/*
 * menu.h: displays the remote OSD
 *
 * See the README file for copyright information and how to reach the author.
 */

#ifndef _REMOTEOSD_MENU__H
#define _REMOTEOSD_MENU__H

#include <vdr/tools.h>
#include <vdr/osdbase.h>
#include <vdr/plugin.h>
#include <vdr/channels.h>
#include "svdrpservice.h"

class cRemoteOsdMenu: public cOsdMenu {
	private:
		cPlugin			*plugin;
		SvdrpConnection_v1_0	svdrp;
		cString			title;
		cString			message;
		cString			red;
		cString			green;
		cString			yellow;
		cString			blue;
		cString			text;
		bool			isEmpty;
		bool			plugOsd;

		bool CmdCHAN(const cChannel *Channel);
		bool CmdHITK(const char *Key);
		bool CmdLSTO();
		bool CmdOSDT();
		bool CmdOSDI();
		bool CmdOSDH();
		bool CmdOSDM();
		bool CmdOSDX();
		int CheckState();
		bool UpdateMenu();
	protected:
		virtual void Clear();
	public:
		cRemoteOsdMenu(const char *Title);
		virtual ~cRemoteOsdMenu();

		bool Open(const char *ServerIp, unsigned short ServerPort, const char *Key);
		virtual void Display();
		virtual eOSState ProcessKey(eKeys Key);
};

#endif //_REMOTEOSD_MENU__H
