LTO_ENABLE = yes
VIA_ENABLE = yes
VIAL_ENABLE = yes
VIAL_INSECURE = yes


#here are the original things from rules.mk

COMMAND_ENABLE = no
CONSOLE_ENABLE = no
EXTRAKEY_ENABLE = yes
#MOUSEKEY_ENABLE = yes
NKRO_ENABLE = yes
SPACE_CADET_ENABLE = no
TERMINAL_ENABLE = no

# # Work around limitation with userland and the way we have 'dynamic' direct wiring
# #     This *should* live in config.h but KemoNine can't figure out how to check which keymap is in use at that level
# PINS_HAND_LEFT = -DDIRECT_PINS="{ { F7, F6, F5, F4 }, { B6, B2, B3, B1 } }"
# PINS_HAND_RIGHT = -DDIRECT_PINS="{ { F4, F5, F6, F7 }, { B1, B3, B2, B6 } }"
# ifeq ($(KEYBOARD), ardux/thepaintbrush)
# 	ifeq ($(KEYMAP), left)
# 		OPT_DEFS += $(PINS_HAND_LEFT)
# 	endif
# 	ifeq ($(strip $(ARDUX_HAND)), left)
# 	   OPT_DEFS += $(PINS_HAND_LEFT)
# 	endif

# 	ifeq ($(KEYMAP), vial)
# 		OPT_DEFS += $(PINS_HAND_LEFT)
# 	endif
# 	ifeq ($(strip $(ARDUX_HAND)), vial)
# 	   OPT_DEFS += $(PINS_HAND_LEFT)
# 	endif

# 	ifeq ($(KEYMAP), right)
# 		OPT_DEFS += $(PINS_HAND_RIGHT)
# 	endif
# 	ifeq ($(strip $(ARDUX_HAND)), right)
# 	   OPT_DEFS += $(PINS_HAND_RIGHT)
# 	endif
# endif
