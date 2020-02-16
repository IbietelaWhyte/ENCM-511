/*****************************************************************************
 * CoreTimer_Library_Core0.c
 *****************************************************************************/

#include <sys/platform.h>
#include <sys/adi_core.h>
#include <ccblkfn.h>
#include "adi_initialize.h"
#include "CoreTimer_Library_Core0.h"

/** 
 * If you want to use command program arguments, then place them in the following string. 
 */
char __argv_string[] = "";

#include "CrossTimer_Code.h"
int main(int argc, char *argv[])
{
	/**
	 * Initialize managed drivers and/or services that have been added to 
	 * the project.
	 * @return zero on success 
	 */
	adi_initComponents();
	
	/**
	 * The default startup code does not include any functionality to allow
	 * core 0 to enable core 1. A convenient way to enable
	 * core 1 is to use the adi_core_enable function. 
	 */
#if defined(__ADSPBF609__)
	adi_core_enable(ADI_CORE_1);
#endif
	/* Begin adding your custom code here */

	if(CoreTimer_My_Main() == false)
		printf("Main test failed\n");
	else
		printf("Main test passed\n");
	return 0;
}

