/* stmt.c */
extern int statement(void);
extern void ns(void);
extern void compound(void);
extern void doiferror(void);
extern void doif(void);
extern int doexpr(void);
extern void dowhile(void);
extern void dodo(void);
extern void dofor(void);
extern void doswitch(void);
extern void docase(void);
extern void dodefault(void);
extern void doreturn(char);
extern void leave(int save,char type);
extern void dobreak(void);
extern void docont(void);
extern void doasm(void);
extern void dopragma(void);
extern void doasmfunc(char wantbr);
