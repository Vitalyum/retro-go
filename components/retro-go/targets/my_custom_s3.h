#pragma once
#define CONFIG_TARGET_ODROID_GO 1 // Оставляем обманку для автозапуска сборки в облаке

#define CONFIG_HW_TARGET_NAME "ESP32-S3 Raycast Console"

// --- Дисплей ST7789 (Безопасные пины без конфликтов с PSRAM) ---
#define DOWNLOAD_DISPLAY_TYPE     DISPLAY_TYPE_ST7789
#define CONFIG_HW_LCD_MOSI        13  // Идет на SDA экрана и MOSI карты памяти
#define CONFIG_HW_LCD_MISO        11  // Идет ТОЛЬКО на MISO карты памяти
#define CONFIG_HW_LCD_CLK         12  // Идет на CLK экрана и CLK карты памяти
#define CONFIG_HW_LCD_DC          14  // Идет на DC экрана
#define CONFIG_HW_LCD_CS          7   // Идет на CS экрана
#define CONFIG_HW_LCD_RESET       8   // Идет на RES экрана
#define CONFIG_HW_LCD_BL          4   // Идет на BLK экрана
#define CONFIG_HW_LCD_INVERT      1   
#define CONFIG_HW_LCD_RGB_ORDER   0   

#define CONFIG_HW_LCD_WIDTH       320
#define CONFIG_HW_LCD_HEIGHT      240
#define CONFIG_HW_LCD_ORIENTATION  ORIENTATION_LANDSCAPE 

// --- Кнопки Действия и Сервисные кнопки ---
#define CONFIG_HW_BTN_A           5   // Кнопка А (Стрельба)
#define CONFIG_HW_BTN_B           6   // Кнопка B (Прыжок)
#define CONFIG_HW_BTN_START       37  // Кнопка START (Новая!)
#define CONFIG_HW_BTN_SELECT      40  // Кнопка SELECT (Новая!)
#define CONFIG_HW_BTN_MENU        42  // Кнопка под стиком (Выход в меню)

// --- Аналоговый Стик ---
#define CONFIG_HW_HAS_ANALOG_STICK 1
#define CONFIG_HW_ANALOG_STICK_X   1   
#define CONFIG_HW_ANALOG_STICK_Y   2   
#define CONFIG_HW_ANALOG_DEADZONE  250 

// --- Слот MicroSD-карты ---
#define CONFIG_HW_SD_CARD_CS      3   // Идет на CS карты памяти
