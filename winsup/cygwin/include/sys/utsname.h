/* sys/utsname.h

   Copyright 2001 Red Hat, Inc.

This file is part of Cygwin.

This software is a copyrighted work licensed under the terms of the
Cygwin license.  Please consult the file "CYGWIN_LICENSE" for
details. */

#ifndef _SYS_UTSNAME_H
#define _SYS_UTSNAME_H

#ifdef __cplusplus
extern "C" {
#endif

#define UTSNAME_LEN	20

struct utsname
{
  char sysname[UTSNAME_LEN];
  char nodename[UTSNAME_LEN];
  char release[UTSNAME_LEN];
  char version[UTSNAME_LEN];
  char machine[UTSNAME_LEN];
};

int uname (struct utsname *);

#ifdef __cplusplus
}
#endif

#endif
