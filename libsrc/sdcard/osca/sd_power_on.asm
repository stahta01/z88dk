;
;	Old School Computer Architecture - SD Card driver
;	Taken from the OSCA Bootcode by Phil Ruston 2011
;
;	Ported by Stefano Bodrato, 2012
;
;	Power on the sdcard slot
;
;	$Id: sd_power_on.asm,v 1.1 2012-07-10 05:55:38 stefano Exp $
;


	XLIB	sd_power_on
    INCLUDE "osca.def"


sd_power_on:

	push af
	in a,(sys_sdcard_ctrl2)		
	res sd_power,a			; pull power control low: Active - SD card powered up
	set sd_cs,a			; card deselected by default at power on
	out (sys_sdcard_ctrl2),a
	
	ld a,@01000000			; (6) = 1 FPGA Output enabled, (7) = 0: 250Khz SPI clock

	out (sys_sdcard_ctrl1),a
	pop af
	ret
