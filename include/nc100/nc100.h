#ifndef _NC100_H
#define _NC100_H

#include <sys/compiler.h>

extern char __LIB__ *selectfile(void);
extern void __LIB__ col1(void);
extern void __LIB__ __FASTCALL__ col1text(const char *p) __SMALLCFASTCALL;
extern int __LIB__ editbuf(char *p, int lenflags) __SMALLCDECL;
#define EDITBUF_NOECHO	(1 << 11)
#define EDITBUF_TRIM	(1 << 12)
#define EDITBUF_UNLESS	(1 << 13)
#define EDITBUF_DOTTY	(1 << 14)
extern int __LIB__ readbuf(char *p, int lenflags) __SMALLCDECL;
extern void __LIB__ __FASTCALL__ textout(const char *p) __SMALLCFASTCALL;
extern void __LIB__ __FASTCALL__ col1text(const char *p) __SMALLCFASTCALL;
extern int __LIB__ __FASTCALL__ textoutcount(const char *p) __SMALLCFASTCALL;

extern void __LIB__ txtboldoff(void);
extern void __LIB__ txtboldon(void);
extern void __LIB__ txtcuroff(void);
extern void __LIB__ txtcuron(void);
extern unsigned int __LIB__ txtgetcursor(void);

struct txtgetwindowdata {
  unsigned char left;
  unsigned char top;
  unsigned char right;
  unsigned char bottom;
  unsigned char fullscreen;
};
extern void __LIB__ __FASTCALL__ txtgetwindow(struct txtgetwindowdata *win) __SMALLCFASTCALL;
extern void __LIB__ txtinverseoff(void);
extern void __LIB__ txtinverseon(void);
extern void __LIB__ txtunderlineeoff(void);
extern void __LIB__ txtunderlineon(void);
extern void __LIB__ __FASTCALL__ txtoutput(int c) __SMALLCFASTCALL;
extern void __LIB__ __FASTCALL__ txtsetcursor(unsigned int pos) __SMALLCFASTCALL;
extern void __LIB__ txtsetwindow(unsigned int postl, unsigned int posbr) __SMALLCDECL;
extern void __LIB__ __FASTCALL__ txtwrchar(int c) __SMALLCFASTCALL;

#define TXT_CURSOR_POS(x,y)  (((x) << 8) | (y))

extern void __LIB__ __FASTCALL__ *heapaddress(unsigned int handle) __SMALLCFASTCALL;
extern unsigned int __LIB__ __FASTCALL__ heapalloc(unsigned int size) __SMALLCFASTCALL;
extern void __LIB__ __FASTCALL__ heapfree(unsigned int handle) __SMALLCFASTCALL;
extern void __LIB__ heaplock(unsigned int handle, unsigned int lock) __SMALLCDECL;
#define HEAP_LOCK		1
#define HEAP_UNLOCK		0
extern unsigned int __LIB__ heapmaxfree(void);
extern int __LIB__ heaprealloc(unsigned int handle, unsigned int size) __SMALLCDECL;

#define CHAR_TO_TOK(x)	((unsigned int)((x) & 0xFF))
extern void __LIB__ kmcharreturn(unsigned int token);
extern int __LIB__ kmgetyellow(void);
extern void __LIB__ __FASTCALL__ kmsetyellow(unsigned int code) __SMALLCFASTCALL;
extern int __LIB__ kmreadchar(void);
extern int __LIB__ kmreadkbd(void);
extern int __LIB__ kmsetexpand(unsigned int token, unsigned char *string) __SMALLCDECL;
extern int __LIB__ kmsettickcount(unsigned int first, unsigned int recur) __SMALLCDECL;
#define KM_TICK_PER_SEC	100
extern void __LIB__ __FASTCALL__ kmsetyellow(unsigned int token) __SMALLCFASTCALL;
extern int __LIB__ kmwaitkbd(void);
extern int __LIB__ testescape(void);

