##############################################################################
BUILD = build
BIN = Demo

##############################################################################
.PHONY: all directory clean size

CC = riscv32-unknown-elf-gcc
OBJCOPY = riscv32-unknown-elf-objcopy
SIZE = riscv32-unknown-elf-size

CFLAGS += -W -Wall --std=gnu11 -Os
CFLAGS += -fno-diagnostics-show-caret
CFLAGS += -fdata-sections -ffunction-sections
CFLAGS += -funsigned-char -funsigned-bitfields
CFLAGS += -MD -MP -MT $(BUILD)/$(*F).o -MF $(BUILD)/$(@F).d

LDFLAGS += -nostartfiles
LDFLAGS += -Wl,--gc-sections
LDFLAGS += -Wl,--script=../linker/fe310.ld

INCLUDES += \
  -I../include \
  -I..

SRCS += \
  ../main.c \
  ../startup_fe310.c \

DEFINES += \
  -DF_CPU=256000000 \

CFLAGS += $(INCLUDES) $(DEFINES)

OBJS = $(addprefix $(BUILD)/, $(notdir %/$(subst .c,.o, $(SRCS))))

all: directory $(BUILD)/$(BIN).elf $(BUILD)/$(BIN).hex $(BUILD)/$(BIN).bin size

$(BUILD)/$(BIN).elf: $(OBJS)
	@echo LD $@
	@$(CC) $(LDFLAGS) $(OBJS) $(LIBS) -o $@

$(BUILD)/$(BIN).hex: $(BUILD)/$(BIN).elf
	@echo OBJCOPY $@
	@$(OBJCOPY) -O ihex $^ $@

$(BUILD)/$(BIN).bin: $(BUILD)/$(BIN).elf
	@echo OBJCOPY $@
	@$(OBJCOPY) -O binary $^ $@

$(OBJS):
	@echo CC $@
	@$(CC) $(CFLAGS) $(filter %/$(subst .o,.c,$(notdir $@)), $(SRCS)) -c -o $@

directory:
	@gmkdir -p $(BUILD)

size: $(BUILD)/$(BIN).elf
	@echo size:
	@$(SIZE) -t $^

clean:
	@echo clean
	@-rm -rf $(BUILD)

-include $(wildcard $(BUILD)/*.d)

