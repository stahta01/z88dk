; ========================================================================
; 
; void *sms_copy_vram_to_mem_unsafe(void *dst, unsigned int n)
;
; copy from vram to memory; VRAM addresses are assumed to be stable.
;
; ========================================================================

INCLUDE "config_private.inc"

SECTION code_clib
SECTION code_crt_common

PUBLIC asm_sms_copy_vram_to_mem_unsafe

asm_sms_copy_vram_to_mem_unsafe:

   ; copy from vram to memory
   ;
   ; enter : hl = void *dst in memory
   ;         bc = unsigned int n > 0
   ;
   ;         VRAM SOURCE ADDRESS ALREADY SET!
   ;
   ; exit  : de = void *dst, &byte after last written to memory
   ;         bc = 0
   ;
   ; uses  : af, bc, de, hl

   dec bc
   inc b
   inc c

   ld a,b
   ld b,c
   
no_adjust:
   
   ld c,__IO_VDP_DATA
   
loop:

   inir
   
   dec a
   jr nz, loop
   
   ld c,a
   ex de,hl
   ret
 