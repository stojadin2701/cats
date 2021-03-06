//
// Created by stoja on 31.01.21.
//

#pragma once

_Noreturn void task_usb_communicator(void *argument);

#define USB_COMMAND_NR  10
#define USB_VARIABLE_NR 6
#define USB_FILTER_NR   7

typedef enum {
  CATS_USB_CMD_SAVE = 0,
  CATS_USB_CMD_EXIT,
  CATS_USB_CMD_STATUS,
  CATS_USB_CMD_VERSION,
  CATS_USB_CMD_DUMP,
  CATS_USB_CMD_FLASH_ERASE,
  CATS_USB_CMD_SET,
  CATS_USB_CMD_GET,
  CATS_USB_CMD_READ,
  CATS_USB_CMD_HELP,
  CATS_USB_CMD_UNKNOWN
} cats_usb_commands;

typedef enum {
  CATS_USB_VAR_LIFTOFF_ACC_THRESH = 0,
  CATS_USB_VAR_FILTER_CONF,
  CATS_USB_VAR_APOGEE_TIMER1,
  CATS_USB_VAR_APOGEE_TIMER2,
  CATS_USB_VAR_STAGES,
  CATS_USB_VAR_BOOT_STATE,
  CATS_USB_VAR_UNKNOWN
} cats_usb_variables;
