/*
   ClamFS - Userspace anti-virus secured filesystem
   Copyright (C) 2006 Krzysztof Burghardt.

   $Id: clamfs.hxx,v 1.3 2007-01-25 02:51:30 burghardt Exp $

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef CLAMFS_CLAMFS_HXX
#define CLAMFS_CLAMFS_HXX

#include <config.h>

#include <Poco/Mutex.h>

#include <rlog.hxx>
#include <config.hxx>
#include <clamav.hxx>
#include <scancache.hxx>

#define FUSE_MAX_ARGS 32

namespace clamfs {

using namespace std;
using namespace rlog;
using namespace Poco;

extern RLogChannel *Debug;
extern RLogChannel *Info;
extern RLogChannel *Warn;

extern unixstream clamd;

} /* namespace clamfs */

#endif /* CLAMFS_CLAMFS_HXX */

/* EoF */
