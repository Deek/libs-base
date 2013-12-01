/*
	Adobe Symbol to Unicode mapping

	Copying and distribution of this file, with or without modification,
	are permitted in any medium without royalty provided the copyright
	notice and this notice are preserved.
*/

static const unsigned int Symbol_conv_base = 0x20;
static unichar Symbol_char_to_uni_table[] =
{
  0x00A0,//00A0  20  # NO-BREAK SPACE	# space
  0x0021,//0021  21  # EXCLAMATION MARK  # exclam
  0x2200,//2200  22  # FOR ALL	# universal
  0x0023,//0023  23  # NUMBER SIGN	# numbersign
  0x2203,//2203  24  # THERE EXISTS  # existential
  0x0025,//0025  25  # PERCENT SIGN  # percent
  0x0026,//0026  26  # AMPERSAND # ampersand
  0x220b,//220B  27  # CONTAINS AS MEMBER	# suchthat
  0x0028,//0028  28  # LEFT PARENTHESIS  # parenleft
  0x0029,//0029  29  # RIGHT PARENTHESIS # parenright
  0x2217,//2217  2A  # ASTERISK OPERATOR # asteriskmath
  0x002B,//002B  2B  # PLUS SIGN # plus
  0x002C,//002C  2C  # COMMA # comma
  0x2212,//2212  2D  # MINUS SIGN	# minus
  0x002E,//002E  2E  # FULL STOP # period
  0x002F,//002F  2F  # SOLIDUS	# slash

  0x0030,//0030  30  # DIGIT ZERO	# zero
  0x0031,//0031  31  # DIGIT ONE # one
  0x0032,//0032  32  # DIGIT TWO # two
  0x0033,//0033  33  # DIGIT THREE	# three
  0x0034,//0034  34  # DIGIT FOUR	# four
  0x0035,//0035  35  # DIGIT FIVE	# five
  0x0036,//0036  36  # DIGIT SIX # six
  0x0037,//0037  37  # DIGIT SEVEN	# seven
  0x0038,//0038  38  # DIGIT EIGHT	# eight
  0x0039,//0039  39  # DIGIT NINE	# nine
  0x003a,//003A  3A  # COLON # colon
  0x003b,//003B  3B  # SEMICOLON # semicolon
  0x003c,//003C  3C  # LESS-THAN SIGN	# less
  0x003d,//003D  3D  # EQUALS SIGN	# equal
  0x003e,//003E  3E  # GREATER-THAN SIGN # greater
  0x003f,//003F  3F  # QUESTION MARK # question

  0x2245,//2245	40	# APPROXIMATELY EQUAL TO	# congruent
  0x0391,//0391	41	# GREEK CAPITAL LETTER ALPHA	# Alpha
  0x0392,//0392	42	# GREEK CAPITAL LETTER BETA	# Beta
  0x03A7,//03A7	43	# GREEK CAPITAL LETTER CHI	# Chi
  0x0394,//0394	44	# GREEK CAPITAL LETTER DELTA	# Delta
  0x0395,//0395	45	# GREEK CAPITAL LETTER EPSILON	# Epsilon
  0x03A6,//03A6	46	# GREEK CAPITAL LETTER PHI	# Phi
  0x0393,//0393	47	# GREEK CAPITAL LETTER GAMMA	# Gamma
  0x0397,//0397	48	# GREEK CAPITAL LETTER ETA	# Eta
  0x0399,//0399	49	# GREEK CAPITAL LETTER IOTA	# Iota
  0x03D1,//03D1	4A	# GREEK THETA SYMBOL	# theta1
  0x039A,//039A	4B	# GREEK CAPITAL LETTER KAPPA	# Kappa
  0x039B,//039B	4C	# GREEK CAPITAL LETTER LAMDA	# Lambda
  0x039C,//039C	4D	# GREEK CAPITAL LETTER MU	# Mu
  0x039D,//039D	4E	# GREEK CAPITAL LETTER NU	# Nu
  0x039F,//039F	4F	# GREEK CAPITAL LETTER OMICRON	# Omicron

  0x03a0,//03A0  50  # GREEK CAPITAL LETTER PI	# Pi
  0x0398,//0398  51  # GREEK CAPITAL LETTER THETA	# Theta
  0x03a1,//03A1  52  # GREEK CAPITAL LETTER RHO  # Rho
  0x03a3,//03A3  53  # GREEK CAPITAL LETTER SIGMA	# Sigma
  0x03a4,//03A4  54  # GREEK CAPITAL LETTER TAU  # Tau
  0x03a5,//03A5  55  # GREEK CAPITAL LETTER UPSILON  # Upsilon
  0x03c2,//03C2  56  # GREEK SMALL LETTER FINAL SIGMA	# sigma1
  0x03a9,//03A9  57  # GREEK CAPITAL LETTER OMEGA	# Omega
  0x039e,//039E  58  # GREEK CAPITAL LETTER XI	# Xi
  0x03a8,//03A8  59  # GREEK CAPITAL LETTER PSI  # Psi
  0x0396,//0396  5A  # GREEK CAPITAL LETTER ZETA # Zeta
  0x005b,//005B  5B  # LEFT SQUARE BRACKET	# bracketleft
  0x2234,//2234  5C  # THEREFORE # therefore
  0x005D,//005D  5D  # RIGHT SQUARE BRACKET  # bracketright
  0x005E,//22A5  5E  # UP TACK	# perpendicular
  0x005F,//005F  5F  # LOW LINE  # underscore

  0xf8e5,//F8E5  60  # RADICAL EXTENDER  # radicalex (CUS)
  0x03b1,//03B1  61  # GREEK SMALL LETTER ALPHA  # alpha
  0x03b2,//03B2  62  # GREEK SMALL LETTER BETA	# beta
  0x03c7,//03C7  63  # GREEK SMALL LETTER CHI	# chi
  0x03b4,//03B4  64  # GREEK SMALL LETTER DELTA  # delta
  0x03b5,//03B5  65  # GREEK SMALL LETTER EPSILON	# epsilon
  0x03c6,//03C6  66  # GREEK SMALL LETTER PHI	# phi
  0x03b3,//03B3  67  # GREEK SMALL LETTER GAMMA  # gamma
  0x03b7,//03B7  68  # GREEK SMALL LETTER ETA	# eta
  0x03b9,//03B9  69  # GREEK SMALL LETTER IOTA	# iota
  0x03d5,//03D5  6A  # GREEK PHI SYMBOL  # phi1
  0x03ba,//03BA  6B  # GREEK SMALL LETTER KAPPA  # kappa
  0x03bb,//03BB  6C  # GREEK SMALL LETTER LAMDA  # lambda
  0x03bc,//03BC  6D  # GREEK SMALL LETTER MU # mu
  0x03bd,//03BD  6E  # GREEK SMALL LETTER NU # nu
  0x03bf,//03BF  6F  # GREEK SMALL LETTER OMICRON	# omicron

  0x03c0,//03C0  70  # GREEK SMALL LETTER PI # pi
  0x03b8,//03B8  71  # GREEK SMALL LETTER THETA  # theta
  0x03c1,//03C1  72  # GREEK SMALL LETTER RHO	# rho
  0x03c3,//03C3  73  # GREEK SMALL LETTER SIGMA  # sigma
  0x03c4,//03C4  74  # GREEK SMALL LETTER TAU	# tau
  0x03c5,//03C5  75  # GREEK SMALL LETTER UPSILON	# upsilon
  0x03d6,//03D6  76  # GREEK PI SYMBOL	# omega1
  0x03c9,//03C9  77  # GREEK SMALL LETTER OMEGA  # omega
  0x03be,//03BE  78  # GREEK SMALL LETTER XI # xi
  0x03c8,//03C8  79  # GREEK SMALL LETTER PSI	# psi
  0x03b6,//03B6  7A  # GREEK SMALL LETTER ZETA	# zeta
  0x007b,//007B  7B  # LEFT CURLY BRACKET	# braceleft
  0x007c,//007C  7C  # VERTICAL LINE # bar
  0x007d,//007D  7D  # RIGHT CURLY BRACKET	# braceright
  0x223c,//223C  7E  # TILDE OPERATOR	# similar
  0x007f,// delete
// no mapping at all, but what else to do?
  0x0080,
  0x0081,
  0x0082,
  0x0083,
  0x0084,
  0x0085,
  0x0086,
  0x0087,
  0x0088,
  0x0089,
  0x008a,
  0x008b,
  0x008c,
  0x008d,
  0x008e,
  0x008f,

  0x0090,
  0x0091,
  0x0092,
  0x0093,
  0x0094,
  0x0095,
  0x0096,
  0x0097,
  0x0098,
  0x0099,
  0x009a,
  0x009b,
  0x009c,
  0x009d,
  0x009e,
  0x009f,

  0x20ac,//20AC  A0  # EURO SIGN # Euro
  0x03d2,//03D2  A1  # GREEK UPSILON WITH HOOK SYMBOL	# Upsilon1
  0x2032,//2032  A2  # PRIME # minute
  0x2264,//2264  A3  # LESS-THAN OR EQUAL TO # lessequal
  0x2044,//2044  A4  # FRACTION SLASH	# fraction
  0x221e,//221E  A5  # INFINITY  # infinity
  0x0192,//0192  A6  # LATIN SMALL LETTER F WITH HOOK	# florin
  0x2663,//2663  A7  # BLACK CLUB SUIT	# club
  0x2666,//2666  A8  # BLACK DIAMOND SUIT	# diamond
  0x2665,//2665  A9  # BLACK HEART SUIT  # heart
  0x2660,//2660  AA  # BLACK SPADE SUIT  # spade
  0x2194,//2194  AB  # LEFT RIGHT ARROW  # arrowboth
  0x2190,//2190  AC  # LEFTWARDS ARROW	# arrowleft
  0x2191,//2191  AD  # UPWARDS ARROW # arrowup
  0x2192,//2192  AE  # RIGHTWARDS ARROW  # arrowright
  0x2193,//2193  AF  # DOWNWARDS ARROW	# arrowdown

  0x00B0,//00B0  B0  # DEGREE SIGN	# degree
  0x00B1,//00B1  B1  # PLUS-MINUS SIGN	# plusminus
  0x2033,//2033  B2  # DOUBLE PRIME  # second
  0x2265,//2265  B3  # GREATER-THAN OR EQUAL TO  # greaterequal
  0x00d7,//00D7  B4  # MULTIPLICATION SIGN	# multiply
  0x221d,//221D  B5  # PROPORTIONAL TO	# proportional
  0x2202,//2202  B6  # PARTIAL DIFFERENTIAL  # partialdiff
  0x2022,//2022  B7  # BULLET	# bullet
  0x00f7,//00F7  B8  # DIVISION SIGN # divide
  0x2260,//2260  B9  # NOT EQUAL TO  # notequal
  0x2261,//2261  BA  # IDENTICAL TO  # equivalence
  0x2248,//2248  BB  # ALMOST EQUAL TO	# approxequal
  0x2026,//2026  BC  # HORIZONTAL ELLIPSIS	# ellipsis
  0xf8e6,//F8E6  BD  # VERTICAL ARROW EXTENDER	# arrowvertex (CUS)
  0xf8e7,//F8E7  BE  # HORIZONTAL ARROW EXTENDER # arrowhorizex (CUS)
  0x21b5,//21B5  BF  # DOWNWARDS ARROW WITH CORNER LEFTWARDS # carriagereturn

  0x2135,//2135  C0  # ALEF SYMBOL	# aleph
  0x2111,//2111  C1  # BLACK-LETTER CAPITAL I	# Ifraktur
  0x211c,//211C  C2  # BLACK-LETTER CAPITAL R	# Rfraktur
  0x2118,//2118  C3  # SCRIPT CAPITAL P  # weierstrass
  0x2297,//2297  C4  # CIRCLED TIMES # circlemultiply
  0x2295,//2295  C5  # CIRCLED PLUS  # circleplus
  0x2205,//2205  C6  # EMPTY SET # emptyset
  0x2229,//2229  C7  # INTERSECTION  # intersection
  0x222a,//222A  C8  # UNION # union
  0x2283,//2283  C9  # SUPERSET OF	# propersuperset
  0x2287,//2287  CA  # SUPERSET OF OR EQUAL TO	# reflexsuperset
  0x2284,//2284  CB  # NOT A SUBSET OF	# notsubset
  0x00CC,//2282  CC  # SUBSET OF # propersubset
  0x00CD,//2286  CD  # SUBSET OF OR EQUAL TO # reflexsubset
  0x00CE,//2208  CE  # ELEMENT OF	# element
  0x00CF,//2209  CF  # NOT AN ELEMENT OF # notelement

  0x2220,//2220  D0  # ANGLE # angle
  0x2207,//2207  D1  # NABLA # gradient
  0xf6da,//F6DA  D2  # REGISTERED SIGN SERIF # registerserif (CUS)
  0xf6d9,//F6D9  D3  # COPYRIGHT SIGN SERIF  # copyrightserif (CUS)
  0xf6db,//F6DB  D4  # TRADE MARK SIGN SERIF # trademarkserif (CUS)
  0x220f,//220F  D5  # N-ARY PRODUCT # product
  0x221a,//221A  D6  # SQUARE ROOT	# radical
  0x22c5,//22C5  D7  # DOT OPERATOR  # dotmath
  0x00ac,//00AC  D8  # NOT SIGN  # logicalnot
  0x2227,//2227  D9  # LOGICAL AND	# logicaland
  0x2228,//2228  DA  # LOGICAL OR	# logicalor
  0x21d4,//21D4  DB  # LEFT RIGHT DOUBLE ARROW	# arrowdblboth
  0x21d0,//21D0  DC  # LEFTWARDS DOUBLE ARROW	# arrowdblleft
  0x21d1,//21D1  DD  # UPWARDS DOUBLE ARROW  # arrowdblup
  0x21d2,//21D2  DE  # RIGHTWARDS DOUBLE ARROW	# arrowdblright
  0x21d3,//21D3  DF  # DOWNWARDS DOUBLE ARROW	# arrowdbldown

  0x25ca,//25CA  E0  # LOZENGE	# lozenge
  0x2329,//2329  E1  # LEFT-POINTING ANGLE BRACKET	# angleleft
  0xf8e8,//F8E8  E2  # REGISTERED SIGN SANS SERIF	# registersans (CUS)
  0xf8e9,//F8E9  E3  # COPYRIGHT SIGN SANS SERIF # copyrightsans (CUS)
  0xf8ea,//F8EA  E4  # TRADE MARK SIGN SANS SERIF	# trademarksans (CUS)
  0x2211,//2211  E5  # N-ARY SUMMATION	# summation
  0xf8eb,//F8EB  E6  # LEFT PAREN TOP	# parenlefttp (CUS)
  0xf8ec,//F8EC  E7  # LEFT PAREN EXTENDER	# parenleftex (CUS)
  0xf8ed,//F8ED  E8  # LEFT PAREN BOTTOM # parenleftbt (CUS)
  0xf8ee,//F8EE  E9  # LEFT SQUARE BRACKET TOP	# bracketlefttp (CUS)
  0xf8ef,//F8EF  EA  # LEFT SQUARE BRACKET EXTENDER  # bracketleftex (CUS)
  0xf8f0,//F8F0  EB  # LEFT SQUARE BRACKET BOTTOM	# bracketleftbt (CUS)
  0xf8f1,//F8F1  EC  # LEFT CURLY BRACKET TOP	# bracelefttp (CUS)
  0xf8f2,//F8F2  ED  # LEFT CURLY BRACKET MID	# braceleftmid (CUS)
  0xf8f3,//F8F3  EE  # LEFT CURLY BRACKET BOTTOM # braceleftbt (CUS)
  0xf8f4,//F8F4  EF  # CURLY BRACKET EXTENDER	# braceex (CUS)

  0x00F0,
  0x232a,//232A  F1  # RIGHT-POINTING ANGLE BRACKET  # angleright
  0x222b,//222B  F2  # INTEGRAL  # integral
  0x2320,//2320  F3  # TOP HALF INTEGRAL # integraltp
  0xf8f5,//F8F5  F4  # INTEGRAL EXTENDER # integralex (CUS)
  0x2321,//2321  F5  # BOTTOM HALF INTEGRAL  # integralbt
  0xf8f6,//F8F6  F6  # RIGHT PAREN TOP	# parenrighttp (CUS)
  0xf8f7,//F8F7  F7  # RIGHT PAREN EXTENDER  # parenrightex (CUS)
  0xf8f8,//F8F8  F8  # RIGHT PAREN BOTTOM	# parenrightbt (CUS)
  0xf8f9,//F8F9  F9  # RIGHT SQUARE BRACKET TOP  # bracketrighttp (CUS)
  0xf8fa,//F8FA  FA  # RIGHT SQUARE BRACKET EXTENDER # bracketrightex (CUS)
  0xf8fb,//F8FB  FB  # RIGHT SQUARE BRACKET BOTTOM	# bracketrightbt (CUS)
  0xf8fc,//F8FC  FC  # RIGHT CURLY BRACKET TOP	# bracerighttp (CUS)
  0xf8fd,//F8FD  FD  # RIGHT CURLY BRACKET MID	# bracerightmid (CUS)
  0xf8fe //F8FE  FE  # RIGHT CURLY BRACKET BOTTOM	# bracerightbt (CUS)
};

