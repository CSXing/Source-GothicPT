

#ifndef ltm_h
#define ltm_h


#include "lobject.h"



typedef enum {
  TM_INDEX,
  TM_NEWINDEX,
  TM_GC,
  TM_MODE,
  TM_EQ,  
  TM_ADD,
  TM_SUB,
  TM_MUL,
  TM_DIV,
  TM_POW,
  TM_UNM,
  TM_LT,
  TM_LE,
  TM_CONCAT,
  TM_CALL,
  TM_N		
} TMS;



#define gfasttm(g,et,e) \
  (((et)->flags & (1u<<(e))) ? NULL : luaT_gettm(et, e, (g)->tmname[e]))

#define fasttm(l,et,e)	gfasttm(G(l), et, e)


const TObject *luaT_gettm (Table *events, TMS event, TString *ename);
const TObject *luaT_gettmbyobj (lua_State *L, const TObject *o, TMS event);
void luaT_init (lua_State *L);

extern const char *const luaT_typenames[];

#endif
