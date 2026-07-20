VIA_ENABLE = yes
VIAL_ENABLE = yes
VIALRGB_ENABLE = yes
DYNAMIC_KEYMAP_ENABLE = yes

# QMK Settings breaks boot on this port (keyboard never enumerates);
# every other Vial feature (tap dance, combo, key override, caps word,
# layer lock, repeat key, VialRGB) is confirmed working on hardware.
QMK_SETTINGS = no