extern int __LIB__ __FASTCALL__ mcprintchar(int c) __SMALLCFASTCALL;
extern void __LIB__ mcreadyprinter(void);
extern int __LIB__ __FASTCALL__ mcsetprinter(unsigned int type) __SMALLCFASTCALL;
#define PRINTER_PARALLEL 0
#define PRINTER_SERIAL	1

extern unsigned short  __LIB__ *padgetticker(void);
struct nc100date {
  unsigned short year;
  unsigned char month;
  unsigned char day;
  unsigned char hour;
  unsigned char minute;
  unsigned char second;
};
extern void __LIB__ __FASTCALL__ padgettime(struct nc100date *date) __SMALLCFASTCALL;
extern unsigned int __LIB__ padgetversion(void);

extern void __LIB__ padinitserial(void);
extern int __LIB__ padinserial(void);
extern int __LIB__ __FASTCALL__ padoutparallel(unsigned int code) __SMALLCFASTCALL;
extern int __LIB__ __FASTCALL__ padoutserial(unsigned int code) __SMALLCFASTCALL;
extern int __LIB__ padreadyparallel(void);
extern int __LIB__ padreadyserial(void);
extern void __LIB__ padresetserial(void);
extern int __LIB__ padserialwaiting(void);
extern void __LIB__ __FASTCALL__ padsetalarm(struct nc100date *date) __SMALLCFASTCALL;
extern void __LIB__ __FASTCALL__ padsettime(struct nc100date *date) __SMALLCFASTCALL;

extern int __LIB__ lapcat_receive(void);
extern int __LIB__ __FASTCALL__ lapcat_send(int c) __SMALLCFASTCALL;

/* Main useful system variables at 0xB000-> 0xB201 */
struct nc100_system {
    unsigned char mmu0;
    unsigned char mmu1;
    unsigned char mmu2;
    unsigned char mmu3;
    unsigned char gotcontext;
    unsigned char __savepearlmmu;
    unsigned short __saveaf;
    unsigned short __savehl;
    unsigned short saveaf;
    unsigned short savebc;
    unsigned short savede;
    unsigned short savehl;
    unsigned short saveix;
    unsigned short saveiy;
    unsigned short savepc;
    unsigned short savesp;
    unsigned short saveafdash;
    unsigned short savebcdash;
    unsigned short savededash;
    unsigned short savehldash;
    unsigned char savemmu0;
    unsigned char savemmu1;
    unsigned char savemmu2;
    unsigned char savemmu3;
    unsigned short savecritpc;
    unsigned short savecritsp;
    unsigned char savingcontext;
    unsigned long nmimagic;
    unsigned long nmichecksums[2];
    unsigned short criticalpc;
    unsigned short criticalsp;
    unsigned char initstack[80];
    unsigned char diagnostics;
    unsigned char saveprinstat;
    unsigned char kbdstate1[10];
    unsigned char kbdstate2[10];
    unsigned short padkeybuf[32];
    unsigned char padnextin;
    unsigned char padnextout;
    unsigned char padbufempty;
    unsigned short lastkbdstate;
    unsigned short thiskbdstate;
    unsigned char caps_state;
    unsigned char savecaps;
    unsigned char justswitchedon;
    unsigned short padserbuf[32];
    unsigned char padsernextin;
    unsigned char padsernextout;
    unsigned char padserbufempty;
    unsigned char padserin_xoff;
    unsigned char padserout_xoff;
    unsigned char disablexonxoff;
    unsigned char ackirq;
    unsigned char rptdelay;
    unsigned char rptrate;
    unsigned char rpttimer;
    unsigned char keytorepeat;
    unsigned char rptkeystates;
    unsigned char rtcbuf[13];
    unsigned char d_alarmday[6];
    unsigned char alarmhappened;
    unsigned char alarmhappenedgotmsg;
    unsigned char soundcounter;
    unsigned short soundptr;
    unsigned char soundrepcount;
    unsigned short soundrepptr;
    unsigned char poweroffminutes;
    unsigned char minutesleft;
    unsigned short minutecounter;
    unsigned char eventhappened;
    unsigned char preservecontext;
    unsigned char dontpreservecontext;
    unsigned char mainprog;
    unsigned char currentprinter;
    unsigned short currentmenu;
    unsigned char wasmenusel;
    unsigned char lastsecond;
    unsigned char clockon;
    unsigned char sdumpname[4];
    unsigned char d_workspace[8];
    unsigned char d_datebuf[18];
    unsigned char d_asciitime[12];
    unsigned char currentcfg[76];
    unsigned char g_outstream;
    unsigned short g_h_outfile;
    unsigned char g_pos;
    unsigned char def_fname[15];
    unsigned char def_first;
    unsigned char d_findinfobuf[36];
};
    
