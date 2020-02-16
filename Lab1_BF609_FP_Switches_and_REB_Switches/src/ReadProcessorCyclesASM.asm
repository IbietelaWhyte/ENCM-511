.section L1_data;

.var _examplePrivateASMArray[2] = {0, 1};

.section program;
.global _ReadProcessorCyclesASM;

#define returnValue_R0 R0

#define GARBAGE_VALUE 0x0042

_ReadProcessorCyclesASM:
	LINK 20;
	#if 0
	returnValue_R0 = GARBAGE_VALUE;
	#else
	returnValue_R0 = CYCLES;
	#endif
	UNLINK;
_ReadProcessorCyclesASM.END:
	RTS;