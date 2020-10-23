#ifndef CLEAR
	#define LOWER 0 /* lower limit of table */
	#define UPPER 300 /* upper limit */
	#define STEP 20 /* step size */
#else
	#ifndef LOWER
		#define LOWER 0 /* lower limit of table */
	#endif
	#ifndef UPPER
		#define UPPER 1 /* upper limit */
	#endif
	#ifndef STEP
		#define STEP 1 /* step size */
	#endif
#endif

