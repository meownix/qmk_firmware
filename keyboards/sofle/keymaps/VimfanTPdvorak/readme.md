![SofleKeyboard default keymap](https://github.com/josefadamcik/SofleKeyboard/raw/master/Images/soflekeyboard.png)
![SofleKeyboard adjust layer](https://github.com/josefadamcik/SofleKeyboard/raw/master/Images/soflekeyboard_layout_adjust.png)


# VimfanTPdvorak Sofle RGB keymap

Build with `qmk compile -kb sofle/rev1 -km VimfanTPdvorak`.
The firmware keeps the right half as USB master, the Bongo Cat/WPM OLED,
QWERTY/Colemak-DH/Dvorak layouts, media controls, and the mouse layer.

## RGB lighting

The RGB configuration matches the recovered seller firmware: WS2812-compatible
LEDs on D3, with 72 configured LEDs split 36 per half. Only static lighting is
enabled to leave room for Bongo Cat. The initial brightness is 32/255 and the
maximum is capped at 120/255. Saved EEPROM settings can override the initial
brightness and enabled state.

Hold both **Lower and Raise** thumb keys to access Adjust. Use the physical top
row on the left half, counting from its outer left edge, regardless of what the
keys normally type:

| Physical key position | Action |
| --- | --- |
| 1st (normally grave) | Unused |
| 2nd (normally 1) | Toggle RGB |
| 3rd (normally 2) | Previous hue |
| 4th (normally 3) | Next hue |
| 5th (normally 4) | Lower brightness |
| 6th (normally 5) | Raise brightness |

These controls save their settings. Existing layout selection, mouse selection,
bootloader, and media keys on Adjust stay in their original positions.

Flash the same firmware onto both halves, one at a time. Disconnect USB power
before changing the cable between halves. During normal use, connect USB to the
right half.

## OLED displays

The right status display uses fixed rows and clears the full buffer when its
status changes, keeping blank areas clean without preventing the idle timeout.
Caps Lock is highlighted according to the host's LED state. Its binding is
**Raise alone + the far-right key on the left home row**.

The left Bongo Cat display has a shortened table line and clears once when
returning to the QMK logo, avoiding leftover pixels along the display edge.

## Original layout reference

Layout in [Keyboard Layout Editor](http://www.keyboard-layout-editor.com/#/gists/76efb423a46cbbea75465cb468eef7ff) and [adjust layer](http://www.keyboard-layout-editor.com/#/gists/4bcf66f922cfd54da20ba04905d56bd4)


Features:

- Symmetric modifiers (CMD/Super, Alt/Opt, Ctrl, Shift)
- Various modes, can be switched (using Adjust layer and the selected one is stored in EEPROM.
- Modes for Qwerty and Colemak support
- Modes for Mac vs Linux/Win support -> different order of modifiers and different action shortcuts on the "UPPER" layer (the red one in the image). Designed to simplify transtions when switching between operating systems often.
- The OLED on master half shows selected mode and caps lock state and is rotated.
- Left encoder controls volume up/down/mute. Right encoder PGUP/PGDOWN.


