/*********************************************************************************
 * FILE:        /home/stephen/Projects/bcppm2835/src/masks.h
 * DESCRIPTION: Defines bit masks for 32 bit registers.
 *              Contains masks for regions up to 3 bits.
 *              This file was automatically generated!
 * MODIFIED:    8/28/2016
 * 
 * Copyright SSJIA 2016
 ********************************************************************************/
 
/* Set and Clear Bits from register value */
#define SETBITV(R, P) R |= 0x01<<P
#define CLRBITV(R, P) R &= ~(0x01<<P)
/* Set and Clear Bits from register address */
#define SETBITA(R, P)  *R |= 0x01<<P
#define CLRBITA(R, P)  *R &= ~(0x01<<P)
/* Read the value of a bit from register value */
#define READBITV(R, P) ((R>>P)%2)
/* Read the value of a bit from register address */
#define READBITA( R, P ) ((*R>>P)%2)
 
/* Set Multiple Bits in a Register */
#define SETREGV(R, S, V, L) R = (R&~(L<<S))|(V<<S)
#define SETREGA(R, S, V, L) *R = (*R&~(L<<S))|(V<<S)
/* Read Multiple Bits in a Register */
#define READREGV(R, S, L) (R&(L<<S))>>S
#define READREGA(R, S, L) (*R&(L<<S))>>S
 

