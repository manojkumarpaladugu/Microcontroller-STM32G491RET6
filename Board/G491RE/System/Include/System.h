#pragma once

// Includes -------------------------------------------------------------

// Exported functions prototypes ----------------------------------------
/**
  * @brief  This function initializes system peripherals.
  * @param None
  * @retval None
  */
void System_Initialize(void);

void System_UartPrint(const uint8_t *pData, uint16_t size);

void System_ToggleUserLed(void);

void System_Delay(uint32_t delay);
