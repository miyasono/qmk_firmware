VIA_ENABLE = yes
VIAL_ENABLE = yes
VIALRGB_ENABLE = yes
DYNAMIC_KEYMAP_ENABLE = yes

# QMK Settings breaks boot on this port (keyboard never enumerates);
# every other Vial feature (tap dance, combo, key override, caps word,
# layer lock, repeat key, VialRGB) is confirmed working on hardware.
QMK_SETTINGS = no

# Required: without LTO the full-feature image (~83KB) exceeds the 81408-byte
# usable flash region (see ld/FS026.ld) and corrupts the vendor/EEPROM pages.
LTO_ENABLE = yes
