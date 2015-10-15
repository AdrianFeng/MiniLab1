#ifndef WEENSYOS_MPOS_H
#define WEENSYOS_MPOS_H
#include "types.h"

// System call numbers.
// An application calls a system call by causing the specified interrupt.

#define INT_SYS_GETPID		48
#define INT_SYS_FORK		49
#define INT_SYS_YIELD		50
#define INT_SYS_EXIT		51
#define INT_SYS_WAIT		52
#define INT_SYS_CREATE_NEWTHREAD  56 // add this for creating a new thread
#define INT_SYS_KILL_A_PROCESS    57 // add this for killing a process

// These system call numbers currently do nothing; feel free to define them
// as you like.

#define INT_SYS_USER1		53
#define INT_SYS_USER2		54
#define INT_SYS_USER3		55
// 56 and 57 have been used to define 
// new_thread and system_kill


// The maximum number of processes in the system.

#define NPROCS			16


// Value returned by sys_wait() to indicate that the caller should try again.

#define WAIT_TRYAGAIN		(-2)


// The current screen cursor position (stored at memory location 0x190000).

extern uint16_t *cursorpos;

#endif
