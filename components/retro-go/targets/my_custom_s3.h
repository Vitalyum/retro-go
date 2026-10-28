#pragma once
#define CONFIG_TARGET_ODROID_GO 1 // Оставляем для автоматического запуска сборки в облаке

#define CONFIG_HW_TARGET_NAME "ESP32-S3 Raycast Console"

// --- Дисплей ST7789 (Новые безопасные пины CS и RST) ---
#define DOWNLOAD_DISPLAY_TYPE     DISPLAY_TYPE_ST7789
#define CONFIG_HW_LCD_MISO        11
#define CONFIG_HW_LCD_MOSI        13
#define CONFIG_HW_LCD_CLK         12
#define CONFIG_HW_LCD_DC          14
#define CONFIG_HW_LCD_CS          7   // Сюда перепаиваем CS экрана
#define CONFIG_HW_LCD_RESET       8   // Сюда перепаиваем RST экрана
#define CONFIG_HW_LCD_BL          4
#define CONFIG_HW_LCD_INVERT      1   
#define CONFIG_HW_LCD_RGB_ORDER   0   

#define CONFIG_HW_LCD_WIDTH       320
#define CONFIG_HW_LCD_HEIGHT      240
#define CONFIG_HW_LCD_ORIENTATION  ORIENTATION_LANDSCAPE 

// --- Кнопки Действия (Из вашего кода) ---
#define CONFIG_HW_BTN_A           5   // BTN_A_PIN
#define CONFIG_HW_BTN_B           6   // BTN_B_PIN
#define CONFIG_HW_BTN_MENU        42  // STICK_SW_PIN (Кнопка стика)

// --- Аналоговый Стик (Из вашего кода) ---
#define CONFIG_HW_HAS_ANALOG_STICK 1
#define CONFIG_HW_ANALOG_STICK_X   1   // STICK_X_PIN
#define CONFIG_HW_ANALOG_STICK_Y   2   // STICK_Y_PIN
#define CONFIG_HW_ANALOG_DEADZONE  250 

// --- Слот MicroSD-карты ---
#define CONFIG_HW_SD_CARD_CS      3   // Выделяем свободный GPIO 3 для CS карты памяти
