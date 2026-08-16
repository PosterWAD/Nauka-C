#include "hal.h"
#include <stdio.h>

#define PIN_POMPA (1 << 0)  
#define PIN_ALARM (1 << 1)  

static unsigned char REJESTR_WYJSCIA = 0x00;
static unsigned int  REJESTR_ADC_CISNIENIE = 0;
