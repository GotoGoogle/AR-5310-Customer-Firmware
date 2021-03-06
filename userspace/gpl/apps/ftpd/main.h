#ifndef __BFTPD_MAIN_H
#define __BFTPD_MAIN_H

#include <sys/types.h>

struct bftpd_childpid {
	pid_t pid;
	int sock;
};
#if 0 //brcm
extern int global_argc;
extern char **global_argv;
extern FILE *passwdfile, *groupfile, *devnull;
#endif //brcm
//<< [BCMBG-NTWK-063] Jim Lin: Fix user can't access storage device using FTP on IE, 20110519
#ifdef DMP_X_BROADCOM_COM_IPV6_1
extern struct sockaddr_in6 name;
#else
extern struct sockaddr_in name;
#endif
//>> [BCMBG-NTWK-063] End
extern char *remotehostname;
extern struct sockaddr_in remotename;
extern int control_timeout, data_timeout;
extern int alarm_type;

/* Command line options */
char *configpath;
int daemonmode;

void print_file(int number, char *filename);

#endif
