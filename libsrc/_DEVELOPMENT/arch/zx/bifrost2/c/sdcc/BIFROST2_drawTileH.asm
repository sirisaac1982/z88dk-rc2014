; ----------------------------------------------------------------
; Z88DK INTERFACE LIBRARY FOR THE BIFROST*2 ENGINE
;
; See "bifrost2.h" for further details
; ----------------------------------------------------------------

; void BIFROST2_drawTileH(unsigned int lin,unsigned int col,unsigned int tile)

SECTION code_clib
SECTION code_bifrost2

PUBLIC _BIFROST2_drawTileH

EXTERN asm_BIFROST2_drawTileH

_BIFROST2_drawTileH:

        ld hl,2
        add hl,sp
        ld d,(hl)       ; D=lin
        inc hl
        inc hl
        ld e,(hl)       ; E=col
        inc hl
        inc hl
        ld a,(hl)       ; A=tile

        jp asm_BIFROST2_drawTileH        ; execute 'draw_tile'
