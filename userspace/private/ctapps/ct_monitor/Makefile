EXE = ct_monitor
dynamic: generic_exe_install

clean:
	rm -f ct_monitor


ct_monitor:
	cp ct_monitor_$(PROFILE)_save ct_monitor

CURR_DIR := $(shell pwd)
BUILD_DIR := $(subst /userspace, /userspace,$(CURR_DIR))
BUILD_DIR := $(word 1, $(BUILD_DIR))
include $(BUILD_DIR)/make.common
