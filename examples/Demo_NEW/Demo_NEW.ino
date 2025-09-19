#include "Pervasive_BWRY_Medium.h"

// DEMO Image Set <Comment out when in User Mode>
// Screen Size: 581, 741
#define SCRN 581
#include "globalupdate_src/demoImageData.h"

Pervasive_BWRY_Medium myDriver(eScreen_EPD_581_QS_0B, boardRaspberryPiPico_RP2040);
// Pervasive_BWRY_Medium myDriver(eScreen_EPD_741_QS_0B, boardRaspberryPiPico_RP2040);

void setup()
{
    hV_HAL_begin();

    myDriver.begin();

    myDriver.updateNormal(BW_monoBuffer, frameSize);

    hV_HAL_exit();
}

void loop()
{
    hV_HAL_delayMilliseconds(1000);
}