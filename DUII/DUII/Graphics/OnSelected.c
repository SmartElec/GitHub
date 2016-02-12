/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*
* C-file generated by
*
*        Bitmap converter for emWin V5.04.
*        Compiled Jan  8 2010, 16:37:17
*        (C) 1998 - 2005 Segger Microcontroller Systeme GmbH
*
**********************************************************************
*
* Source file: OnSelected
* Dimensions:  87 * 35
* NumColors:   256
*
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/*   Palette
The following are the entries of the palette table.
Every entry is a 32-bit value (of which 24 bits are actually used)
the lower   8 bits represent the Red component,
the middle  8 bits represent the Green component,
the highest 8 bits (of the 24 bits used) represent the Blue component
as follows:   0xBBGGRR
*/

static GUI_CONST_STORAGE GUI_COLOR ColorsOnSelected[] = {
     0xF3F8F4,0x28F569,0x000000,0x26F468
    ,0x28F96A,0x29FE6D,0x22F564,0xB2B0B3
    ,0xD1D0D2,0xDFDEE0,0xBFBDC0,0x75817A
    ,0xB2E0C1,0x0C6026,0x63FB94,0xF8F7F7
    ,0xE4E4E5,0x2AFF70,0x26EA64,0xC4C2C4
    ,0xE8E8E9,0x062911,0x25F566,0xB0ACB0
    ,0x1AA145,0x020A04,0xE9E8EA,0xACB6B1
    ,0x20E05D,0x206235,0x29FA6C,0x33F871
    ,0x64EE90,0x0E5524,0x041609,0x21CA57
    ,0xB9B5B9,0xC3C2C4,0xEAEAEA,0x010502
    ,0xB5B1B4,0xE5E4E6,0xE6E6E7,0x1EBA50
    ,0x05210E,0x22D15A,0x24DD5E,0x24E160
    ,0x26ED65,0x2CFF74,0xE7E6E8,0x021007
    ,0x04180A,0x1FC053,0xB5B4B6,0x020C05
    ,0x083617,0x1CAC4A,0x1CB14C,0x21CE58
    ,0x26F167,0x2EF66E,0xD3D2D4,0xD4D4D5
    ,0xD6D6D8,0xDCDCDD,0xE3E2E4,0x010803
    ,0x031509,0x041E0D,0x0B451E,0x0C5E26
    ,0x127131,0x1AA546,0x1FBE52,0x23D65C
    ,0x24D95D,0x24DF60,0x24E562,0xBCBABC
    ,0xC0BFC0,0xC1C0C2,0xC5C4C6,0xCDCCCE
    ,0xD9D9DA,0xE1E0E2,0xE8E6E8,0xEAE9EA
    ,0x062611,0x072C13,0x0A3C19,0x09401B
    ,0x0C4E21,0x0D5123,0x106029,0x137532
    ,0x158138,0x168639,0x10953B,0x199942
    ,0x199C44,0x1CA949,0x1CB54D,0x1CD056
    ,0x1FD75A,0x20C254,0x27F268,0x28F268
    ,0x2CF86E,0x2CFF72,0x52F988,0x65FA95
    ,0xBAB3B9,0xBAB8BA,0xBBBABC,0xBDBBBE
    ,0xBEBDBF,0xC0BDC0,0xC1BFC2,0xCACACC
    ,0xCECDCE,0xE2E1E3,0xE6E5E7,0xEAEAEC
    ,0xECEBED,0x031208,0x06240F,0x072F14
    ,0x053E17,0x093B1A,0x0A401C,0x0C491F
    ,0x104120,0x1C472A,0x0E5324,0x075821
    ,0x0E5926,0x0F5F28,0x115627,0x1D552F
    ,0x125C29,0x145E2C,0x244B30,0x215E34
    ,0x295538,0x096F2A,0x11662C,0x11682D
    ,0x147833,0x137834,0x147A34,0x147C35
    ,0x29683D,0x476050,0x4B6453,0x4B6354
    ,0x417853,0x627669,0x108836,0x16883A
    ,0x178C3C,0x17913E,0x18923F,0x13993D
    ,0x189540,0x18AA47,0x15B949,0x19B84C
    ,0x1EB94F,0x1ABD4E,0x29AE53,0x33BE5F
    ,0x6B8072,0x6E8075,0x648F72,0x76827B
    ,0x76827C,0x79867E,0x6D917A,0x20C153
    ,0x23D45B,0x23D85C,0x21DF5D,0x1FE35D
    ,0x1DE95F,0x23E260,0x24EA63,0x37F774
    ,0x34F872,0x3DF678,0x3BF878,0x3FF87B
    ,0x53D07C,0x40F67A,0x7D8B83,0x7EA78C
    ,0x6EB084,0x57DE82,0x69DD8E,0x7EC295
    ,0x55EC86,0x48FA81,0x60EE8E,0x68EE94
    ,0x74ED9B,0x63FC93,0x65FD96,0x6AFD99
    ,0x72F89E,0x7DEDA1,0x76FDA0,0x868E89
    ,0x868F8A,0x979B9A,0x99A09C,0xA5A6A6
    ,0xA0AAA4,0xA7A9A9,0xAAACAC,0xA9B3AD
    ,0xB5AEB4,0xB2B4B4,0xB9B0B7,0xB1BDB6
    ,0xB7B6B8,0xBCB3BA,0xB9B8BA,0x95CDA8
    ,0xAAC7B3,0xA5D5B5,0xAAD7B9,0xAEDEBE
    ,0x8CE7A9,0x83FEAA,0x9FF6BA,0x97FFB8
    ,0x98FEB8,0xBCC9C0,0xB4D8C0,0xB6DEC4
    ,0xBBD8C6,0xBDE6CB,0xA8FBC3,0xAAFEC6
    ,0xC2C0C2,0xC7C7C9,0xCCCBCD,0xCECECF
    ,0xC1D0C6,0xC3E3CE,0xC2F0D2,0xE0DFE0
    ,0xE0E0E1,0xE2E2E3,0xE4E3E5,0xF3F4F2
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalOnSelected = {
  256,	/* number of entries */
  0, 	/* No transparency */
  &ColorsOnSelected[0]
};

static GUI_CONST_STORAGE unsigned char acOnSelected[] = {
  0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x26, 0x7C, 0x1A, 0x42, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
        0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x42, 0x14, 0x7C, 0x26, 0x1A, 0x1A, 
        0x1A, 0x1A, 0x1A, 0x1A,
  0x14, 0x14, 0x14, 0x14, 0x57, 0x26, 0xFC, 0xF7, 0x13, 0x76, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 
        0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x75, 0x76, 0x25, 0x78, 0xFB, 0x26, 0x57, 
        0x14, 0x14, 0x14, 0x14,
  0x14, 0x14, 0x14, 0x26, 0x29, 0x53, 0x73, 0x71, 0xD9, 0xD4, 0xB0, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 
        0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0xAF, 0xD3, 0xD7, 0x71, 0x4F, 0x77, 0x2A, 
        0x26, 0x14, 0x14, 0x14,
  0x14, 0x14, 0x7B, 0x55, 0x51, 0xE2, 0xD6, 0x9B, 0x85, 0x8A, 0x47, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 
        0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x8C, 0x8B, 0x9A, 0xD5, 0x24, 0x50, 
        0x41, 0x26, 0x14, 0x14,
  0x14, 0x26, 0x42, 0x74, 0x36, 0xAD, 0x84, 0x91, 0xA7, 0xB9, 0x3C, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
        0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x3C, 0xBA, 0x67, 0x62, 0x8D, 0xAC, 0x36, 
        0x72, 0xFD, 0x26, 0x14,
  0x1A, 0x32, 0x13, 0xE2, 0x9D, 0x80, 0xA5, 0x01, 0x05, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x1E, 0x05, 0x05, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
        0x04, 0x04, 0x04, 0x05, 0x1E, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x05, 0x1E, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x1E, 0x1E, 0x68, 0x9E, 0xAE, 
        0x24, 0x13, 0x14, 0x1A,
  0x7B, 0x3E, 0x72, 0xC2, 0x5B, 0x66, 0x05, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x11, 0x05, 0x4E, 0x2E, 0x2F, 0x01, 0x11, 0x1E, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x30, 0x2E, 0x2F, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x6A, 0x4D, 0x2E, 0x2F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1E, 0x4E, 0x49, 
        0xC3, 0x70, 0x3F, 0x57,
  0x29, 0x50, 0xDA, 0x8E, 0xA3, 0x1E, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x05, 0x12, 0xA4, 0x83, 0x15, 0x45, 0x2C, 0x81, 0x48, 0xB4, 0x05, 0x01, 0x01, 
        0x01, 0x11, 0x39, 0x33, 0x2C, 0x65, 0x05, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1E, 0x2D, 0x15, 0x34, 0x46, 0x30, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0xB7, 
        0xAB, 0xDB, 0x75, 0x2A,
  0x41, 0x4F, 0xB1, 0x87, 0x12, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x05, 0x23, 0x59, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x33, 0x18, 0x11, 0x01, 
        0x01, 0x11, 0x18, 0x02, 0x02, 0x34, 0x2D, 0x05, 0x01, 0x01, 0x01, 0x01, 0x1E, 0x23, 0x19, 0x02, 0x58, 0x12, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0xB8, 0xC7, 0xE1, 0x54,
  0x08, 0xE0, 0x99, 0x62, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x05, 0x3B, 0x45, 0x02, 0x02, 0x43, 0x5B, 0x93, 0x5C, 0x37, 0x02, 0x02, 0x27, 0x39, 0x05, 
        0x01, 0x11, 0x18, 0x02, 0x02, 0x02, 0x38, 0x12, 0x1E, 0x01, 0x01, 0x01, 0x1E, 0x23, 0x19, 0x02, 0x15, 0x12, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x16, 0xC5, 0xDE, 0x53,
  0xF5, 0x07, 0x90, 0xA9, 0x05, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x5C, 0x02, 0x02, 0x02, 0x64, 0x11, 0x11, 0x11, 0x2B, 0x22, 0x02, 0x02, 0x2C, 0x2F, 
        0x1E, 0x11, 0x18, 0x02, 0x02, 0x02, 0x02, 0x21, 0x01, 0x04, 0x01, 0x01, 0x1E, 0x23, 0x19, 0x02, 0x15, 0x12, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 
        0x3D, 0xC8, 0x07, 0x52,
  0x52, 0x17, 0x8F, 0x68, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x05, 0x4A, 0x02, 0x02, 0x02, 0x86, 0x05, 0x04, 0x01, 0x01, 0x6D, 0x94, 0x02, 0x02, 0x02, 0xA0, 
        0x11, 0x11, 0x18, 0x02, 0x02, 0x02, 0x02, 0x02, 0x60, 0x11, 0x01, 0x01, 0x1E, 0x23, 0x19, 0x02, 0x15, 0x12, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 
        0x1F, 0xCA, 0x1B, 0x52,
  0x13, 0x17, 0x1D, 0xB6, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x48, 0x02, 0x02, 0x02, 0xA1, 0x11, 0x01, 0x01, 0x01, 0x05, 0x2B, 0x27, 0x02, 0x02, 0x46, 
        0x1E, 0x11, 0x18, 0x02, 0x02, 0x02, 0x02, 0x02, 0x27, 0x39, 0x11, 0x01, 0x1E, 0x23, 0x19, 0x02, 0x15, 0x12, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 
        0x1F, 0x20, 0x1B, 0x13,
  0x13, 0x17, 0x1D, 0x1C, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x05, 0x5A, 0x02, 0x02, 0x27, 0x3A, 0x05, 0x01, 0x01, 0x01, 0x04, 0x2E, 0x33, 0x02, 0x02, 0x45, 
        0x2E, 0x6D, 0x18, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x22, 0x3B, 0x05, 0x1E, 0x23, 0x19, 0x02, 0x15, 0x12, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x16, 
        0x1F, 0x20, 0x1B, 0x13,
  0x13, 0x17, 0x1D, 0x1C, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x12, 0x15, 0x02, 0x02, 0x37, 0x35, 0x05, 0x01, 0x01, 0x01, 0x04, 0x3C, 0x22, 0x02, 0x02, 0x43, 
        0x23, 0x31, 0x18, 0x02, 0x02, 0x7F, 0x7E, 0x02, 0x02, 0x02, 0x38, 0x12, 0x11, 0x23, 0x19, 0x02, 0x15, 0x12, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x16, 
        0x1F, 0x20, 0x1B, 0x13,
  0x13, 0x17, 0x1D, 0x1C, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1E, 0x4B, 0x34, 0x02, 0x02, 0x37, 0x35, 0x05, 0x01, 0x01, 0x01, 0x04, 0x30, 0x22, 0x02, 0x02, 0x02, 
        0x2B, 0x31, 0x18, 0x02, 0x02, 0x5E, 0x66, 0x02, 0x02, 0x02, 0x02, 0x88, 0x05, 0x3B, 0x19, 0x02, 0x15, 0x12, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x16, 
        0x1F, 0x20, 0x1B, 0x13,
  0x25, 0x17, 0x1D, 0x1C, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x05, 0xB4, 0x22, 0x02, 0x02, 0x37, 0x35, 0x05, 0x01, 0x01, 0x01, 0x04, 0x30, 0x22, 0x02, 0x02, 0x02, 
        0x2B, 0x31, 0x18, 0x02, 0x02, 0x21, 0x31, 0x95, 0x02, 0x02, 0x02, 0x02, 0x9F, 0x4B, 0x37, 0x02, 0x15, 0x12, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x16, 
        0x1F, 0x20, 0x1B, 0x13,
  0x25, 0x17, 0x1D, 0x1C, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x05, 0xB4, 0x22, 0x02, 0x02, 0x37, 0x35, 0x05, 0x01, 0x01, 0x01, 0x04, 0x30, 0x22, 0x02, 0x02, 0x02, 
        0x2B, 0x31, 0x18, 0x02, 0x02, 0x21, 0x6D, 0x04, 0x5D, 0x02, 0x02, 0x02, 0x37, 0x60, 0x7D, 0x02, 0x15, 0x12, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x16, 
        0x1F, 0x20, 0x1B, 0x13,
  0x25, 0x17, 0x1D, 0x1C, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1E, 0x2F, 0x2C, 0x02, 0x02, 0x37, 0x69, 0x05, 0x01, 0x01, 0x01, 0x04, 0x6B, 0x34, 0x02, 0x02, 0x02, 
        0x69, 0x31, 0x18, 0x02, 0x02, 0x21, 0x11, 0x1E, 0x2F, 0x58, 0x02, 0x02, 0x02, 0x19, 0x02, 0x02, 0x15, 0x12, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x16, 
        0x1F, 0x20, 0x1B, 0x13,
  0x25, 0x17, 0x1D, 0x1C, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x38, 0x02, 0x02, 0x27, 0x66, 0x05, 0x01, 0x01, 0x01, 0x04, 0x4D, 0x33, 0x02, 0x02, 0x34, 
        0xB5, 0x31, 0x18, 0x02, 0x02, 0x21, 0x11, 0x01, 0x11, 0xB3, 0x33, 0x02, 0x02, 0x02, 0x02, 0x02, 0x15, 0x12, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x16, 
        0x1F, 0x20, 0x1B, 0x13,
  0x25, 0x17, 0x1D, 0x1C, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x89, 0x02, 0x02, 0x02, 0x63, 0x11, 0x01, 0x01, 0x01, 0x05, 0xA8, 0x27, 0x02, 0x02, 0x5A, 
        0x6B, 0x11, 0x18, 0x02, 0x02, 0x21, 0x11, 0x01, 0x01, 0x11, 0x64, 0x02, 0x02, 0x02, 0x02, 0x02, 0x15, 0x12, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x16, 
        0x1F, 0x20, 0x1B, 0x13,
  0x25, 0x17, 0x1D, 0x1C, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x05, 0x65, 0x02, 0x02, 0x02, 0x92, 0x11, 0x04, 0x01, 0x01, 0x11, 0x96, 0x02, 0x02, 0x02, 0x94, 
        0x11, 0x11, 0x18, 0x02, 0x02, 0x21, 0x11, 0x01, 0x01, 0x01, 0x05, 0x48, 0x02, 0x02, 0x02, 0x02, 0x15, 0x12, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x16, 
        0x1F, 0x20, 0x1B, 0x13,
  0x25, 0x17, 0x1D, 0x1C, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1E, 0x12, 0x59, 0x02, 0x02, 0x37, 0x4A, 0x11, 0x11, 0x11, 0x3B, 0x34, 0x02, 0x02, 0x44, 0x4C, 
        0x1E, 0x11, 0x18, 0x02, 0x02, 0x21, 0x11, 0x01, 0x01, 0x01, 0x1E, 0x6A, 0x46, 0x02, 0x02, 0x02, 0x15, 0x12, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x16, 
        0x1F, 0x20, 0x1B, 0x13,
  0x25, 0x17, 0x1D, 0x1C, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x05, 0x3A, 0x27, 0x02, 0x02, 0x34, 0x97, 0x49, 0x61, 0x7E, 0x02, 0x02, 0x02, 0x9F, 0x05, 
        0x01, 0x11, 0x18, 0x02, 0x02, 0x21, 0x11, 0x01, 0x01, 0x01, 0x01, 0x05, 0x2E, 0x7E, 0x02, 0x02, 0x15, 0x12, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x16, 
        0xBC, 0xCB, 0x1B, 0x13,
  0x52, 0x17, 0x98, 0x1C, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x05, 0x64, 0x27, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x5F, 0x04, 0x04, 
        0x01, 0x11, 0x18, 0x02, 0x02, 0x21, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x05, 0x2B, 0x19, 0x02, 0x15, 0x12, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x16, 
        0xBE, 0xCC, 0xDD, 0x52,
  0xF6, 0x28, 0x9C, 0x67, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x05, 0x35, 0x5D, 0x22, 0x43, 0x02, 0x27, 0x33, 0x82, 0x39, 0x1E, 0x04, 0x01, 
        0x01, 0x11, 0x49, 0x02, 0x02, 0x5E, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0xA2, 0x27, 0x38, 0x30, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x16, 
        0x6E, 0xE8, 0x28, 0x77,
  0x40, 0x71, 0xB2, 0xA6, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x05, 0x1E, 0x4E, 0x4A, 0x3A, 0x2B, 0x2E, 0x04, 0x05, 0x04, 0x01, 0x01, 
        0x01, 0x04, 0x12, 0x2D, 0x2D, 0x4D, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x01, 0x4B, 0x4C, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x3D, 
        0xD2, 0xE5, 0x28, 0x3F,
  0x55, 0x0A, 0xD8, 0xAA, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x05, 0x05, 0x05, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x04, 0x1E, 0x1E, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1E, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x16, 0x6E, 
        0xEA, 0xDF, 0x71, 0x79,
  0x32, 0x78, 0xE1, 0xC4, 0x1C, 0x6C, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x16, 0xBD, 0xEC, 
        0xEE, 0x07, 0x53, 0x32,
  0x7A, 0x79, 0x73, 0x07, 0xC0, 0x6C, 0x3D, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x16, 0x06, 0xC1, 0xEB, 0xF1, 
        0x28, 0x4F, 0x79, 0x7A,
  0x29, 0x32, 0x40, 0x24, 0x1B, 0xC6, 0xC9, 0xBF, 0x3D, 0x16, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
        0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0xBB, 0x6F, 0xF3, 0xF9, 0x36, 
        0x36, 0x40, 0x32, 0x29,
  0x10, 0x10, 0x56, 0x3E, 0x24, 0x28, 0xE3, 0xD1, 0xD0, 0xCE, 0xCD, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 
        0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0xCF, 0xE9, 0xF2, 0xFA, 0xF8, 0x28, 0x36, 
        0x3F, 0x2A, 0x10, 0x10,
  0x10, 0x10, 0x10, 0x2A, 0x54, 0xF4, 0xDE, 0xDD, 0xE4, 0xE6, 0xE7, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 
        0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0xEF, 0xF0, 0xED, 0x36, 0x07, 0x50, 0x54, 
        0x2A, 0x10, 0x10, 0x10,
  0x10, 0x10, 0x10, 0x10, 0x2A, 0xFE, 0x3E, 0x51, 0x71, 0xDC, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
        0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x24, 0x51, 0x3E, 0x42, 0x2A, 
        0x10, 0x10, 0x10, 0x10,
  0x10, 0x10, 0x10, 0x10, 0x10, 0x29, 0x2A, 0x29, 0x41, 0x40, 0x3E, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
        0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x3E, 0x40, 0x41, 0x29, 0x32, 0x29, 0x10, 
        0x10, 0x10, 0x10, 0x10
};

GUI_CONST_STORAGE GUI_BITMAP bmOnSelected = {
  87, /* XSize */
  35, /* YSize */
  87, /* BytesPerLine */
  8, /* BitsPerPixel */
  acOnSelected,  /* Pointer to picture data (indices) */
  &PalOnSelected  /* Pointer to palette */
};

/* *** End of file *** */