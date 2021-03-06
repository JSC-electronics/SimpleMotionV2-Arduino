#ifndef USER_OPTIONS_H
#define USER_OPTIONS_H

/* User modifiable parameters are located in this file AND makefiles (i.e. Qt's SimpleMotionV2.pri or Makefile).
 * Be sure to check makefiles for more compile time options. The reason why options are also in makefiles is that
 * header alone can't control linking of external libraries. */

//comment out to disable, gives smaller & faster code
// Commenting out this will also disable smDescribe* functions.
#define ENABLE_DEBUG_PRINTS

//max number of simultaneously opened buses. change this and recompiple SMlib if
//necessary (to increase channels or reduce to save memory)
#ifdef ARDUINO
#define ENABLE_BUILT_IN_DRIVERS
#define SM_MAX_BUSES 1

// Uncomment to enable M5stack driver (requires M5stack library)
// #define M5STACK_RS485
#else
#define SM_MAX_BUSES 10
#endif


#endif // USER_OPTIONS_H
