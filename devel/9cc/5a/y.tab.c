
#line	2	"a.y"
#include "a.h"

#line	4	"a.y"
typedef union 
{
	Sym	*sym;
	long	lval;
	double	dval;
	char	sval[8];
	Gen	gen;
} YYSTYPE;
extern	int	yyerrflag;
#ifndef	YYMAXDEPTH
#define	YYMAXDEPTH	150
#endif
YYSTYPE	yylval;
YYSTYPE	yyval;
#define	LTYPE1	57346
#define	LTYPE2	57347
#define	LTYPE3	57348
#define	LTYPE4	57349
#define	LTYPE5	57350
#define	LTYPE6	57351
#define	LTYPE7	57352
#define	LTYPE8	57353
#define	LTYPE9	57354
#define	LTYPEA	57355
#define	LTYPEB	57356
#define	LTYPEC	57357
#define	LTYPED	57358
#define	LTYPEE	57359
#define	LTYPEF	57360
#define	LTYPEG	57361
#define	LTYPEH	57362
#define	LTYPEI	57363
#define	LTYPEJ	57364
#define	LTYPEK	57365
#define	LTYPEL	57366
#define	LTYPEM	57367
#define	LTYPEN	57368
#define	LTYPEBX	57369
#define	LCONST	57370
#define	LSP	57371
#define	LSB	57372
#define	LFP	57373
#define	LPC	57374
#define	LTYPEX	57375
#define	LR	57376
#define	LREG	57377
#define	LF	57378
#define	LFREG	57379
#define	LC	57380
#define	LCREG	57381
#define	LPSR	57382
#define	LFCR	57383
#define	LCOND	57384
#define	LS	57385
#define	LAT	57386
#define	LFCONST	57387
#define	LSCONST	57388
#define	LNAME	57389
#define	LLAB	57390
#define	LVAR	57391
#define YYEOFCODE 1
#define YYERRCODE 2
short	yyexca[] =
{-1, 1,
	1, -1,
	-2, 0,
-1, 190,
	65, 57,
	-2, 45,
};
#define	YYNPROD	128
#define	YYPRIVATE 57344
#define	YYLAST	659
short	yyact[] =
{
 130, 119, 310, 100,  94,  76,  89, 107,  77, 265,
 196, 123,  87,  96,  78,  95, 103,  80,  81, 189,
 235,  41,  43, 108,   2, 320, 306,  82, 288, 278,
  84,  60,  85,  83,  70,  72, 277, 276,  67,  79,
  79,  79, 273, 272, 251,  88, 237,  79, 104, 316,
 114,  42, 112, 117,  90, 118, 120, 304, 105, 167,
  99, 289, 200, 106, 240, 132, 191, 133, 183,  55,
  54, 141, 142, 176, 175, 166, 163, 134, 136, 139,
 122,  49,  58, 297, 102, 101,  55, 173, 170, 245,
  74,  75, 246, 143, 144, 244,  74,  75,  52,  82,
 174, 169,  84, 322,  85,  83, 138,  42, 174, 315,
 313, 309,  55,  54,  79,  52, 307, 190,  88,  53,
 295, 181, 184, 185, 294, 186,  57,  90, 177,  56,
 194,  42, 172, 171,  51, 193,  53, 291, 284, 281,
 206,  52, 264,  98, 254,  42,  56, 214, 215, 216,
 217, 218, 250, 249, 221, 222, 223, 213, 236, 224,
  71, 212,  53, 225, 230, 182,  36,  79, 233,  57,
 231,  88,  56, 211, 210, 208, 207, 192, 232, 188,
  90,  50,  50, 187, 165, 164, 234, 157, 121, 243,
  35,  97, 241,  34, 238,  32,  33,  31, 247, 209,
  93, 236, 312, 311, 109, 102, 101, 116, 242, 248,
 234, 252, 259, 253, 300, 127, 128, 129, 260, 261,
 262, 263, 131, 255, 256, 140, 258, 229, 266, 266,
 266, 266, 102, 257,  55,  54, 228, 268, 269, 270,
 274, 162, 125, 126, 172, 227, 190, 220, 282, 190,
 201, 279,  55,  54, 137, 286, 285, 168, 226, 287,
 219, 290,   7,  52, 280, 179, 292, 283,  69,  68,
 296,  55,  54,  93,   1,  55,  54,  74,  75, 178,
 135,  52, 195, 303,  53, 298, 202, 203, 321, 115,
 299,  98, 205,  82,  56, 302,  84,   0,  85,  83,
  52, 305,  53,   0,  52,   0, 308, 301,   0,  57,
   0, 314,  56,   0,   0, 317,   0, 319, 318, 180,
 111,  53,   0, 324,   0,  53,  93,  84,  98,  85,
  83,  56,  98,   0, 127,  56,   0, 239,   8, 155,
 154, 153, 151, 152, 146, 147, 148, 149, 150,   0,
   9,  10,  11,  12,  14,  15,  16,  17,  18,  19,
  20,  21,  22,  30,   0,   0,  23,  24,  27,  25,
  26,  28,  29,  13,  55,  54, 155, 154, 153, 151,
 152, 146, 147, 148, 149, 150,  73, 267, 267, 267,
 267,   0,   0,   4,   3,   5, 275,   0,   6, 102,
 101,   0, 323,  52,  82,  74,  75,  84,   0,  85,
  83, 102, 101,   0,   0,  91,  92,  74,  75,  55,
  54,   0,  51,  82,  53,  86,  84,   0,  85,  83,
   0,  98, 113,  96,  56,   0,  74,  75, 124, 271,
 125, 126, 116,   0,  55,  54,   0,  42,  52,  82,
   0,   0,  84,   0,  85,  83, 102, 101,   0,   0,
  91,  92,  55,  54, 198, 197, 199,  51,   0,  53,
  55,  54,   0,  52,  55,  54,  98,   0,  96,  56,
 155, 154, 153, 151, 152, 146, 147, 148, 149, 150,
   0,  52, 110, 111,  53,   0,  55,  54,   0,  52,
   0,  57,   0,  52,  56,  74,  75, 158, 159,   0,
 160,   0,  53, 198, 197, 199, 242,   0,  51,  57,
  53,   0,  56,  82,  53,  52,  84,  98,  85,  83,
  56,  57,   0,  80,  56,  82,  74,  75,  84,   0,
  85,  83,   0, 204,  51,   0,  53,   0,  74,  75,
   0,   0,  80,  57, 161,   0,  56, 155, 154, 153,
 151, 152, 146, 147, 148, 149, 150, 155, 154, 153,
 151, 152, 146, 147, 148, 149, 150, 155, 154, 153,
 151, 152, 146, 147, 148, 149, 150, 198, 197, 199,
  84,   0,  85,  83,  37, 155, 154, 153, 151, 152,
 146, 147, 148, 149, 150,  38,  39,  40,   0,   0,
  44,  45,  46,  47,  48,   0, 293,  59,   0,  61,
  62,  63,  64,  65,  66, 156, 154, 153, 151, 152,
 146, 147, 148, 149, 150, 145, 153, 151, 152, 146,
 147, 148, 149, 150, 151, 152, 146, 147, 148, 149,
 150, 146, 147, 148, 149, 150, 148, 149, 150
};
short	yypact[] =
{
-1000, 336,-1000, 137, 135, 132,-1000, 128, 104,-1000,
-1000,-1000,-1000,  68,  68,-1000,-1000,-1000,-1000,-1000,
 487, 487,-1000,  68,-1000,-1000,-1000,-1000,-1000,-1000,
  68,-1000,-1000, 243, 243,-1000,-1000, 484, 484, 365,
  44,  -3,  68, 435,  44, 484, 225, 384,  44, 125,
  14, 431,-1000,-1000, 243, 243, 243, 243, 210, 496,
 -55, 353,  38, 353, 453, 496, 496,-1000, 336, 336,
 573,-1000, 563, 124,-1000,-1000,-1000,-1000,-1000, 500,
 243,-1000,-1000,-1000,-1000,  10, 122, 121,-1000,-1000,
   9,-1000,-1000,  -7,-1000,-1000,  77,-1000,  60,   8,
-1000,-1000,   7,-1000, 262,-1000, 254,-1000,-1000,   2,
 233, 233, 410, 120, 116, 254,   0, 114,  -3,-1000,
-1000, 465, 425,  -4, 242, 243, 243,-1000,-1000,-1000,
 476, 243,  68,-1000, 113, 112,-1000,-1000, 189, 111,
 110,  98,  94,-1000,-1000,-1000, 243, 243, 243, 243,
 243, 253, 239, 243, 243, 243,-1000, 254, 251, 237,
 228, 219,-1000, 243, 254, 410, 254, 548,  -7,-1000,
 -48,-1000,-1000, 103, -21, 285, 243,-1000,-1000,  -2,
 431,-1000,-1000, 166,-1000,-1000,-1000, 254,  31,  24,
  82, 285,  -3,  90,-1000,  89, -23,-1000,-1000,-1000,
 425, 233,-1000,-1000,-1000,  81,-1000, 159, 186, 146,
 159, 243, 254, 254, 645, 645,-1000,-1000,-1000, 243,
 243, 637, 630, 621,  79,-1000,  60,  60,  60,  60,
 372,-1000,-1000, -24, -25, 461,-1000,-1000, -30, -31,
 474,  -4, -38,  68, 254,  76, 254, 254,  75, 254,
 -51,-1000, -39,  -5, -55,-1000,-1000,  74,  68, 553,
  61,  57, 642, 642, 254,-1000,-1000,-1000,-1000,-1000,
-1000,-1000,-1000,-1000,-1000,  -7,-1000,-1000,-1000,-1000,
  18, 266,-1000,-1000, -12,-1000,-1000,-1000,-1000, 174,
-1000, 159,-1000, 254,  -9, 254,-1000,-1000,-1000,-1000,
 -41,-1000,  53,-1000, 254,  48,-1000, 154,  47, 254,
  46,-1000, -17, 254,-1000, 154, 243, -42,  40, 335,
-1000,-1000, 243,-1000, 591
};
short	yypgo[] =
{
   0, 160,   0, 288,  10,  11,  18,   1,   2,   9,
 594,  19,  12,  23,   5, 283,  15,  14, 191, 280,
   8,   6,  60,   4,  16, 279,   3, 386, 274,  24,
 269, 268, 262,   7
};