#define NC100_RTC		0xD0		/* TM8521 at D0-DF */

#define NC100_UART_DATA		0xC0
#define NC100_UART_CTRL		0xC1

#define NC100_KEYBOARD		0xB0
/* Bitmask of 64 keys over 10 registers, reading B9 starts rescan */

#define NC100_CARDSTATUS	0xA0
#define NC100_CARD_PRESENT	0x80
#define NC100_CARD_WP		0x40
#define NC100_CARD_VOLTAGE	0x20		/* true if > 4v */
#define NC100_CARD_BATTERY	0x10		/* 0 = low */
#define NC100_BATTERY_LOW	0x08		/* Main batteries low */
#define NC100_BACKUP_LOW	0x04		/* Backup battery low */
#define NC100_PAR_BUSY		0x02		/* 0 = busy */
#define NC100_PAR_ACK		0x01		/* 1 = ack */

#define NC100_IRQSTATUS		0x90
/* bits as IRQMASK */

#define NC100_POWERCTRL		0x70
#define NC100_POWER_OFF		0x00

#define NC100_IRQMASK		0x60
#define NC100_IRQ_KEYSCAN	0x08		/* 10mS keyscan */
#define NC100_IRQ_PAR_ACK	0x04
#define NC100_IRQ_TXREADY	0x02
#define NC100_IRQ_RXREADY	0x01

#define NC100_SPEAKER_A_LOW	0x50

#define NC100_SPEAKER_A_HIGH	0x51
#define NC100_SPEAKER_A_ON	0x80

#define NC100_SPEAKER_B_LOW	0x52
#define NC100_SPEAKER_B_HIGH	0x53
#define NC100_SPEAKER_B_ON	0x80


#define NC100_PARALLEL		0x40

#define NC100_CTRL		0x30
#define NC100_CTRL_CARDSEL	0x80		/* 1 common, 0 attribute */
#define NC100_CTRL_PSTROBE	0x40		/* lp strobe line */
#define NC100_SERIAL_POWER	0x10		/* line driver on */
#define NC100_SERIAL_CLOCK	0x08		/* uart clock on */
#define NC100_SERIAL_BAUD_MASK	0x07
#define NC100_SERIAL_B150	0x00
#define NC100_SERIAL_B300	0x01
#define NC100_SERIAL_B600	0x02
#define NC100_SERIAL_B1200	0x03
#define NC100_SERIAL_B2400	0x04
#define NC100_SERIAL_B4800	0x05
#define NC100_SERIAL_B9600	0x06
#define NC100_SERIAL_B19200	0x07

#define NC100_CARDWAIT		0x20
#define NC100_CARDWAIT_ON	0x80		/* 200nS */

#define NC100_MMU		0x10
#define NC100_MMU_TYPE_ROM	0x00
#define NC100_MMU_TYPE_RAM	0x40
#define NC100_MMU_TYPE_CARD	0x80

#define NC100_DISPSTART		0x00


#endif
