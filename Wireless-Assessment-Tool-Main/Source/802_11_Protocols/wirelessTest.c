//
//Programmer: Christopher Wells
//Date 10/16/2020
//
//The purpose of this file is to talk to the wifi card. At this point this is a test. Once the wifi dev is passed,
//a list of the avalible nodes can be compiled.
//

#include <libmnl/libmnl.h> //netlink libmnl
#include <linux/nl80211.h> //nl80211 netlink
#include <linux/genetlink.h> //generic netlink
#include <net/if.h>
#include <string.h>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <fcntl.h> //fntnl (set descriptor options)
#include <errno.h> //errno