// Unicode to Symbol mapping

static const unsigned int Symbol_uni_to_char_table_size = 194;
static _ucc_ Symbol_uni_to_char_table[]=
{
  {0x0020,0x20},	// SPACE	# space
  {0x00A0,0x20},	// NO-BREAK SPACE	# space
  {0x0021,0x21},	// EXCLAMATION MARK	# exclam
  {0x2200,0x22},	// FOR ALL	# universal
  {0x0023,0x23},	// NUMBER SIGN	# numbersign
  {0x2203,0x24},	// THERE EXISTS	# existential
  {0x0025,0x25},	// PERCENT SIGN	# percent
  {0x0026,0x26},	// AMPERSAND	# ampersand
  {0x220B,0x27},	// CONTAINS AS MEMBER	# suchthat
  {0x0028,0x28},	// LEFT PARENTHESIS	# parenleft
  {0x0029,0x29},	// RIGHT PARENTHESIS	# parenright
  {0x2217,0x2A},	// ASTERISK OPERATOR	# asteriskmath
  {0x002B,0x2B},	// PLUS SIGN	# plus
  {0x002C,0x2C},	// COMMA	# comma
  {0x2212,0x2D},	// MINUS SIGN	# minus
  {0x002E,0x2E},	// FULL STOP	# period
  {0x002F,0x2F},	// SOLIDUS	# slash
  {0x0030,0x30},	// DIGIT ZERO	# zero
  {0x0031,0x31},	// DIGIT ONE	# one
  {0x0032,0x32},	// DIGIT TWO	# two
  {0x0033,0x33},	// DIGIT THREE	# three
  {0x0034,0x34},	// DIGIT FOUR	# four
  {0x0035,0x35},	// DIGIT FIVE	# five
  {0x0036,0x36},	// DIGIT SIX	# six
  {0x0037,0x37},	// DIGIT SEVEN	# seven
  {0x0038,0x38},	// DIGIT EIGHT	# eight
  {0x0039,0x39},	// DIGIT NINE	# nine
  {0x003A,0x3A},	// COLON	# colon
  {0x003B,0x3B},	// SEMICOLON	# semicolon
  {0x003C,0x3C},	// LESS-THAN SIGN	# less
  {0x003D,0x3D},	// EQUALS SIGN	# equal
  {0x003E,0x3E},	// GREATER-THAN SIGN	# greater
  {0x003F,0x3F},	// QUESTION MARK	# question
  {0x2245,0x40},	// APPROXIMATELY EQUAL TO	# congruent
  {0x0391,0x41},	// GREEK CAPITAL LETTER ALPHA	# Alpha
  {0x0392,0x42},	// GREEK CAPITAL LETTER BETA	# Beta
  {0x03A7,0x43},	// GREEK CAPITAL LETTER CHI	# Chi
  {0x0394,0x44},	// GREEK CAPITAL LETTER DELTA	# Delta
  {0x2206,0x44},	// INCREMENT	# Delta
  {0x0395,0x45},	// GREEK CAPITAL LETTER EPSILON	# Epsilon
  {0x03A6,0x46},	// GREEK CAPITAL LETTER PHI	# Phi
  {0x0393,0x47},	// GREEK CAPITAL LETTER GAMMA	# Gamma
  {0x0397,0x48},	// GREEK CAPITAL LETTER ETA	# Eta
  {0x0399,0x49},	// GREEK CAPITAL LETTER IOTA	# Iota
  {0x03D1,0x4A},	// GREEK THETA SYMBOL	# theta1
  {0x039A,0x4B},	// GREEK CAPITAL LETTER KAPPA	# Kappa
  {0x039B,0x4C},	// GREEK CAPITAL LETTER LAMDA	# Lambda
  {0x039C,0x4D},	// GREEK CAPITAL LETTER MU	# Mu
  {0x039D,0x4E},	// GREEK CAPITAL LETTER NU	# Nu
  {0x039F,0x4F},	// GREEK CAPITAL LETTER OMICRON	# Omicron
  {0x03A0,0x50},	// GREEK CAPITAL LETTER PI	# Pi
  {0x0398,0x51},	// GREEK CAPITAL LETTER THETA	# Theta
  {0x03A1,0x52},	// GREEK CAPITAL LETTER RHO	# Rho
  {0x03A3,0x53},	// GREEK CAPITAL LETTER SIGMA	# Sigma
  {0x03A4,0x54},	// GREEK CAPITAL LETTER TAU	# Tau
  {0x03A5,0x55},	// GREEK CAPITAL LETTER UPSILON	# Upsilon
  {0x03C2,0x56},	// GREEK SMALL LETTER FINAL SIGMA	# sigma1
  {0x03A9,0x57},	// GREEK CAPITAL LETTER OMEGA	# Omega
  {0x2126,0x57},	// OHM SIGN	# Omega
  {0x039E,0x58},	// GREEK CAPITAL LETTER XI	# Xi
  {0x03A8,0x59},	// GREEK CAPITAL LETTER PSI	# Psi
  {0x0396,0x5A},	// GREEK CAPITAL LETTER ZETA	# Zeta
  {0x005B,0x5B},	// LEFT SQUARE BRACKET	# bracketleft
  {0x2234,0x5C},	// THEREFORE	# therefore
  {0x005D,0x5D},	// RIGHT SQUARE BRACKET	# bracketright
  {0x22A5,0x5E},	// UP TACK	# perpendicular
  {0x005F,0x5F},	// LOW LINE	# underscore
  {0xF8E5,0x60},	// RADICAL EXTENDER	# radicalex (CUS)
  {0x03B1,0x61},	// GREEK SMALL LETTER ALPHA	# alpha
  {0x03B2,0x62},	// GREEK SMALL LETTER BETA	# beta
  {0x03C7,0x63},	// GREEK SMALL LETTER CHI	# chi
  {0x03B4,0x64},	// GREEK SMALL LETTER DELTA	# delta
  {0x03B5,0x65},	// GREEK SMALL LETTER EPSILON	# epsilon
  {0x03C6,0x66},	// GREEK SMALL LETTER PHI	# phi
  {0x03B3,0x67},	// GREEK SMALL LETTER GAMMA	# gamma
  {0x03B7,0x68},	// GREEK SMALL LETTER ETA	# eta
  {0x03B9,0x69},	// GREEK SMALL LETTER IOTA	# iota
  {0x03D5,0x6A},	// GREEK PHI SYMBOL	# phi1
  {0x03BA,0x6B},	// GREEK SMALL LETTER KAPPA	# kappa
  {0x03BB,0x6C},	// GREEK SMALL LETTER LAMDA	# lambda
  {0x00B5,0x6D},	// MICRO SIGN	# mu
  {0x03BC,0x6D},	// GREEK SMALL LETTER MU	# mu
  {0x03BD,0x6E},	// GREEK SMALL LETTER NU	# nu
  {0x03BF,0x6F},	// GREEK SMALL LETTER OMICRON	# omicron
  {0x03C0,0x70},	// GREEK SMALL LETTER PI	# pi
  {0x03B8,0x71},	// GREEK SMALL LETTER THETA	# theta
  {0x03C1,0x72},	// GREEK SMALL LETTER RHO	# rho
  {0x03C3,0x73},	// GREEK SMALL LETTER SIGMA	# sigma
  {0x03C4,0x74},	// GREEK SMALL LETTER TAU	# tau
  {0x03C5,0x75},	// GREEK SMALL LETTER UPSILON	# upsilon
  {0x03D6,0x76},	// GREEK PI SYMBOL	# omega1
  {0x03C9,0x77},	// GREEK SMALL LETTER OMEGA	# omega
  {0x03BE,0x78},	// GREEK SMALL LETTER XI	# xi
  {0x03C8,0x79},	// GREEK SMALL LETTER PSI	# psi
  {0x03B6,0x7A},	// GREEK SMALL LETTER ZETA	# zeta
  {0x007B,0x7B},	// LEFT CURLY BRACKET	# braceleft
  {0x007C,0x7C},	// VERTICAL LINE	# bar
  {0x007D,0x7D},	// RIGHT CURLY BRACKET	# braceright
  {0x223C,0x7E},	// TILDE OPERATOR	# similar
  {0x20AC,0xA0},	// EURO SIGN	# Euro
  {0x03D2,0xA1},	// GREEK UPSILON WITH HOOK SYMBOL	# Upsilon1
  {0x2032,0xA2},	// PRIME	# minute
  {0x2264,0xA3},	// LESS-THAN OR EQUAL TO	# lessequal
  {0x2044,0xA4},	// FRACTION SLASH	# fraction
  {0x2215,0xA4},	// DIVISION SLASH	# fraction
  {0x221E,0xA5},	// INFINITY	# infinity
  {0x0192,0xA6},	// LATIN SMALL LETTER F WITH HOOK	# florin
  {0x2663,0xA7},	// BLACK CLUB SUIT	# club
  {0x2666,0xA8},	// BLACK DIAMOND SUIT	# diamond
  {0x2665,0xA9},	// BLACK HEART SUIT	# heart
  {0x2660,0xAA},	// BLACK SPADE SUIT	# spade
  {0x2194,0xAB},	// LEFT RIGHT ARROW	# arrowboth
  {0x2190,0xAC},	// LEFTWARDS ARROW	# arrowleft
  {0x2191,0xAD},	// UPWARDS ARROW	# arrowup
  {0x2192,0xAE},	// RIGHTWARDS ARROW	# arrowright
  {0x2193,0xAF},	// DOWNWARDS ARROW	# arrowdown
  {0x00B0,0xB0},	// DEGREE SIGN	# degree
  {0x00B1,0xB1},	// PLUS-MINUS SIGN	# plusminus
  {0x2033,0xB2},	// DOUBLE PRIME	# second
  {0x2265,0xB3},	// GREATER-THAN OR EQUAL TO	# greaterequal
  {0x00D7,0xB4},	// MULTIPLICATION SIGN	# multiply
  {0x221D,0xB5},	// PROPORTIONAL TO	# proportional
  {0x2202,0xB6},	// PARTIAL DIFFERENTIAL	# partialdiff
  {0x2022,0xB7},	// BULLET	# bullet
  {0x00F7,0xB8},	// DIVISION SIGN	# divide
  {0x2260,0xB9},	// NOT EQUAL TO	# notequal
  {0x2261,0xBA},	// IDENTICAL TO	# equivalence
  {0x2248,0xBB},	// ALMOST EQUAL TO	# approxequal
  {0x2026,0xBC},	// HORIZONTAL ELLIPSIS	# ellipsis
  {0xF8E6,0xBD},	// VERTICAL ARROW EXTENDER	# arrowvertex (CUS)
  {0xF8E7,0xBE},	// HORIZONTAL ARROW EXTENDER	# arrowhorizex (CUS)
  {0x21B5,0xBF},	// DOWNWARDS ARROW WITH CORNER LEFTWARDS	# carriagereturn
  {0x2135,0xC0},	// ALEF SYMBOL	# aleph
  {0x2111,0xC1},	// BLACK-LETTER CAPITAL I	# Ifraktur
  {0x211C,0xC2},	// BLACK-LETTER CAPITAL R	# Rfraktur
  {0x2118,0xC3},	// SCRIPT CAPITAL P	# weierstrass
  {0x2297,0xC4},	// CIRCLED TIMES	# circlemultiply
  {0x2295,0xC5},	// CIRCLED PLUS	# circleplus
  {0x2205,0xC6},	// EMPTY SET	# emptyset
  {0x2229,0xC7},	// INTERSECTION	# intersection
  {0x222A,0xC8},	// UNION	# union
  {0x2283,0xC9},	// SUPERSET OF	# propersuperset
  {0x2287,0xCA},	// SUPERSET OF OR EQUAL TO	# reflexsuperset
  {0x2284,0xCB},	// NOT A SUBSET OF	# notsubset
  {0x2282,0xCC},	// SUBSET OF	# propersubset
  {0x2286,0xCD},	// SUBSET OF OR EQUAL TO	# reflexsubset
  {0x2208,0xCE},	// ELEMENT OF	# element
  {0x2209,0xCF},	// NOT AN ELEMENT OF	# notelement
  {0x2220,0xD0},	// ANGLE	# angle
  {0x2207,0xD1},	// NABLA	# gradient
  {0xF6DA,0xD2},	// REGISTERED SIGN SERIF	# registerserif (CUS)
  {0xF6D9,0xD3},	// COPYRIGHT SIGN SERIF	# copyrightserif (CUS)
  {0xF6DB,0xD4},	// TRADE MARK SIGN SERIF	# trademarkserif (CUS)
  {0x220F,0xD5},	// N-ARY PRODUCT	# product
  {0x221A,0xD6},	// SQUARE ROOT	# radical
  {0x22C5,0xD7},	// DOT OPERATOR	# dotmath
  {0x00AC,0xD8},	// NOT SIGN	# logicalnot
  {0x2227,0xD9},	// LOGICAL AND	# logicaland
  {0x2228,0xDA},	// LOGICAL OR	# logicalor
  {0x21D4,0xDB},	// LEFT RIGHT DOUBLE ARROW	# arrowdblboth
  {0x21D0,0xDC},	// LEFTWARDS DOUBLE ARROW	# arrowdblleft
  {0x21D1,0xDD},	// UPWARDS DOUBLE ARROW	# arrowdblup
  {0x21D2,0xDE},	// RIGHTWARDS DOUBLE ARROW	# arrowdblright
  {0x21D3,0xDF},	// DOWNWARDS DOUBLE ARROW	# arrowdbldown
  {0x25CA,0xE0},	// LOZENGE	# lozenge
  {0x2329,0xE1},	// LEFT-POINTING ANGLE BRACKET	# angleleft
  {0xF8E8,0xE2},	// REGISTERED SIGN SANS SERIF	# registersans (CUS)
  {0xF8E9,0xE3},	// COPYRIGHT SIGN SANS SERIF	# copyrightsans (CUS)
  {0xF8EA,0xE4},	// TRADE MARK SIGN SANS SERIF	# trademarksans (CUS)
  {0x2211,0xE5},	// N-ARY SUMMATION	# summation
  {0xF8EB,0xE6},	// LEFT PAREN TOP	# parenlefttp (CUS)
  {0xF8EC,0xE7},	// LEFT PAREN EXTENDER	# parenleftex (CUS)
  {0xF8ED,0xE8},	// LEFT PAREN BOTTOM	# parenleftbt (CUS)
  {0xF8EE,0xE9},	// LEFT SQUARE BRACKET TOP	# bracketlefttp (CUS)
  {0xF8EF,0xEA},	// LEFT SQUARE BRACKET EXTENDER	# bracketleftex (CUS)
  {0xF8F0,0xEB},	// LEFT SQUARE BRACKET BOTTOM	# bracketleftbt (CUS)
  {0xF8F1,0xEC},	// LEFT CURLY BRACKET TOP	# bracelefttp (CUS)
  {0xF8F2,0xED},	// LEFT CURLY BRACKET MID	# braceleftmid (CUS)
  {0xF8F3,0xEE},	// LEFT CURLY BRACKET BOTTOM	# braceleftbt (CUS)
  {0xF8F4,0xEF},	// CURLY BRACKET EXTENDER	# braceex (CUS)
  {0x232A,0xF1},	// RIGHT-POINTING ANGLE BRACKET	# angleright
  {0x222B,0xF2},	// INTEGRAL	# integral
  {0x2320,0xF3},	// TOP HALF INTEGRAL	# integraltp
  {0xF8F5,0xF4},	// INTEGRAL EXTENDER	# integralex (CUS)
  {0x2321,0xF5},	// BOTTOM HALF INTEGRAL	# integralbt
  {0xF8F6,0xF6},	// RIGHT PAREN TOP	# parenrighttp (CUS)
  {0xF8F7,0xF7},	// RIGHT PAREN EXTENDER	# parenrightex (CUS)
  {0xF8F8,0xF8},	// RIGHT PAREN BOTTOM	# parenrightbt (CUS)
  {0xF8F9,0xF9},	// RIGHT SQUARE BRACKET TOP	# bracketrighttp (CUS)
  {0xF8FA,0xFA},	// RIGHT SQUARE BRACKET EXTENDER	# bracketrightex (CUS)
  {0xF8FB,0xFB},	// RIGHT SQUARE BRACKET BOTTOM	# bracketrightbt (CUS)
  {0xF8FC,0xFC},	// RIGHT CURLY BRACKET TOP	# bracerighttp (CUS)
  {0xF8FD,0xFD},	// RIGHT CURLY BRACKET MID	# bracerightmid (CUS)
  {0xF8FE,0xFE}		// RIGHT CURLY BRACKET BOTTOM	# bracerightbt (CUS)
};
