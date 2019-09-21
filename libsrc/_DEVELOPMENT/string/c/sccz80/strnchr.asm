
; char *strnchr(const char *s, size_t n, int c)

SECTION code_clib
SECTION code_string

PUBLIC strnchr

EXTERN asm_strnchr

strnchr:
IF __CPU_GBZ80__
   ld hl,sp+2
   ld c,(hl)
   inc hl
   ld b,(hl)
   inc hl
   ld e,(hl)
   inc hl
   ld d,(hl)
   inc hl
   ld a,(hl+)
   ld h,(hl)
   ld l,a
ELSE

   pop af
   pop de
   pop bc
   pop hl
   
   push hl
   push bc
   push de
   push af
ENDIF
   
   jp asm_strnchr

; SDCC bridge for Classic
IF __CLASSIC
PUBLIC _strnchr
defc _strnchr = strnchr
ENDIF

