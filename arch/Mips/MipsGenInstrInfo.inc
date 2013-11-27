/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Enum Values                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/* Capstone Disassembler Engine */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013> */

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM

enum {
  Mips_PHI	= 0,
  Mips_INLINEASM	= 1,
  Mips_PROLOG_LABEL	= 2,
  Mips_EH_LABEL	= 3,
  Mips_GC_LABEL	= 4,
  Mips_KILL	= 5,
  Mips_EXTRACT_SUBREG	= 6,
  Mips_INSERT_SUBREG	= 7,
  Mips_IMPLICIT_DEF	= 8,
  Mips_SUBREG_TO_REG	= 9,
  Mips_COPY_TO_REGCLASS	= 10,
  Mips_DBG_VALUE	= 11,
  Mips_REG_SEQUENCE	= 12,
  Mips_COPY	= 13,
  Mips_BUNDLE	= 14,
  Mips_LIFETIME_START	= 15,
  Mips_LIFETIME_END	= 16,

  Mips_STACKMAP	= 17,
  Mips_PATCHPOINT	= 18,
  Mips_ABSQ_S_PH	= 19,
  Mips_ABSQ_S_QB	= 20,
  Mips_ABSQ_S_W	= 21,
  Mips_ADD	= 22,
  Mips_ADDQH_PH	= 23,
  Mips_ADDQH_R_PH	= 24,
  Mips_ADDQH_R_W	= 25,
  Mips_ADDQH_W	= 26,
  Mips_ADDQ_PH	= 27,
  Mips_ADDQ_S_PH	= 28,
  Mips_ADDQ_S_W	= 29,
  Mips_ADDSC	= 30,
  Mips_ADDS_A_B	= 31,
  Mips_ADDS_A_D	= 32,
  Mips_ADDS_A_H	= 33,
  Mips_ADDS_A_W	= 34,
  Mips_ADDS_S_B	= 35,
  Mips_ADDS_S_D	= 36,
  Mips_ADDS_S_H	= 37,
  Mips_ADDS_S_W	= 38,
  Mips_ADDS_U_B	= 39,
  Mips_ADDS_U_D	= 40,
  Mips_ADDS_U_H	= 41,
  Mips_ADDS_U_W	= 42,
  Mips_ADDUH_QB	= 43,
  Mips_ADDUH_R_QB	= 44,
  Mips_ADDU_PH	= 45,
  Mips_ADDU_QB	= 46,
  Mips_ADDU_S_PH	= 47,
  Mips_ADDU_S_QB	= 48,
  Mips_ADDVI_B	= 49,
  Mips_ADDVI_D	= 50,
  Mips_ADDVI_H	= 51,
  Mips_ADDVI_W	= 52,
  Mips_ADDV_B	= 53,
  Mips_ADDV_D	= 54,
  Mips_ADDV_H	= 55,
  Mips_ADDV_W	= 56,
  Mips_ADDWC	= 57,
  Mips_ADD_A_B	= 58,
  Mips_ADD_A_D	= 59,
  Mips_ADD_A_H	= 60,
  Mips_ADD_A_W	= 61,
  Mips_ADD_MM	= 62,
  Mips_ADDi	= 63,
  Mips_ADDi_MM	= 64,
  Mips_ADDiu	= 65,
  Mips_ADDiu_MM	= 66,
  Mips_ADDu	= 67,
  Mips_ADDu_MM	= 68,
  Mips_ADJCALLSTACKDOWN	= 69,
  Mips_ADJCALLSTACKUP	= 70,
  Mips_AND	= 71,
  Mips_AND64	= 72,
  Mips_ANDI_B	= 73,
  Mips_AND_MM	= 74,
  Mips_AND_V	= 75,
  Mips_AND_V_D_PSEUDO	= 76,
  Mips_AND_V_H_PSEUDO	= 77,
  Mips_AND_V_W_PSEUDO	= 78,
  Mips_ANDi	= 79,
  Mips_ANDi64	= 80,
  Mips_ANDi_MM	= 81,
  Mips_APPEND	= 82,
  Mips_ASUB_S_B	= 83,
  Mips_ASUB_S_D	= 84,
  Mips_ASUB_S_H	= 85,
  Mips_ASUB_S_W	= 86,
  Mips_ASUB_U_B	= 87,
  Mips_ASUB_U_D	= 88,
  Mips_ASUB_U_H	= 89,
  Mips_ASUB_U_W	= 90,
  Mips_ATOMIC_CMP_SWAP_I16	= 91,
  Mips_ATOMIC_CMP_SWAP_I32	= 92,
  Mips_ATOMIC_CMP_SWAP_I64	= 93,
  Mips_ATOMIC_CMP_SWAP_I8	= 94,
  Mips_ATOMIC_LOAD_ADD_I16	= 95,
  Mips_ATOMIC_LOAD_ADD_I32	= 96,
  Mips_ATOMIC_LOAD_ADD_I64	= 97,
  Mips_ATOMIC_LOAD_ADD_I8	= 98,
  Mips_ATOMIC_LOAD_AND_I16	= 99,
  Mips_ATOMIC_LOAD_AND_I32	= 100,
  Mips_ATOMIC_LOAD_AND_I64	= 101,
  Mips_ATOMIC_LOAD_AND_I8	= 102,
  Mips_ATOMIC_LOAD_NAND_I16	= 103,
  Mips_ATOMIC_LOAD_NAND_I32	= 104,
  Mips_ATOMIC_LOAD_NAND_I64	= 105,
  Mips_ATOMIC_LOAD_NAND_I8	= 106,
  Mips_ATOMIC_LOAD_OR_I16	= 107,
  Mips_ATOMIC_LOAD_OR_I32	= 108,
  Mips_ATOMIC_LOAD_OR_I64	= 109,
  Mips_ATOMIC_LOAD_OR_I8	= 110,
  Mips_ATOMIC_LOAD_SUB_I16	= 111,
  Mips_ATOMIC_LOAD_SUB_I32	= 112,
  Mips_ATOMIC_LOAD_SUB_I64	= 113,
  Mips_ATOMIC_LOAD_SUB_I8	= 114,
  Mips_ATOMIC_LOAD_XOR_I16	= 115,
  Mips_ATOMIC_LOAD_XOR_I32	= 116,
  Mips_ATOMIC_LOAD_XOR_I64	= 117,
  Mips_ATOMIC_LOAD_XOR_I8	= 118,
  Mips_ATOMIC_SWAP_I16	= 119,
  Mips_ATOMIC_SWAP_I32	= 120,
  Mips_ATOMIC_SWAP_I64	= 121,
  Mips_ATOMIC_SWAP_I8	= 122,
  Mips_AVER_S_B	= 123,
  Mips_AVER_S_D	= 124,
  Mips_AVER_S_H	= 125,
  Mips_AVER_S_W	= 126,
  Mips_AVER_U_B	= 127,
  Mips_AVER_U_D	= 128,
  Mips_AVER_U_H	= 129,
  Mips_AVER_U_W	= 130,
  Mips_AVE_S_B	= 131,
  Mips_AVE_S_D	= 132,
  Mips_AVE_S_H	= 133,
  Mips_AVE_S_W	= 134,
  Mips_AVE_U_B	= 135,
  Mips_AVE_U_D	= 136,
  Mips_AVE_U_H	= 137,
  Mips_AVE_U_W	= 138,
  Mips_AddiuRxImmX16	= 139,
  Mips_AddiuRxPcImmX16	= 140,
  Mips_AddiuRxRxImm16	= 141,
  Mips_AddiuRxRxImmX16	= 142,
  Mips_AddiuRxRyOffMemX16	= 143,
  Mips_AddiuSpImm16	= 144,
  Mips_AddiuSpImmX16	= 145,
  Mips_AdduRxRyRz16	= 146,
  Mips_AndRxRxRy16	= 147,
  Mips_B	= 148,
  Mips_BALIGN	= 149,
  Mips_BAL_BR	= 150,
  Mips_BC1F	= 151,
  Mips_BC1T	= 152,
  Mips_BCLRI_B	= 153,
  Mips_BCLRI_D	= 154,
  Mips_BCLRI_H	= 155,
  Mips_BCLRI_W	= 156,
  Mips_BCLR_B	= 157,
  Mips_BCLR_D	= 158,
  Mips_BCLR_H	= 159,
  Mips_BCLR_W	= 160,
  Mips_BEQ	= 161,
  Mips_BEQ64	= 162,
  Mips_BEQ_MM	= 163,
  Mips_BGEZ	= 164,
  Mips_BGEZ64	= 165,
  Mips_BGEZAL	= 166,
  Mips_BGEZAL_MM	= 167,
  Mips_BGEZ_MM	= 168,
  Mips_BGTZ	= 169,
  Mips_BGTZ64	= 170,
  Mips_BGTZ_MM	= 171,
  Mips_BINSLI_B	= 172,
  Mips_BINSLI_D	= 173,
  Mips_BINSLI_H	= 174,
  Mips_BINSLI_W	= 175,
  Mips_BINSL_B	= 176,
  Mips_BINSL_D	= 177,
  Mips_BINSL_H	= 178,
  Mips_BINSL_W	= 179,
  Mips_BINSRI_B	= 180,
  Mips_BINSRI_D	= 181,
  Mips_BINSRI_H	= 182,
  Mips_BINSRI_W	= 183,
  Mips_BINSR_B	= 184,
  Mips_BINSR_D	= 185,
  Mips_BINSR_H	= 186,
  Mips_BINSR_W	= 187,
  Mips_BITREV	= 188,
  Mips_BLEZ	= 189,
  Mips_BLEZ64	= 190,
  Mips_BLEZ_MM	= 191,
  Mips_BLTZ	= 192,
  Mips_BLTZ64	= 193,
  Mips_BLTZAL	= 194,
  Mips_BLTZAL_MM	= 195,
  Mips_BLTZ_MM	= 196,
  Mips_BMNZI_B	= 197,
  Mips_BMNZ_V	= 198,
  Mips_BMZI_B	= 199,
  Mips_BMZ_V	= 200,
  Mips_BNE	= 201,
  Mips_BNE64	= 202,
  Mips_BNEGI_B	= 203,
  Mips_BNEGI_D	= 204,
  Mips_BNEGI_H	= 205,
  Mips_BNEGI_W	= 206,
  Mips_BNEG_B	= 207,
  Mips_BNEG_D	= 208,
  Mips_BNEG_H	= 209,
  Mips_BNEG_W	= 210,
  Mips_BNE_MM	= 211,
  Mips_BNZ_B	= 212,
  Mips_BNZ_D	= 213,
  Mips_BNZ_H	= 214,
  Mips_BNZ_V	= 215,
  Mips_BNZ_W	= 216,
  Mips_BPOSGE32	= 217,
  Mips_BPOSGE32_PSEUDO	= 218,
  Mips_BREAK	= 219,
  Mips_BSELI_B	= 220,
  Mips_BSEL_D_PSEUDO	= 221,
  Mips_BSEL_FD_PSEUDO	= 222,
  Mips_BSEL_FW_PSEUDO	= 223,
  Mips_BSEL_H_PSEUDO	= 224,
  Mips_BSEL_V	= 225,
  Mips_BSEL_W_PSEUDO	= 226,
  Mips_BSETI_B	= 227,
  Mips_BSETI_D	= 228,
  Mips_BSETI_H	= 229,
  Mips_BSETI_W	= 230,
  Mips_BSET_B	= 231,
  Mips_BSET_D	= 232,
  Mips_BSET_H	= 233,
  Mips_BSET_W	= 234,
  Mips_BZ_B	= 235,
  Mips_BZ_D	= 236,
  Mips_BZ_H	= 237,
  Mips_BZ_V	= 238,
  Mips_BZ_W	= 239,
  Mips_BeqzRxImm16	= 240,
  Mips_BeqzRxImmX16	= 241,
  Mips_BimmX16	= 242,
  Mips_BnezRxImm16	= 243,
  Mips_BnezRxImmX16	= 244,
  Mips_Break16	= 245,
  Mips_BteqzT8CmpX16	= 246,
  Mips_BteqzT8CmpiX16	= 247,
  Mips_BteqzT8SltX16	= 248,
  Mips_BteqzT8SltiX16	= 249,
  Mips_BteqzT8SltiuX16	= 250,
  Mips_BteqzT8SltuX16	= 251,
  Mips_BteqzX16	= 252,
  Mips_BtnezT8CmpX16	= 253,
  Mips_BtnezT8CmpiX16	= 254,
  Mips_BtnezT8SltX16	= 255,
  Mips_BtnezT8SltiX16	= 256,
  Mips_BtnezT8SltiuX16	= 257,
  Mips_BtnezT8SltuX16	= 258,
  Mips_BtnezX16	= 259,
  Mips_BuildPairF64	= 260,
  Mips_BuildPairF64_64	= 261,
  Mips_CEIL_L_D64	= 262,
  Mips_CEIL_L_S	= 263,
  Mips_CEIL_W_D32	= 264,
  Mips_CEIL_W_D64	= 265,
  Mips_CEIL_W_S	= 266,
  Mips_CEQI_B	= 267,
  Mips_CEQI_D	= 268,
  Mips_CEQI_H	= 269,
  Mips_CEQI_W	= 270,
  Mips_CEQ_B	= 271,
  Mips_CEQ_D	= 272,
  Mips_CEQ_H	= 273,
  Mips_CEQ_W	= 274,
  Mips_CFC1	= 275,
  Mips_CFCMSA	= 276,
  Mips_CLEI_S_B	= 277,
  Mips_CLEI_S_D	= 278,
  Mips_CLEI_S_H	= 279,
  Mips_CLEI_S_W	= 280,
  Mips_CLEI_U_B	= 281,
  Mips_CLEI_U_D	= 282,
  Mips_CLEI_U_H	= 283,
  Mips_CLEI_U_W	= 284,
  Mips_CLE_S_B	= 285,
  Mips_CLE_S_D	= 286,
  Mips_CLE_S_H	= 287,
  Mips_CLE_S_W	= 288,
  Mips_CLE_U_B	= 289,
  Mips_CLE_U_D	= 290,
  Mips_CLE_U_H	= 291,
  Mips_CLE_U_W	= 292,
  Mips_CLO	= 293,
  Mips_CLO_MM	= 294,
  Mips_CLTI_S_B	= 295,
  Mips_CLTI_S_D	= 296,
  Mips_CLTI_S_H	= 297,
  Mips_CLTI_S_W	= 298,
  Mips_CLTI_U_B	= 299,
  Mips_CLTI_U_D	= 300,
  Mips_CLTI_U_H	= 301,
  Mips_CLTI_U_W	= 302,
  Mips_CLT_S_B	= 303,
  Mips_CLT_S_D	= 304,
  Mips_CLT_S_H	= 305,
  Mips_CLT_S_W	= 306,
  Mips_CLT_U_B	= 307,
  Mips_CLT_U_D	= 308,
  Mips_CLT_U_H	= 309,
  Mips_CLT_U_W	= 310,
  Mips_CLZ	= 311,
  Mips_CLZ_MM	= 312,
  Mips_CMPGDU_EQ_QB	= 313,
  Mips_CMPGDU_LE_QB	= 314,
  Mips_CMPGDU_LT_QB	= 315,
  Mips_CMPGU_EQ_QB	= 316,
  Mips_CMPGU_LE_QB	= 317,
  Mips_CMPGU_LT_QB	= 318,
  Mips_CMPU_EQ_QB	= 319,
  Mips_CMPU_LE_QB	= 320,
  Mips_CMPU_LT_QB	= 321,
  Mips_CMP_EQ_PH	= 322,
  Mips_CMP_LE_PH	= 323,
  Mips_CMP_LT_PH	= 324,
  Mips_CONSTPOOL_ENTRY	= 325,
  Mips_COPY_FD_PSEUDO	= 326,
  Mips_COPY_FW_PSEUDO	= 327,
  Mips_COPY_S_B	= 328,
  Mips_COPY_S_H	= 329,
  Mips_COPY_S_W	= 330,
  Mips_COPY_U_B	= 331,
  Mips_COPY_U_H	= 332,
  Mips_COPY_U_W	= 333,
  Mips_CTC1	= 334,
  Mips_CTCMSA	= 335,
  Mips_CVT_D32_S	= 336,
  Mips_CVT_D32_W	= 337,
  Mips_CVT_D64_L	= 338,
  Mips_CVT_D64_S	= 339,
  Mips_CVT_D64_W	= 340,
  Mips_CVT_L_D64	= 341,
  Mips_CVT_L_S	= 342,
  Mips_CVT_S_D32	= 343,
  Mips_CVT_S_D64	= 344,
  Mips_CVT_S_L	= 345,
  Mips_CVT_S_W	= 346,
  Mips_CVT_W_D32	= 347,
  Mips_CVT_W_D64	= 348,
  Mips_CVT_W_S	= 349,
  Mips_C_EQ_D32	= 350,
  Mips_C_EQ_D64	= 351,
  Mips_C_EQ_S	= 352,
  Mips_C_F_D32	= 353,
  Mips_C_F_D64	= 354,
  Mips_C_F_S	= 355,
  Mips_C_LE_D32	= 356,
  Mips_C_LE_D64	= 357,
  Mips_C_LE_S	= 358,
  Mips_C_LT_D32	= 359,
  Mips_C_LT_D64	= 360,
  Mips_C_LT_S	= 361,
  Mips_C_NGE_D32	= 362,
  Mips_C_NGE_D64	= 363,
  Mips_C_NGE_S	= 364,
  Mips_C_NGLE_D32	= 365,
  Mips_C_NGLE_D64	= 366,
  Mips_C_NGLE_S	= 367,
  Mips_C_NGL_D32	= 368,
  Mips_C_NGL_D64	= 369,
  Mips_C_NGL_S	= 370,
  Mips_C_NGT_D32	= 371,
  Mips_C_NGT_D64	= 372,
  Mips_C_NGT_S	= 373,
  Mips_C_OLE_D32	= 374,
  Mips_C_OLE_D64	= 375,
  Mips_C_OLE_S	= 376,
  Mips_C_OLT_D32	= 377,
  Mips_C_OLT_D64	= 378,
  Mips_C_OLT_S	= 379,
  Mips_C_SEQ_D32	= 380,
  Mips_C_SEQ_D64	= 381,
  Mips_C_SEQ_S	= 382,
  Mips_C_SF_D32	= 383,
  Mips_C_SF_D64	= 384,
  Mips_C_SF_S	= 385,
  Mips_C_UEQ_D32	= 386,
  Mips_C_UEQ_D64	= 387,
  Mips_C_UEQ_S	= 388,
  Mips_C_ULE_D32	= 389,
  Mips_C_ULE_D64	= 390,
  Mips_C_ULE_S	= 391,
  Mips_C_ULT_D32	= 392,
  Mips_C_ULT_D64	= 393,
  Mips_C_ULT_S	= 394,
  Mips_C_UN_D32	= 395,
  Mips_C_UN_D64	= 396,
  Mips_C_UN_S	= 397,
  Mips_CmpRxRy16	= 398,
  Mips_CmpiRxImm16	= 399,
  Mips_CmpiRxImmX16	= 400,
  Mips_Constant32	= 401,
  Mips_DADD	= 402,
  Mips_DADDi	= 403,
  Mips_DADDiu	= 404,
  Mips_DADDu	= 405,
  Mips_DCLO	= 406,
  Mips_DCLZ	= 407,
  Mips_DERET	= 408,
  Mips_DEXT	= 409,
  Mips_DEXTM	= 410,
  Mips_DEXTU	= 411,
  Mips_DI	= 412,
  Mips_DINS	= 413,
  Mips_DINSM	= 414,
  Mips_DINSU	= 415,
  Mips_DIV_S_B	= 416,
  Mips_DIV_S_D	= 417,
  Mips_DIV_S_H	= 418,
  Mips_DIV_S_W	= 419,
  Mips_DIV_U_B	= 420,
  Mips_DIV_U_D	= 421,
  Mips_DIV_U_H	= 422,
  Mips_DIV_U_W	= 423,
  Mips_DMFC0	= 424,
  Mips_DMFC1	= 425,
  Mips_DMFC2	= 426,
  Mips_DMTC0	= 427,
  Mips_DMTC1	= 428,
  Mips_DMTC2	= 429,
  Mips_DMULT	= 430,
  Mips_DMULTu	= 431,
  Mips_DOTP_S_D	= 432,
  Mips_DOTP_S_H	= 433,
  Mips_DOTP_S_W	= 434,
  Mips_DOTP_U_D	= 435,
  Mips_DOTP_U_H	= 436,
  Mips_DOTP_U_W	= 437,
  Mips_DPADD_S_D	= 438,
  Mips_DPADD_S_H	= 439,
  Mips_DPADD_S_W	= 440,
  Mips_DPADD_U_D	= 441,
  Mips_DPADD_U_H	= 442,
  Mips_DPADD_U_W	= 443,
  Mips_DPAQX_SA_W_PH	= 444,
  Mips_DPAQX_S_W_PH	= 445,
  Mips_DPAQ_SA_L_W	= 446,
  Mips_DPAQ_S_W_PH	= 447,
  Mips_DPAU_H_QBL	= 448,
  Mips_DPAU_H_QBR	= 449,
  Mips_DPAX_W_PH	= 450,
  Mips_DPA_W_PH	= 451,
  Mips_DPSQX_SA_W_PH	= 452,
  Mips_DPSQX_S_W_PH	= 453,
  Mips_DPSQ_SA_L_W	= 454,
  Mips_DPSQ_S_W_PH	= 455,
  Mips_DPSUB_S_D	= 456,
  Mips_DPSUB_S_H	= 457,
  Mips_DPSUB_S_W	= 458,
  Mips_DPSUB_U_D	= 459,
  Mips_DPSUB_U_H	= 460,
  Mips_DPSUB_U_W	= 461,
  Mips_DPSU_H_QBL	= 462,
  Mips_DPSU_H_QBR	= 463,
  Mips_DPSX_W_PH	= 464,
  Mips_DPS_W_PH	= 465,
  Mips_DROTR	= 466,
  Mips_DROTR32	= 467,
  Mips_DROTRV	= 468,
  Mips_DSBH	= 469,
  Mips_DSDIV	= 470,
  Mips_DSHD	= 471,
  Mips_DSLL	= 472,
  Mips_DSLL32	= 473,
  Mips_DSLL64_32	= 474,
  Mips_DSLLV	= 475,
  Mips_DSRA	= 476,
  Mips_DSRA32	= 477,
  Mips_DSRAV	= 478,
  Mips_DSRL	= 479,
  Mips_DSRL32	= 480,
  Mips_DSRLV	= 481,
  Mips_DSUBu	= 482,
  Mips_DUDIV	= 483,
  Mips_DivRxRy16	= 484,
  Mips_DivuRxRy16	= 485,
  Mips_EI	= 486,
  Mips_ERET	= 487,
  Mips_EXT	= 488,
  Mips_EXTP	= 489,
  Mips_EXTPDP	= 490,
  Mips_EXTPDPV	= 491,
  Mips_EXTPV	= 492,
  Mips_EXTRV_RS_W	= 493,
  Mips_EXTRV_R_W	= 494,
  Mips_EXTRV_S_H	= 495,
  Mips_EXTRV_W	= 496,
  Mips_EXTR_RS_W	= 497,
  Mips_EXTR_R_W	= 498,
  Mips_EXTR_S_H	= 499,
  Mips_EXTR_W	= 500,
  Mips_EXT_MM	= 501,
  Mips_ExtractElementF64	= 502,
  Mips_ExtractElementF64_64	= 503,
  Mips_FABS_D	= 504,
  Mips_FABS_D32	= 505,
  Mips_FABS_D64	= 506,
  Mips_FABS_S	= 507,
  Mips_FABS_W	= 508,
  Mips_FADD_D	= 509,
  Mips_FADD_D32	= 510,
  Mips_FADD_D64	= 511,
  Mips_FADD_S	= 512,
  Mips_FADD_W	= 513,
  Mips_FCAF_D	= 514,
  Mips_FCAF_W	= 515,
  Mips_FCEQ_D	= 516,
  Mips_FCEQ_W	= 517,
  Mips_FCLASS_D	= 518,
  Mips_FCLASS_W	= 519,
  Mips_FCLE_D	= 520,
  Mips_FCLE_W	= 521,
  Mips_FCLT_D	= 522,
  Mips_FCLT_W	= 523,
  Mips_FCMP_D32	= 524,
  Mips_FCMP_D64	= 525,
  Mips_FCMP_S32	= 526,
  Mips_FCNE_D	= 527,
  Mips_FCNE_W	= 528,
  Mips_FCOR_D	= 529,
  Mips_FCOR_W	= 530,
  Mips_FCUEQ_D	= 531,
  Mips_FCUEQ_W	= 532,
  Mips_FCULE_D	= 533,
  Mips_FCULE_W	= 534,
  Mips_FCULT_D	= 535,
  Mips_FCULT_W	= 536,
  Mips_FCUNE_D	= 537,
  Mips_FCUNE_W	= 538,
  Mips_FCUN_D	= 539,
  Mips_FCUN_W	= 540,
  Mips_FDIV_D	= 541,
  Mips_FDIV_D32	= 542,
  Mips_FDIV_D64	= 543,
  Mips_FDIV_S	= 544,
  Mips_FDIV_W	= 545,
  Mips_FEXDO_H	= 546,
  Mips_FEXDO_W	= 547,
  Mips_FEXP2_D	= 548,
  Mips_FEXP2_D_1_PSEUDO	= 549,
  Mips_FEXP2_W	= 550,
  Mips_FEXP2_W_1_PSEUDO	= 551,
  Mips_FEXUPL_D	= 552,
  Mips_FEXUPL_W	= 553,
  Mips_FEXUPR_D	= 554,
  Mips_FEXUPR_W	= 555,
  Mips_FFINT_S_D	= 556,
  Mips_FFINT_S_W	= 557,
  Mips_FFINT_U_D	= 558,
  Mips_FFINT_U_W	= 559,
  Mips_FFQL_D	= 560,
  Mips_FFQL_W	= 561,
  Mips_FFQR_D	= 562,
  Mips_FFQR_W	= 563,
  Mips_FILL_B	= 564,
  Mips_FILL_FD_PSEUDO	= 565,
  Mips_FILL_FW_PSEUDO	= 566,
  Mips_FILL_H	= 567,
  Mips_FILL_W	= 568,
  Mips_FLOG2_D	= 569,
  Mips_FLOG2_W	= 570,
  Mips_FLOOR_L_D64	= 571,
  Mips_FLOOR_L_S	= 572,
  Mips_FLOOR_W_D32	= 573,
  Mips_FLOOR_W_D64	= 574,
  Mips_FLOOR_W_S	= 575,
  Mips_FMADD_D	= 576,
  Mips_FMADD_W	= 577,
  Mips_FMAX_A_D	= 578,
  Mips_FMAX_A_W	= 579,
  Mips_FMAX_D	= 580,
  Mips_FMAX_W	= 581,
  Mips_FMIN_A_D	= 582,
  Mips_FMIN_A_W	= 583,
  Mips_FMIN_D	= 584,
  Mips_FMIN_W	= 585,
  Mips_FMOV_D32	= 586,
  Mips_FMOV_D64	= 587,
  Mips_FMOV_S	= 588,
  Mips_FMSUB_D	= 589,
  Mips_FMSUB_W	= 590,
  Mips_FMUL_D	= 591,
  Mips_FMUL_D32	= 592,
  Mips_FMUL_D64	= 593,
  Mips_FMUL_S	= 594,
  Mips_FMUL_W	= 595,
  Mips_FNEG_D32	= 596,
  Mips_FNEG_D64	= 597,
  Mips_FNEG_S	= 598,
  Mips_FRCP_D	= 599,
  Mips_FRCP_W	= 600,
  Mips_FRINT_D	= 601,
  Mips_FRINT_W	= 602,
  Mips_FRSQRT_D	= 603,
  Mips_FRSQRT_W	= 604,
  Mips_FSAF_D	= 605,
  Mips_FSAF_W	= 606,
  Mips_FSEQ_D	= 607,
  Mips_FSEQ_W	= 608,
  Mips_FSLE_D	= 609,
  Mips_FSLE_W	= 610,
  Mips_FSLT_D	= 611,
  Mips_FSLT_W	= 612,
  Mips_FSNE_D	= 613,
  Mips_FSNE_W	= 614,
  Mips_FSOR_D	= 615,
  Mips_FSOR_W	= 616,
  Mips_FSQRT_D	= 617,
  Mips_FSQRT_D32	= 618,
  Mips_FSQRT_D64	= 619,
  Mips_FSQRT_S	= 620,
  Mips_FSQRT_W	= 621,
  Mips_FSUB_D	= 622,
  Mips_FSUB_D32	= 623,
  Mips_FSUB_D64	= 624,
  Mips_FSUB_S	= 625,
  Mips_FSUB_W	= 626,
  Mips_FSUEQ_D	= 627,
  Mips_FSUEQ_W	= 628,
  Mips_FSULE_D	= 629,
  Mips_FSULE_W	= 630,
  Mips_FSULT_D	= 631,
  Mips_FSULT_W	= 632,
  Mips_FSUNE_D	= 633,
  Mips_FSUNE_W	= 634,
  Mips_FSUN_D	= 635,
  Mips_FSUN_W	= 636,
  Mips_FTINT_S_D	= 637,
  Mips_FTINT_S_W	= 638,
  Mips_FTINT_U_D	= 639,
  Mips_FTINT_U_W	= 640,
  Mips_FTQ_H	= 641,
  Mips_FTQ_W	= 642,
  Mips_FTRUNC_S_D	= 643,
  Mips_FTRUNC_S_W	= 644,
  Mips_FTRUNC_U_D	= 645,
  Mips_FTRUNC_U_W	= 646,
  Mips_GotPrologue16	= 647,
  Mips_HADD_S_D	= 648,
  Mips_HADD_S_H	= 649,
  Mips_HADD_S_W	= 650,
  Mips_HADD_U_D	= 651,
  Mips_HADD_U_H	= 652,
  Mips_HADD_U_W	= 653,
  Mips_HSUB_S_D	= 654,
  Mips_HSUB_S_H	= 655,
  Mips_HSUB_S_W	= 656,
  Mips_HSUB_U_D	= 657,
  Mips_HSUB_U_H	= 658,
  Mips_HSUB_U_W	= 659,
  Mips_ILVEV_B	= 660,
  Mips_ILVEV_D	= 661,
  Mips_ILVEV_H	= 662,
  Mips_ILVEV_W	= 663,
  Mips_ILVL_B	= 664,
  Mips_ILVL_D	= 665,
  Mips_ILVL_H	= 666,
  Mips_ILVL_W	= 667,
  Mips_ILVOD_B	= 668,
  Mips_ILVOD_D	= 669,
  Mips_ILVOD_H	= 670,
  Mips_ILVOD_W	= 671,
  Mips_ILVR_B	= 672,
  Mips_ILVR_D	= 673,
  Mips_ILVR_H	= 674,
  Mips_ILVR_W	= 675,
  Mips_INS	= 676,
  Mips_INSERT_B	= 677,
  Mips_INSERT_FD_PSEUDO	= 678,
  Mips_INSERT_FW_PSEUDO	= 679,
  Mips_INSERT_H	= 680,
  Mips_INSERT_W	= 681,
  Mips_INSV	= 682,
  Mips_INSVE_B	= 683,
  Mips_INSVE_D	= 684,
  Mips_INSVE_H	= 685,
  Mips_INSVE_W	= 686,
  Mips_INS_MM	= 687,
  Mips_J	= 688,
  Mips_JAL	= 689,
  Mips_JALR	= 690,
  Mips_JALR64	= 691,
  Mips_JALR64Pseudo	= 692,
  Mips_JALRPseudo	= 693,
  Mips_JALR_MM	= 694,
  Mips_JAL_MM	= 695,
  Mips_JR	= 696,
  Mips_JR64	= 697,
  Mips_JR_MM	= 698,
  Mips_J_MM	= 699,
  Mips_Jal16	= 700,
  Mips_JrRa16	= 701,
  Mips_JrcRa16	= 702,
  Mips_JrcRx16	= 703,
  Mips_JumpLinkReg16	= 704,
  Mips_LB	= 705,
  Mips_LB64	= 706,
  Mips_LBUX	= 707,
  Mips_LB_MM	= 708,
  Mips_LBu	= 709,
  Mips_LBu64	= 710,
  Mips_LBu_MM	= 711,
  Mips_LD	= 712,
  Mips_LDC1	= 713,
  Mips_LDC164	= 714,
  Mips_LDC2	= 715,
  Mips_LDI_B	= 716,
  Mips_LDI_D	= 717,
  Mips_LDI_H	= 718,
  Mips_LDI_W	= 719,
  Mips_LDL	= 720,
  Mips_LDR	= 721,
  Mips_LDXC1	= 722,
  Mips_LDXC164	= 723,
  Mips_LD_B	= 724,
  Mips_LD_D	= 725,
  Mips_LD_H	= 726,
  Mips_LD_W	= 727,
  Mips_LEA_ADDiu	= 728,
  Mips_LEA_ADDiu64	= 729,
  Mips_LH	= 730,
  Mips_LH64	= 731,
  Mips_LHX	= 732,
  Mips_LH_MM	= 733,
  Mips_LHu	= 734,
  Mips_LHu64	= 735,
  Mips_LHu_MM	= 736,
  Mips_LL	= 737,
  Mips_LLD	= 738,
  Mips_LOAD_ACC128	= 739,
  Mips_LOAD_ACC64	= 740,
  Mips_LOAD_ACC64DSP	= 741,
  Mips_LOAD_CCOND_DSP	= 742,
  Mips_LSA	= 743,
  Mips_LUXC1	= 744,
  Mips_LUXC164	= 745,
  Mips_LUi	= 746,
  Mips_LUi64	= 747,
  Mips_LUi_MM	= 748,
  Mips_LW	= 749,
  Mips_LW64	= 750,
  Mips_LWC1	= 751,
  Mips_LWC2	= 752,
  Mips_LWL	= 753,
  Mips_LWL64	= 754,
  Mips_LWL_MM	= 755,
  Mips_LWR	= 756,
  Mips_LWR64	= 757,
  Mips_LWR_MM	= 758,
  Mips_LWX	= 759,
  Mips_LWXC1	= 760,
  Mips_LW_MM	= 761,
  Mips_LWu	= 762,
  Mips_LbRxRyOffMemX16	= 763,
  Mips_LbuRxRyOffMemX16	= 764,
  Mips_LhRxRyOffMemX16	= 765,
  Mips_LhuRxRyOffMemX16	= 766,
  Mips_LiRxImm16	= 767,
  Mips_LiRxImmAlignX16	= 768,
  Mips_LiRxImmX16	= 769,
  Mips_LoadAddr32Imm	= 770,
  Mips_LoadAddr32Reg	= 771,
  Mips_LoadImm32Reg	= 772,
  Mips_LwConstant32	= 773,
  Mips_LwRxPcTcp16	= 774,
  Mips_LwRxPcTcpX16	= 775,
  Mips_LwRxRyOffMemX16	= 776,
  Mips_LwRxSpImmX16	= 777,
  Mips_MADD	= 778,
  Mips_MADDR_Q_H	= 779,
  Mips_MADDR_Q_W	= 780,
  Mips_MADDU	= 781,
  Mips_MADDU_DSP	= 782,
  Mips_MADDU_MM	= 783,
  Mips_MADDV_B	= 784,
  Mips_MADDV_D	= 785,
  Mips_MADDV_H	= 786,
  Mips_MADDV_W	= 787,
  Mips_MADD_D32	= 788,
  Mips_MADD_D64	= 789,
  Mips_MADD_DSP	= 790,
  Mips_MADD_MM	= 791,
  Mips_MADD_Q_H	= 792,
  Mips_MADD_Q_W	= 793,
  Mips_MADD_S	= 794,
  Mips_MAQ_SA_W_PHL	= 795,
  Mips_MAQ_SA_W_PHR	= 796,
  Mips_MAQ_S_W_PHL	= 797,
  Mips_MAQ_S_W_PHR	= 798,
  Mips_MAXI_S_B	= 799,
  Mips_MAXI_S_D	= 800,
  Mips_MAXI_S_H	= 801,
  Mips_MAXI_S_W	= 802,
  Mips_MAXI_U_B	= 803,
  Mips_MAXI_U_D	= 804,
  Mips_MAXI_U_H	= 805,
  Mips_MAXI_U_W	= 806,
  Mips_MAX_A_B	= 807,
  Mips_MAX_A_D	= 808,
  Mips_MAX_A_H	= 809,
  Mips_MAX_A_W	= 810,
  Mips_MAX_S_B	= 811,
  Mips_MAX_S_D	= 812,
  Mips_MAX_S_H	= 813,
  Mips_MAX_S_W	= 814,
  Mips_MAX_U_B	= 815,
  Mips_MAX_U_D	= 816,
  Mips_MAX_U_H	= 817,
  Mips_MAX_U_W	= 818,
  Mips_MFC0	= 819,
  Mips_MFC1	= 820,
  Mips_MFC2	= 821,
  Mips_MFHC1	= 822,
  Mips_MFHI	= 823,
  Mips_MFHI64	= 824,
  Mips_MFHI_DSP	= 825,
  Mips_MFHI_MM	= 826,
  Mips_MFLO	= 827,
  Mips_MFLO64	= 828,
  Mips_MFLO_DSP	= 829,
  Mips_MFLO_MM	= 830,
  Mips_MINI_S_B	= 831,
  Mips_MINI_S_D	= 832,
  Mips_MINI_S_H	= 833,
  Mips_MINI_S_W	= 834,
  Mips_MINI_U_B	= 835,
  Mips_MINI_U_D	= 836,
  Mips_MINI_U_H	= 837,
  Mips_MINI_U_W	= 838,
  Mips_MIN_A_B	= 839,
  Mips_MIN_A_D	= 840,
  Mips_MIN_A_H	= 841,
  Mips_MIN_A_W	= 842,
  Mips_MIN_S_B	= 843,
  Mips_MIN_S_D	= 844,
  Mips_MIN_S_H	= 845,
  Mips_MIN_S_W	= 846,
  Mips_MIN_U_B	= 847,
  Mips_MIN_U_D	= 848,
  Mips_MIN_U_H	= 849,
  Mips_MIN_U_W	= 850,
  Mips_MIPSeh_return32	= 851,
  Mips_MIPSeh_return64	= 852,
  Mips_MODSUB	= 853,
  Mips_MOD_S_B	= 854,
  Mips_MOD_S_D	= 855,
  Mips_MOD_S_H	= 856,
  Mips_MOD_S_W	= 857,
  Mips_MOD_U_B	= 858,
  Mips_MOD_U_D	= 859,
  Mips_MOD_U_H	= 860,
  Mips_MOD_U_W	= 861,
  Mips_MOVE_V	= 862,
  Mips_MOVF_D32	= 863,
  Mips_MOVF_D64	= 864,
  Mips_MOVF_I	= 865,
  Mips_MOVF_I64	= 866,
  Mips_MOVF_I_MM	= 867,
  Mips_MOVF_S	= 868,
  Mips_MOVN_I64_D64	= 869,
  Mips_MOVN_I64_I	= 870,
  Mips_MOVN_I64_I64	= 871,
  Mips_MOVN_I64_S	= 872,
  Mips_MOVN_I_D32	= 873,
  Mips_MOVN_I_D64	= 874,
  Mips_MOVN_I_I	= 875,
  Mips_MOVN_I_I64	= 876,
  Mips_MOVN_I_MM	= 877,
  Mips_MOVN_I_S	= 878,
  Mips_MOVT_D32	= 879,
  Mips_MOVT_D64	= 880,
  Mips_MOVT_I	= 881,
  Mips_MOVT_I64	= 882,
  Mips_MOVT_I_MM	= 883,
  Mips_MOVT_S	= 884,
  Mips_MOVZ_I64_D64	= 885,
  Mips_MOVZ_I64_I	= 886,
  Mips_MOVZ_I64_I64	= 887,
  Mips_MOVZ_I64_S	= 888,
  Mips_MOVZ_I_D32	= 889,
  Mips_MOVZ_I_D64	= 890,
  Mips_MOVZ_I_I	= 891,
  Mips_MOVZ_I_I64	= 892,
  Mips_MOVZ_I_MM	= 893,
  Mips_MOVZ_I_S	= 894,
  Mips_MSUB	= 895,
  Mips_MSUBR_Q_H	= 896,
  Mips_MSUBR_Q_W	= 897,
  Mips_MSUBU	= 898,
  Mips_MSUBU_DSP	= 899,
  Mips_MSUBU_MM	= 900,
  Mips_MSUBV_B	= 901,
  Mips_MSUBV_D	= 902,
  Mips_MSUBV_H	= 903,
  Mips_MSUBV_W	= 904,
  Mips_MSUB_D32	= 905,
  Mips_MSUB_D64	= 906,
  Mips_MSUB_DSP	= 907,
  Mips_MSUB_MM	= 908,
  Mips_MSUB_Q_H	= 909,
  Mips_MSUB_Q_W	= 910,
  Mips_MSUB_S	= 911,
  Mips_MTC0	= 912,
  Mips_MTC1	= 913,
  Mips_MTC2	= 914,
  Mips_MTHC1	= 915,
  Mips_MTHI	= 916,
  Mips_MTHI64	= 917,
  Mips_MTHI_DSP	= 918,
  Mips_MTHI_MM	= 919,
  Mips_MTHLIP	= 920,
  Mips_MTLO	= 921,
  Mips_MTLO64	= 922,
  Mips_MTLO_DSP	= 923,
  Mips_MTLO_MM	= 924,
  Mips_MUL	= 925,
  Mips_MULEQ_S_W_PHL	= 926,
  Mips_MULEQ_S_W_PHR	= 927,
  Mips_MULEU_S_PH_QBL	= 928,
  Mips_MULEU_S_PH_QBR	= 929,
  Mips_MULQ_RS_PH	= 930,
  Mips_MULQ_RS_W	= 931,
  Mips_MULQ_S_PH	= 932,
  Mips_MULQ_S_W	= 933,
  Mips_MULR_Q_H	= 934,
  Mips_MULR_Q_W	= 935,
  Mips_MULSAQ_S_W_PH	= 936,
  Mips_MULSA_W_PH	= 937,
  Mips_MULT	= 938,
  Mips_MULTU_DSP	= 939,
  Mips_MULT_DSP	= 940,
  Mips_MULT_MM	= 941,
  Mips_MULTu	= 942,
  Mips_MULTu_MM	= 943,
  Mips_MULV_B	= 944,
  Mips_MULV_D	= 945,
  Mips_MULV_H	= 946,
  Mips_MULV_W	= 947,
  Mips_MUL_MM	= 948,
  Mips_MUL_PH	= 949,
  Mips_MUL_Q_H	= 950,
  Mips_MUL_Q_W	= 951,
  Mips_MUL_S_PH	= 952,
  Mips_Mfhi16	= 953,
  Mips_Mflo16	= 954,
  Mips_Move32R16	= 955,
  Mips_MoveR3216	= 956,
  Mips_MultRxRy16	= 957,
  Mips_MultRxRyRz16	= 958,
  Mips_MultuRxRy16	= 959,
  Mips_MultuRxRyRz16	= 960,
  Mips_NLOC_B	= 961,
  Mips_NLOC_D	= 962,
  Mips_NLOC_H	= 963,
  Mips_NLOC_W	= 964,
  Mips_NLZC_B	= 965,
  Mips_NLZC_D	= 966,
  Mips_NLZC_H	= 967,
  Mips_NLZC_W	= 968,
  Mips_NMADD_D32	= 969,
  Mips_NMADD_D64	= 970,
  Mips_NMADD_S	= 971,
  Mips_NMSUB_D32	= 972,
  Mips_NMSUB_D64	= 973,
  Mips_NMSUB_S	= 974,
  Mips_NOP	= 975,
  Mips_NOR	= 976,
  Mips_NOR64	= 977,
  Mips_NORI_B	= 978,
  Mips_NOR_MM	= 979,
  Mips_NOR_V	= 980,
  Mips_NOR_V_D_PSEUDO	= 981,
  Mips_NOR_V_H_PSEUDO	= 982,
  Mips_NOR_V_W_PSEUDO	= 983,
  Mips_NegRxRy16	= 984,
  Mips_NotRxRy16	= 985,
  Mips_OR	= 986,
  Mips_OR64	= 987,
  Mips_ORI_B	= 988,
  Mips_OR_MM	= 989,
  Mips_OR_V	= 990,
  Mips_OR_V_D_PSEUDO	= 991,
  Mips_OR_V_H_PSEUDO	= 992,
  Mips_OR_V_W_PSEUDO	= 993,
  Mips_ORi	= 994,
  Mips_ORi64	= 995,
  Mips_ORi_MM	= 996,
  Mips_OrRxRxRy16	= 997,
  Mips_PACKRL_PH	= 998,
  Mips_PCKEV_B	= 999,
  Mips_PCKEV_D	= 1000,
  Mips_PCKEV_H	= 1001,
  Mips_PCKEV_W	= 1002,
  Mips_PCKOD_B	= 1003,
  Mips_PCKOD_D	= 1004,
  Mips_PCKOD_H	= 1005,
  Mips_PCKOD_W	= 1006,
  Mips_PCNT_B	= 1007,
  Mips_PCNT_D	= 1008,
  Mips_PCNT_H	= 1009,
  Mips_PCNT_W	= 1010,
  Mips_PICK_PH	= 1011,
  Mips_PICK_QB	= 1012,
  Mips_PRECEQU_PH_QBL	= 1013,
  Mips_PRECEQU_PH_QBLA	= 1014,
  Mips_PRECEQU_PH_QBR	= 1015,
  Mips_PRECEQU_PH_QBRA	= 1016,
  Mips_PRECEQ_W_PHL	= 1017,
  Mips_PRECEQ_W_PHR	= 1018,
  Mips_PRECEU_PH_QBL	= 1019,
  Mips_PRECEU_PH_QBLA	= 1020,
  Mips_PRECEU_PH_QBR	= 1021,
  Mips_PRECEU_PH_QBRA	= 1022,
  Mips_PRECRQU_S_QB_PH	= 1023,
  Mips_PRECRQ_PH_W	= 1024,
  Mips_PRECRQ_QB_PH	= 1025,
  Mips_PRECRQ_RS_PH_W	= 1026,
  Mips_PRECR_QB_PH	= 1027,
  Mips_PRECR_SRA_PH_W	= 1028,
  Mips_PRECR_SRA_R_PH_W	= 1029,
  Mips_PREPEND	= 1030,
  Mips_PseudoCMPU_EQ_QB	= 1031,
  Mips_PseudoCMPU_LE_QB	= 1032,
  Mips_PseudoCMPU_LT_QB	= 1033,
  Mips_PseudoCMP_EQ_PH	= 1034,
  Mips_PseudoCMP_LE_PH	= 1035,
  Mips_PseudoCMP_LT_PH	= 1036,
  Mips_PseudoCVT_D32_W	= 1037,
  Mips_PseudoCVT_D64_L	= 1038,
  Mips_PseudoCVT_D64_W	= 1039,
  Mips_PseudoCVT_S_L	= 1040,
  Mips_PseudoCVT_S_W	= 1041,
  Mips_PseudoDMULT	= 1042,
  Mips_PseudoDMULTu	= 1043,
  Mips_PseudoDSDIV	= 1044,
  Mips_PseudoDUDIV	= 1045,
  Mips_PseudoMADD	= 1046,
  Mips_PseudoMADDU	= 1047,
  Mips_PseudoMFHI	= 1048,
  Mips_PseudoMFHI64	= 1049,
  Mips_PseudoMFLO	= 1050,
  Mips_PseudoMFLO64	= 1051,
  Mips_PseudoMSUB	= 1052,
  Mips_PseudoMSUBU	= 1053,
  Mips_PseudoMTLOHI	= 1054,
  Mips_PseudoMTLOHI64	= 1055,
  Mips_PseudoMTLOHI_DSP	= 1056,
  Mips_PseudoMULT	= 1057,
  Mips_PseudoMULTu	= 1058,
  Mips_PseudoPICK_PH	= 1059,
  Mips_PseudoPICK_QB	= 1060,
  Mips_PseudoSDIV	= 1061,
  Mips_PseudoUDIV	= 1062,
  Mips_RADDU_W_QB	= 1063,
  Mips_RDDSP	= 1064,
  Mips_RDHWR	= 1065,
  Mips_RDHWR64	= 1066,
  Mips_REPLV_PH	= 1067,
  Mips_REPLV_QB	= 1068,
  Mips_REPL_PH	= 1069,
  Mips_REPL_QB	= 1070,
  Mips_RET	= 1071,
  Mips_RET_MM	= 1072,
  Mips_ROTR	= 1073,
  Mips_ROTRV	= 1074,
  Mips_ROTRV_MM	= 1075,
  Mips_ROTR_MM	= 1076,
  Mips_ROUND_L_D64	= 1077,
  Mips_ROUND_L_S	= 1078,
  Mips_ROUND_W_D32	= 1079,
  Mips_ROUND_W_D64	= 1080,
  Mips_ROUND_W_S	= 1081,
  Mips_RestoreIncSpF16	= 1082,
  Mips_RestoreRaF16	= 1083,
  Mips_RetRA	= 1084,
  Mips_RetRA16	= 1085,
  Mips_SAT_S_B	= 1086,
  Mips_SAT_S_D	= 1087,
  Mips_SAT_S_H	= 1088,
  Mips_SAT_S_W	= 1089,
  Mips_SAT_U_B	= 1090,
  Mips_SAT_U_D	= 1091,
  Mips_SAT_U_H	= 1092,
  Mips_SAT_U_W	= 1093,
  Mips_SB	= 1094,
  Mips_SB64	= 1095,
  Mips_SB_MM	= 1096,
  Mips_SC	= 1097,
  Mips_SCD	= 1098,
  Mips_SD	= 1099,
  Mips_SDC1	= 1100,
  Mips_SDC164	= 1101,
  Mips_SDC2	= 1102,
  Mips_SDIV	= 1103,
  Mips_SDIV_MM	= 1104,
  Mips_SDL	= 1105,
  Mips_SDR	= 1106,
  Mips_SDXC1	= 1107,
  Mips_SDXC164	= 1108,
  Mips_SEB	= 1109,
  Mips_SEB64	= 1110,
  Mips_SEB_MM	= 1111,
  Mips_SEH	= 1112,
  Mips_SEH64	= 1113,
  Mips_SEH_MM	= 1114,
  Mips_SH	= 1115,
  Mips_SH64	= 1116,
  Mips_SHF_B	= 1117,
  Mips_SHF_H	= 1118,
  Mips_SHF_W	= 1119,
  Mips_SHILO	= 1120,
  Mips_SHILOV	= 1121,
  Mips_SHLLV_PH	= 1122,
  Mips_SHLLV_QB	= 1123,
  Mips_SHLLV_S_PH	= 1124,
  Mips_SHLLV_S_W	= 1125,
  Mips_SHLL_PH	= 1126,
  Mips_SHLL_QB	= 1127,
  Mips_SHLL_S_PH	= 1128,
  Mips_SHLL_S_W	= 1129,
  Mips_SHRAV_PH	= 1130,
  Mips_SHRAV_QB	= 1131,
  Mips_SHRAV_R_PH	= 1132,
  Mips_SHRAV_R_QB	= 1133,
  Mips_SHRAV_R_W	= 1134,
  Mips_SHRA_PH	= 1135,
  Mips_SHRA_QB	= 1136,
  Mips_SHRA_R_PH	= 1137,
  Mips_SHRA_R_QB	= 1138,
  Mips_SHRA_R_W	= 1139,
  Mips_SHRLV_PH	= 1140,
  Mips_SHRLV_QB	= 1141,
  Mips_SHRL_PH	= 1142,
  Mips_SHRL_QB	= 1143,
  Mips_SH_MM	= 1144,
  Mips_SLDI_B	= 1145,
  Mips_SLDI_D	= 1146,
  Mips_SLDI_H	= 1147,
  Mips_SLDI_W	= 1148,
  Mips_SLD_B	= 1149,
  Mips_SLD_D	= 1150,
  Mips_SLD_H	= 1151,
  Mips_SLD_W	= 1152,
  Mips_SLL	= 1153,
  Mips_SLL64_32	= 1154,
  Mips_SLL64_64	= 1155,
  Mips_SLLI_B	= 1156,
  Mips_SLLI_D	= 1157,
  Mips_SLLI_H	= 1158,
  Mips_SLLI_W	= 1159,
  Mips_SLLV	= 1160,
  Mips_SLLV_MM	= 1161,
  Mips_SLL_B	= 1162,
  Mips_SLL_D	= 1163,
  Mips_SLL_H	= 1164,
  Mips_SLL_MM	= 1165,
  Mips_SLL_W	= 1166,
  Mips_SLT	= 1167,
  Mips_SLT64	= 1168,
  Mips_SLT_MM	= 1169,
  Mips_SLTi	= 1170,
  Mips_SLTi64	= 1171,
  Mips_SLTi_MM	= 1172,
  Mips_SLTiu	= 1173,
  Mips_SLTiu64	= 1174,
  Mips_SLTiu_MM	= 1175,
  Mips_SLTu	= 1176,
  Mips_SLTu64	= 1177,
  Mips_SLTu_MM	= 1178,
  Mips_SNZ_B_PSEUDO	= 1179,
  Mips_SNZ_D_PSEUDO	= 1180,
  Mips_SNZ_H_PSEUDO	= 1181,
  Mips_SNZ_V_PSEUDO	= 1182,
  Mips_SNZ_W_PSEUDO	= 1183,
  Mips_SPLATI_B	= 1184,
  Mips_SPLATI_D	= 1185,
  Mips_SPLATI_H	= 1186,
  Mips_SPLATI_W	= 1187,
  Mips_SPLAT_B	= 1188,
  Mips_SPLAT_D	= 1189,
  Mips_SPLAT_H	= 1190,
  Mips_SPLAT_W	= 1191,
  Mips_SRA	= 1192,
  Mips_SRAI_B	= 1193,
  Mips_SRAI_D	= 1194,
  Mips_SRAI_H	= 1195,
  Mips_SRAI_W	= 1196,
  Mips_SRARI_B	= 1197,
  Mips_SRARI_D	= 1198,
  Mips_SRARI_H	= 1199,
  Mips_SRARI_W	= 1200,
  Mips_SRAR_B	= 1201,
  Mips_SRAR_D	= 1202,
  Mips_SRAR_H	= 1203,
  Mips_SRAR_W	= 1204,
  Mips_SRAV	= 1205,
  Mips_SRAV_MM	= 1206,
  Mips_SRA_B	= 1207,
  Mips_SRA_D	= 1208,
  Mips_SRA_H	= 1209,
  Mips_SRA_MM	= 1210,
  Mips_SRA_W	= 1211,
  Mips_SRL	= 1212,
  Mips_SRLI_B	= 1213,
  Mips_SRLI_D	= 1214,
  Mips_SRLI_H	= 1215,
  Mips_SRLI_W	= 1216,
  Mips_SRLRI_B	= 1217,
  Mips_SRLRI_D	= 1218,
  Mips_SRLRI_H	= 1219,
  Mips_SRLRI_W	= 1220,
  Mips_SRLR_B	= 1221,
  Mips_SRLR_D	= 1222,
  Mips_SRLR_H	= 1223,
  Mips_SRLR_W	= 1224,
  Mips_SRLV	= 1225,
  Mips_SRLV_MM	= 1226,
  Mips_SRL_B	= 1227,
  Mips_SRL_D	= 1228,
  Mips_SRL_H	= 1229,
  Mips_SRL_MM	= 1230,
  Mips_SRL_W	= 1231,
  Mips_STORE_ACC128	= 1232,
  Mips_STORE_ACC64	= 1233,
  Mips_STORE_ACC64DSP	= 1234,
  Mips_STORE_CCOND_DSP	= 1235,
  Mips_ST_B	= 1236,
  Mips_ST_D	= 1237,
  Mips_ST_H	= 1238,
  Mips_ST_W	= 1239,
  Mips_SUB	= 1240,
  Mips_SUBQH_PH	= 1241,
  Mips_SUBQH_R_PH	= 1242,
  Mips_SUBQH_R_W	= 1243,
  Mips_SUBQH_W	= 1244,
  Mips_SUBQ_PH	= 1245,
  Mips_SUBQ_S_PH	= 1246,
  Mips_SUBQ_S_W	= 1247,
  Mips_SUBSUS_U_B	= 1248,
  Mips_SUBSUS_U_D	= 1249,
  Mips_SUBSUS_U_H	= 1250,
  Mips_SUBSUS_U_W	= 1251,
  Mips_SUBSUU_S_B	= 1252,
  Mips_SUBSUU_S_D	= 1253,
  Mips_SUBSUU_S_H	= 1254,
  Mips_SUBSUU_S_W	= 1255,
  Mips_SUBS_S_B	= 1256,
  Mips_SUBS_S_D	= 1257,
  Mips_SUBS_S_H	= 1258,
  Mips_SUBS_S_W	= 1259,
  Mips_SUBS_U_B	= 1260,
  Mips_SUBS_U_D	= 1261,
  Mips_SUBS_U_H	= 1262,
  Mips_SUBS_U_W	= 1263,
  Mips_SUBUH_QB	= 1264,
  Mips_SUBUH_R_QB	= 1265,
  Mips_SUBU_PH	= 1266,
  Mips_SUBU_QB	= 1267,
  Mips_SUBU_S_PH	= 1268,
  Mips_SUBU_S_QB	= 1269,
  Mips_SUBVI_B	= 1270,
  Mips_SUBVI_D	= 1271,
  Mips_SUBVI_H	= 1272,
  Mips_SUBVI_W	= 1273,
  Mips_SUBV_B	= 1274,
  Mips_SUBV_D	= 1275,
  Mips_SUBV_H	= 1276,
  Mips_SUBV_W	= 1277,
  Mips_SUB_MM	= 1278,
  Mips_SUBu	= 1279,
  Mips_SUBu_MM	= 1280,
  Mips_SUXC1	= 1281,
  Mips_SUXC164	= 1282,
  Mips_SW	= 1283,
  Mips_SW64	= 1284,
  Mips_SWC1	= 1285,
  Mips_SWC2	= 1286,
  Mips_SWL	= 1287,
  Mips_SWL64	= 1288,
  Mips_SWL_MM	= 1289,
  Mips_SWR	= 1290,
  Mips_SWR64	= 1291,
  Mips_SWR_MM	= 1292,
  Mips_SWXC1	= 1293,
  Mips_SW_MM	= 1294,
  Mips_SYNC	= 1295,
  Mips_SYSCALL	= 1296,
  Mips_SZ_B_PSEUDO	= 1297,
  Mips_SZ_D_PSEUDO	= 1298,
  Mips_SZ_H_PSEUDO	= 1299,
  Mips_SZ_V_PSEUDO	= 1300,
  Mips_SZ_W_PSEUDO	= 1301,
  Mips_SaveDecSpF16	= 1302,
  Mips_SaveRaF16	= 1303,
  Mips_SbRxRyOffMemX16	= 1304,
  Mips_SebRx16	= 1305,
  Mips_SehRx16	= 1306,
  Mips_SelBeqZ	= 1307,
  Mips_SelBneZ	= 1308,
  Mips_SelTBteqZCmp	= 1309,
  Mips_SelTBteqZCmpi	= 1310,
  Mips_SelTBteqZSlt	= 1311,
  Mips_SelTBteqZSlti	= 1312,
  Mips_SelTBteqZSltiu	= 1313,
  Mips_SelTBteqZSltu	= 1314,
  Mips_SelTBtneZCmp	= 1315,
  Mips_SelTBtneZCmpi	= 1316,
  Mips_SelTBtneZSlt	= 1317,
  Mips_SelTBtneZSlti	= 1318,
  Mips_SelTBtneZSltiu	= 1319,
  Mips_SelTBtneZSltu	= 1320,
  Mips_ShRxRyOffMemX16	= 1321,
  Mips_SllX16	= 1322,
  Mips_SllvRxRy16	= 1323,
  Mips_SltCCRxRy16	= 1324,
  Mips_SltRxRy16	= 1325,
  Mips_SltiCCRxImmX16	= 1326,
  Mips_SltiRxImm16	= 1327,
  Mips_SltiRxImmX16	= 1328,
  Mips_SltiuCCRxImmX16	= 1329,
  Mips_SltiuRxImm16	= 1330,
  Mips_SltiuRxImmX16	= 1331,
  Mips_SltuCCRxRy16	= 1332,
  Mips_SltuRxRy16	= 1333,
  Mips_SltuRxRyRz16	= 1334,
  Mips_SraX16	= 1335,
  Mips_SravRxRy16	= 1336,
  Mips_SrlX16	= 1337,
  Mips_SrlvRxRy16	= 1338,
  Mips_SubuRxRyRz16	= 1339,
  Mips_SwRxRyOffMemX16	= 1340,
  Mips_SwRxSpImmX16	= 1341,
  Mips_TAILCALL	= 1342,
  Mips_TAILCALL64_R	= 1343,
  Mips_TAILCALL_MM	= 1344,
  Mips_TAILCALL_R	= 1345,
  Mips_TAILCALL_R_MM	= 1346,
  Mips_TEQ	= 1347,
  Mips_TEQI	= 1348,
  Mips_TGE	= 1349,
  Mips_TGEI	= 1350,
  Mips_TGEIU	= 1351,
  Mips_TGEU	= 1352,
  Mips_TLT	= 1353,
  Mips_TLTI	= 1354,
  Mips_TLTU	= 1355,
  Mips_TNE	= 1356,
  Mips_TNEI	= 1357,
  Mips_TRAP	= 1358,
  Mips_TRUNC_L_D64	= 1359,
  Mips_TRUNC_L_S	= 1360,
  Mips_TRUNC_W_D32	= 1361,
  Mips_TRUNC_W_D64	= 1362,
  Mips_TRUNC_W_S	= 1363,
  Mips_TTLTIU	= 1364,
  Mips_UDIV	= 1365,
  Mips_UDIV_MM	= 1366,
  Mips_VSHF_B	= 1367,
  Mips_VSHF_D	= 1368,
  Mips_VSHF_H	= 1369,
  Mips_VSHF_W	= 1370,
  Mips_WAIT	= 1371,
  Mips_WRDSP	= 1372,
  Mips_WSBH	= 1373,
  Mips_WSBH_MM	= 1374,
  Mips_XOR	= 1375,
  Mips_XOR64	= 1376,
  Mips_XORI_B	= 1377,
  Mips_XOR_MM	= 1378,
  Mips_XOR_V	= 1379,
  Mips_XOR_V_D_PSEUDO	= 1380,
  Mips_XOR_V_H_PSEUDO	= 1381,
  Mips_XOR_V_W_PSEUDO	= 1382,
  Mips_XORi	= 1383,
  Mips_XORi64	= 1384,
  Mips_XORi_MM	= 1385,
  Mips_XorRxRxRy16	= 1386,
  Mips_INSTRUCTION_LIST_END = 1387
};

#endif // GET_INSTRINFO_ENUM