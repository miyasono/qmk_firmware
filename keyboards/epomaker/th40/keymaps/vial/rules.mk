VIA_ENABLE = yes
VIAL_ENABLE = yes
VIALRGB_ENABLE = yes
DYNAMIC_KEYMAP_ENABLE = yes

# Required: without LTO the full-feature image exceeds the 81408-byte usable
# flash region (see ld/FS026.ld) and corrupts the vendor/EEPROM pages. That
# overflow - not QMK Settings itself - was what made earlier full builds die.
# All Vial features incl. QMK Settings are confirmed working on hardware.
LTO_ENABLE = yes