/* Bit Masks - 1 bit regions*/
#define BITS_0_0                      		0x00000001
#define BITS_1_1                      		0x00000002
#define BITS_2_2                      		0x00000004
#define BITS_3_3                      		0x00000008
#define BITS_4_4                      		0x00000010
#define BITS_5_5                      		0x00000020
#define BITS_6_6                      		0x00000040
#define BITS_7_7                      		0x00000080
#define BITS_8_8                      		0x00000100
#define BITS_9_9                      		0x00000200
#define BITS_10_10                    		0x00000400
#define BITS_11_11                    		0x00000800
#define BITS_12_12                    		0x00001000
#define BITS_13_13                    		0x00002000
#define BITS_14_14                    		0x00004000
#define BITS_15_15                    		0x00008000
#define BITS_16_16                    		0x00010000
#define BITS_17_17                    		0x00020000
#define BITS_18_18                    		0x00040000
#define BITS_19_19                    		0x00080000
#define BITS_20_20                    		0x00100000
#define BITS_21_21                    		0x00200000
#define BITS_22_22                    		0x00400000
#define BITS_23_23                    		0x00800000
#define BITS_24_24                    		0x01000000
#define BITS_25_25                    		0x02000000
#define BITS_26_26                    		0x04000000
#define BITS_27_27                    		0x08000000
#define BITS_28_28                    		0x10000000
#define BITS_29_29                    		0x20000000
#define BITS_30_30                    		0x40000000
#define BITS_31_31                    		0x80000000
/* Bit Masks - 2 bit regions*/
#define BITS_0_1                      		0x00000003
#define BITS_1_2                      		0x00000006
#define BITS_2_3                      		0x0000000C
#define BITS_3_4                      		0x00000018
#define BITS_4_5                      		0x00000030
#define BITS_5_6                      		0x00000060
#define BITS_6_7                      		0x000000C0
#define BITS_7_8                      		0x00000180
#define BITS_8_9                      		0x00000300
#define BITS_9_10                     		0x00000600
#define BITS_10_11                    		0x00000C00
#define BITS_11_12                    		0x00001800
#define BITS_12_13                    		0x00003000
#define BITS_13_14                    		0x00006000
#define BITS_14_15                    		0x0000C000
#define BITS_15_16                    		0x00018000
#define BITS_16_17                    		0x00030000
#define BITS_17_18                    		0x00060000
#define BITS_18_19                    		0x000C0000
#define BITS_19_20                    		0x00180000
#define BITS_20_21                    		0x00300000
#define BITS_21_22                    		0x00600000
#define BITS_22_23                    		0x00C00000
#define BITS_23_24                    		0x01800000
#define BITS_24_25                    		0x03000000
#define BITS_25_26                    		0x06000000
#define BITS_26_27                    		0x0C000000
#define BITS_27_28                    		0x18000000
#define BITS_28_29                    		0x30000000
#define BITS_29_30                    		0x60000000
#define BITS_30_31                    		0xC0000000
/* Bit Masks - 3 bit regions*/
#define BITS_0_2                      		0x00000007
#define BITS_1_3                      		0x0000000E
#define BITS_2_4                      		0x0000001C
#define BITS_3_5                      		0x00000038
#define BITS_4_6                      		0x00000070
#define BITS_5_7                      		0x000000E0
#define BITS_6_8                      		0x000001C0
#define BITS_7_9                      		0x00000380
#define BITS_8_10                     		0x00000700
#define BITS_9_11                     		0x00000E00
#define BITS_10_12                    		0x00001C00
#define BITS_11_13                    		0x00003800
#define BITS_12_14                    		0x00007000
#define BITS_13_15                    		0x0000E000
#define BITS_14_16                    		0x0001C000
#define BITS_15_17                    		0x00038000
#define BITS_16_18                    		0x00070000
#define BITS_17_19                    		0x000E0000
#define BITS_18_20                    		0x001C0000
#define BITS_19_21                    		0x00380000
#define BITS_20_22                    		0x00700000
#define BITS_21_23                    		0x00E00000
#define BITS_22_24                    		0x01C00000
#define BITS_23_25                    		0x03800000
#define BITS_24_26                    		0x07000000
#define BITS_25_27                    		0x0E000000
#define BITS_26_28                    		0x1C000000
#define BITS_27_29                    		0x38000000
#define BITS_28_30                    		0x70000000
#define BITS_29_31                    		0xE0000000
/* Value Offsets - 1*/
#define V1O0                          		0x00000001
#define V1O1                          		0x00000002
#define V1O2                          		0x00000004
#define V1O3                          		0x00000008
#define V1O4                          		0x00000010
#define V1O5                          		0x00000020
#define V1O6                          		0x00000040
#define V1O7                          		0x00000080
#define V1O8                          		0x00000100
#define V1O9                          		0x00000200
#define V1O10                         		0x00000400
#define V1O11                         		0x00000800
#define V1O12                         		0x00001000
#define V1O13                         		0x00002000
#define V1O14                         		0x00004000
#define V1O15                         		0x00008000
#define V1O16                         		0x00010000
#define V1O17                         		0x00020000
#define V1O18                         		0x00040000
#define V1O19                         		0x00080000
#define V1O20                         		0x00100000
#define V1O21                         		0x00200000
#define V1O22                         		0x00400000
#define V1O23                         		0x00800000
#define V1O24                         		0x01000000
#define V1O25                         		0x02000000
#define V1O26                         		0x04000000
#define V1O27                         		0x08000000
#define V1O28                         		0x10000000
#define V1O29                         		0x20000000
#define V1O30                         		0x40000000
#define V1O31                         		0x80000000
/* Value Offsets - 2*/
#define V2O0                          		0x00000002
#define V2O1                          		0x00000004
#define V2O2                          		0x00000008
#define V2O3                          		0x00000010
#define V2O4                          		0x00000020
#define V2O5                          		0x00000040
#define V2O6                          		0x00000080
#define V2O7                          		0x00000100
#define V2O8                          		0x00000200
#define V2O9                          		0x00000400
#define V2O10                         		0x00000800
#define V2O11                         		0x00001000
#define V2O12                         		0x00002000
#define V2O13                         		0x00004000
#define V2O14                         		0x00008000
#define V2O15                         		0x00010000
#define V2O16                         		0x00020000
#define V2O17                         		0x00040000
#define V2O18                         		0x00080000
#define V2O19                         		0x00100000
#define V2O20                         		0x00200000
#define V2O21                         		0x00400000
#define V2O22                         		0x00800000
#define V2O23                         		0x01000000
#define V2O24                         		0x02000000
#define V2O25                         		0x04000000
#define V2O26                         		0x08000000
#define V2O27                         		0x10000000
#define V2O28                         		0x20000000
#define V2O29                         		0x40000000
#define V2O30                         		0x80000000
/* Value Offsets - 3*/
#define V3O0                          		0x00000003
#define V3O1                          		0x00000006
#define V3O2                          		0x0000000C
#define V3O3                          		0x00000018
#define V3O4                          		0x00000030
#define V3O5                          		0x00000060
#define V3O6                          		0x000000C0
#define V3O7                          		0x00000180
#define V3O8                          		0x00000300
#define V3O9                          		0x00000600
#define V3O10                         		0x00000C00
#define V3O11                         		0x00001800
#define V3O12                         		0x00003000
#define V3O13                         		0x00006000
#define V3O14                         		0x0000C000
#define V3O15                         		0x00018000
#define V3O16                         		0x00030000
#define V3O17                         		0x00060000
#define V3O18                         		0x000C0000
#define V3O19                         		0x00180000
#define V3O20                         		0x00300000
#define V3O21                         		0x00600000
#define V3O22                         		0x00C00000
#define V3O23                         		0x01800000
#define V3O24                         		0x03000000
#define V3O25                         		0x06000000
#define V3O26                         		0x0C000000
#define V3O27                         		0x18000000
#define V3O28                         		0x30000000
#define V3O29                         		0x60000000
#define V3O30                         		0xC0000000
/* Value Offsets - 4*/
#define V4O0                          		0x00000004
#define V4O1                          		0x00000008
#define V4O2                          		0x00000010
#define V4O3                          		0x00000020
#define V4O4                          		0x00000040
#define V4O5                          		0x00000080
#define V4O6                          		0x00000100
#define V4O7                          		0x00000200
#define V4O8                          		0x00000400
#define V4O9                          		0x00000800
#define V4O10                         		0x00001000
#define V4O11                         		0x00002000
#define V4O12                         		0x00004000
#define V4O13                         		0x00008000
#define V4O14                         		0x00010000
#define V4O15                         		0x00020000
#define V4O16                         		0x00040000
#define V4O17                         		0x00080000
#define V4O18                         		0x00100000
#define V4O19                         		0x00200000
#define V4O20                         		0x00400000
#define V4O21                         		0x00800000
#define V4O22                         		0x01000000
#define V4O23                         		0x02000000
#define V4O24                         		0x04000000
#define V4O25                         		0x08000000
#define V4O26                         		0x10000000
#define V4O27                         		0x20000000
#define V4O28                         		0x40000000
#define V4O29                         		0x80000000
/* Value Offsets - 5*/
#define V5O0                          		0x00000005
#define V5O1                          		0x0000000A
#define V5O2                          		0x00000014
#define V5O3                          		0x00000028
#define V5O4                          		0x00000050
#define V5O5                          		0x000000A0
#define V5O6                          		0x00000140
#define V5O7                          		0x00000280
#define V5O8                          		0x00000500
#define V5O9                          		0x00000A00
#define V5O10                         		0x00001400
#define V5O11                         		0x00002800
#define V5O12                         		0x00005000
#define V5O13                         		0x0000A000
#define V5O14                         		0x00014000
#define V5O15                         		0x00028000
#define V5O16                         		0x00050000
#define V5O17                         		0x000A0000
#define V5O18                         		0x00140000
#define V5O19                         		0x00280000
#define V5O20                         		0x00500000
#define V5O21                         		0x00A00000
#define V5O22                         		0x01400000
#define V5O23                         		0x02800000
#define V5O24                         		0x05000000
#define V5O25                         		0x0A000000
#define V5O26                         		0x14000000
#define V5O27                         		0x28000000
#define V5O28                         		0x50000000
#define V5O29                         		0xA0000000
/* Value Offsets - 6*/
#define V6O0                          		0x00000006
#define V6O1                          		0x0000000C
#define V6O2                          		0x00000018
#define V6O3                          		0x00000030
#define V6O4                          		0x00000060
#define V6O5                          		0x000000C0
#define V6O6                          		0x00000180
#define V6O7                          		0x00000300
#define V6O8                          		0x00000600
#define V6O9                          		0x00000C00
#define V6O10                         		0x00001800
#define V6O11                         		0x00003000
#define V6O12                         		0x00006000
#define V6O13                         		0x0000C000
#define V6O14                         		0x00018000
#define V6O15                         		0x00030000
#define V6O16                         		0x00060000
#define V6O17                         		0x000C0000
#define V6O18                         		0x00180000
#define V6O19                         		0x00300000
#define V6O20                         		0x00600000
#define V6O21                         		0x00C00000
#define V6O22                         		0x01800000
#define V6O23                         		0x03000000
#define V6O24                         		0x06000000
#define V6O25                         		0x0C000000
#define V6O26                         		0x18000000
#define V6O27                         		0x30000000
#define V6O28                         		0x60000000
#define V6O29                         		0xC0000000
/* Value Offsets - 7*/
#define V7O0                          		0x00000007
#define V7O1                          		0x0000000E
#define V7O2                          		0x0000001C
#define V7O3                          		0x00000038
#define V7O4                          		0x00000070
#define V7O5                          		0x000000E0
#define V7O6                          		0x000001C0
#define V7O7                          		0x00000380
#define V7O8                          		0x00000700
#define V7O9                          		0x00000E00
#define V7O10                         		0x00001C00
#define V7O11                         		0x00003800
#define V7O12                         		0x00007000
#define V7O13                         		0x0000E000
#define V7O14                         		0x0001C000
#define V7O15                         		0x00038000
#define V7O16                         		0x00070000
#define V7O17                         		0x000E0000
#define V7O18                         		0x001C0000
#define V7O19                         		0x00380000
#define V7O20                         		0x00700000
#define V7O21                         		0x00E00000
#define V7O22                         		0x01C00000
#define V7O23                         		0x03800000
#define V7O24                         		0x07000000
#define V7O25                         		0x0E000000
#define V7O26                         		0x1C000000
#define V7O27                         		0x38000000
#define V7O28                         		0x70000000
#define V7O29                         		0xE0000000
