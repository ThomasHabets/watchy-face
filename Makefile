# Makefile for Arduino Watchy Firmware

# Arduino CLI command
ARDUINO_CLI = ~/opt/arduino-cli

# Project name and main file
PROJECT_NAME = Watchy
MAIN_FILE = 7_SEG_habets.ino

# Arduino board details
BOARD = esp32:esp32:watchy
PORT = /dev/ttyUSB0  # Change this to your specific port

# Directories
SRC_DIR = .
BUILD_DIR = build

# Libraries
LIBRARIES = \
  Watchy \
  GxEPD \
  Adafruit_GFX_Library
LIBRARIES_FLAGS = $(foreach lib,$(LIBRARIES),--libraries $(lib))

# Add additional flags or settings if needed
CFLAGS=\
-iprefix $HOME/.arduino15/packages/esp32/tools/esp32-arduino-libs/idf-release_v5.1-442a798083/esp32/include/ \
-DARDUINO_WATCHY_V20=1 \
-DARDUINO_ARCH_ESP32 \
-DARDUINO_BOARD="WATCHY_V20" \
-DARDUINO_VARIANT="watchy" \
-DARDUINO_PARTITION_huge_app \
-I$HOME/.arduino15/packages/esp32/hardware/esp32/3.0.1/cores/esp32 \
-I$HOME/.arduino15/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/avr/include/ \
-I$HOME/.arduino15/packages/esp32/hardware/esp32/3.0.1/libraries/WiFi/src \
-DF_CPU=240000000L -DARDUINO=10607 \
-D ARDUINO_HOST_OS="linux" \
-D ARDUINO_FQBN="esp32:esp32:watchy:UploadSpeed=921600,PartitionScheme=huge_app,DebugLevel=none,EraseFlash=none,Revision=v20" \
-D ESP32 \
-D CORE_DEBUG_LEVEL=0 \
-D ARDUINO_USB_CDC_ON_BOOT=0 \
-D ESP_PLATFORM \
-D IDF_VER="v5.1.4-51-g442a798083-dirty" \
-D MBEDTLS_CONFIG_FILE=\"mbedtls/esp_config.h\" \
-D SOC_MMU_PAGE_SIZE=CONFIG_MMU_PAGE_SIZE \
-D UNITY_INCLUDE_CONFIG_H \
-D _GNU_SOURCE \
-D _POSIX_READER_WRITER_LOCKS \
-D configENABLE_FREERTOS_DEBUG_OCDAWARE=1 \
-D TF_LITE_STATIC_MEMORY
BUILD_PROPERTIES = build.extra_flags=$(CFLAGS)

# Default target: compile and upload
all: #compile
	@echo "This makefile doesn't work. Use the arduino IDE instead."

setup:
	$(ARDUINO_CLI) config init
	$(ARDUINO_CLI) core update-index
	$(ARDUINO_CLI) core install esp32:esp32@2.0.17
	$(ARDUINO_CLI) lib install GxEPD2

# Compile the project
compile:
	mkdir -p $(BUILD_DIR)
	$(ARDUINO_CLI) compile -j12 --fqbn $(BOARD) \
	--build-property "$(BUILD_PROPERTIES)" \
	--output-dir $(BUILD_DIR) \
	--log-file $(BUILD_DIR)/log.js --log-format json \
	$(SRC_DIR)/$(MAIN_FILE) \
	$(LIBRARIES_FLAGS)

# Upload the compiled project to the board
upload:
	$(ARDUINO_CLI) upload -p $(PORT) --fqbn $(BOARD) $(SRC_DIR)/$(MAIN_FILE)

# Clean build files
clean:
	rm -rf $(BUILD_DIR)

# List all available boards
boards:
	$(ARDUINO_CLI) board listall

.PHONY: all compile upload clean boards
