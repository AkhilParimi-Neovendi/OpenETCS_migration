/*
 * macro_libmathext32.h
 *
 * Copyright(c) 2003-2014 Esterel Technologies
 *
 *
 */

#include <math.h>
#include "kcg_types.h"


/* Inverse hyperbolic cosine */
#define AcoshR32_mathext_mathextimpl(In) ((kcg_float32) log((kcg_float32) In +sqrt((((kcg_float32) In) * ((kcg_float32) In)) - 1.0)))

/* Inverse Cosine */
#define AcosR32_mathext_mathextimpl(In) ((kcg_float32) acos((kcg_float32) In))

/* Inverse hyperbolic sine */
/*	The Result is slightly different from Simulink result
	Difference is of kind  E-13 
	(for big input (for example E4) difference is of kind E-8) */
#define AsinhR32_mathext_mathextimpl(In) ((kcg_float32) log(((kcg_float32) In) + sqrt(1.0 + (((kcg_float32) In) * ((kcg_float32) In)))))


/* Inverse sine */
#define AsinR32_mathext_mathextimpl(In) ((kcg_float32) asin((kcg_float32) In))

/* Inverse hyperbolic tangent */
#define AtanhR32_mathext_mathextimpl(In) ((kcg_float32) (0.5 * log((1 + ((kcg_float32) In)) / (1 - ((kcg_float32) In)))))

/* Inverse tangent */
#define AtanR32_mathext_mathextimpl(In) ((kcg_float32) atan((kcg_float32) In))

/* Four quadrant inverse tangent */
#define Atan2R32_mathext_mathextimpl(In1, In2) ((kcg_float32) atan2((kcg_float32) In1, (kcg_float32) In2))


/* Hyperbolic cosine */
#define CoshR32_mathext_mathextimpl(In) ((kcg_float32) cosh((kcg_float32) In))

/* Cosine */
#define CosR32_mathext_mathextimpl(In) ((kcg_float32) cos((kcg_float32) In))

/* Exponential */
#define ExpR32_mathext_mathextimpl(In) ((kcg_float32) exp((kcg_float32) In))

/* Logarithm with base e */
#define LnR32_mathext_mathextimpl(In) ((kcg_float32) log((kcg_float32) In))

/* Logarithm with base 10 */
#define LogR32_mathext_mathextimpl(In) ((kcg_float32) log10((kcg_float32) In))

/* Power */
#define PowerI_mathext(In, Power)  ((kcg_int32) pow((kcg_float32) In, (kcg_float32) Power))
#define PowerR32_mathext_mathextimpl(In, Power)  ((kcg_float32) pow((kcg_float32) In, (kcg_float32) Power))
/* Note: In SCADE 5.1, there was an assert in simulation mode to check validity of parameters.  */
/*       In SCADE 6.0, this operator will likely end-up not being an imported operator anymore. */
#define PowerRR32_mathext_mathextimpl(In, Power) ((kcg_float32) pow((kcg_float32) In, (kcg_float32) Power))


/* Hyperbolic sine */
#define SinhR32_mathext_mathextimpl(In) ((kcg_float32) sinh((kcg_float32) In))

/* Sine */
#define SinR32_mathext_mathextimpl(In) ((kcg_float32) sin((kcg_float32) In))

/* Sqrt */
#define SqrtR32_mathext_mathextimpl(In) ((kcg_float32) sqrt((kcg_float32) In))


/* Tangent */
#define TanR32_mathext_mathextimpl(In) ((kcg_float32) tan((kcg_float32) In))

/* Hyperbolic tangent */
#define TanhR32_mathext_mathextimpl(In) ((kcg_float32) tanh((kcg_float32) In))

/* 10^x */
#define TenPowR32_mathext_mathextimpl(In) ((kcg_float32) pow((kcg_float32) 10, (kcg_float32) In))
